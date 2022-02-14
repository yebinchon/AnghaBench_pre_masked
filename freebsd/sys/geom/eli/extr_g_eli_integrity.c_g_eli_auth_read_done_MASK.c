
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct g_eli_softc {int sc_data_per_sector; int sc_bytes_per_sector; int sc_alen; scalar_t__ sc_name; int sc_inflight; TYPE_6__* sc_geom; } ;
struct cryptop {scalar_t__ crp_etype; TYPE_3__* crp_desc; scalar_t__ crp_olen; scalar_t__ crp_opaque; } ;
struct bio {scalar_t__ bio_inbed; scalar_t__ bio_children; scalar_t__ bio_error; int bio_length; int bio_offset; scalar_t__ bio_completed; int * bio_driver2; int * bio_data; TYPE_4__* bio_to; } ;
typedef int off_t ;
typedef scalar_t__ intmax_t ;
struct TYPE_14__ {TYPE_5__* provider; } ;
struct TYPE_13__ {int consumer; } ;
struct TYPE_12__ {int sectorsize; } ;
struct TYPE_11__ {int sectorsize; TYPE_1__* geom; } ;
struct TYPE_10__ {TYPE_2__* crd_next; } ;
struct TYPE_9__ {int crd_key; } ;
struct TYPE_8__ {struct g_eli_softc* softc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 int FUNC_1 (int ,struct bio*,char*,int) ;
 TYPE_7__* FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (struct cryptop*) ;
 int FUNC_8 (struct g_eli_softc*,int ) ;
 int FUNC_9 (struct bio*,int) ;

__attribute__((used)) static int
FUNC_10(struct cryptop *VAR_3)
{
 struct g_eli_softc *VAR_4;
 struct bio *VAR_5;

 if (VAR_3->crp_etype == VAR_0) {
  if (FUNC_7(VAR_3) == 0)
   return (0);
 }
 VAR_5 = (struct bio *)VAR_3->crp_opaque;
 VAR_5->bio_inbed++;
 if (VAR_3->crp_etype == 0) {
  VAR_5->bio_completed += VAR_3->crp_olen;
  FUNC_0(3, "Crypto READ request done (%d/%d) (add=%jd completed=%jd).",
      VAR_5->bio_inbed, VAR_5->bio_children, (intmax_t)VAR_3->crp_olen, (intmax_t)VAR_5->bio_completed);
 } else {
  FUNC_0(1, "Crypto READ request failed (%d/%d) error=%d.",
      VAR_5->bio_inbed, VAR_5->bio_children, VAR_3->crp_etype);
  if (VAR_5->bio_error == 0)
   VAR_5->bio_error = VAR_3->crp_etype;
 }
 VAR_4 = VAR_5->bio_to->geom->softc;
 FUNC_8(VAR_4, VAR_3->crp_desc->crd_next->crd_key);



 if (VAR_5->bio_inbed < VAR_5->bio_children)
  return (0);
 if (VAR_5->bio_error == 0) {
  u_int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  u_char *VAR_12, *VAR_13, *VAR_14;
  off_t VAR_15, VAR_16;





  VAR_10 = VAR_5->bio_to->sectorsize;

  VAR_11 = FUNC_2(&VAR_4->sc_geom->consumer)->provider->sectorsize;

  VAR_9 = VAR_4->sc_data_per_sector;

  VAR_8 = VAR_5->bio_length / VAR_10;

  VAR_8 = (VAR_8 * VAR_4->sc_bytes_per_sector) / VAR_11;

  VAR_7 = VAR_4->sc_bytes_per_sector / VAR_11;

  VAR_12 = VAR_5->bio_driver2;
  VAR_13 = VAR_5->bio_data;
  VAR_14 = VAR_12 + VAR_11 * VAR_8;
  VAR_15 = -1;
  VAR_16 = 0;

  for (VAR_6 = 1; VAR_6 <= VAR_8; VAR_6++) {
   VAR_9 = VAR_4->sc_data_per_sector;
   if ((VAR_6 % VAR_7) == 0)
    VAR_9 = VAR_10 % VAR_9;
   if (FUNC_4(VAR_12, VAR_14, VAR_4->sc_alen) != 0) {





    if (VAR_5->bio_error == 0)
     VAR_5->bio_error = -1;
    if (VAR_15 == -1) {
     VAR_15 = VAR_5->bio_offset +
         (VAR_13 - (u_char *)VAR_5->bio_data);
    }
    VAR_16 += VAR_9;
   } else {




    if (VAR_15 != -1) {
     FUNC_0(0, "%s: Failed to authenticate %jd "
         "bytes of data at offset %jd.",
         VAR_4->sc_name, (intmax_t)VAR_16,
         (intmax_t)VAR_15);
     VAR_15 = -1;
     VAR_16 = 0;
    }
    FUNC_5(VAR_12 + VAR_4->sc_alen, VAR_13,
        VAR_9);
   }
   VAR_12 += VAR_11;
   VAR_13 += VAR_9;
   VAR_14 += VAR_4->sc_alen;
  }

  if (VAR_15 != -1) {
   FUNC_0(0, "%s: Failed to authenticate %jd "
       "bytes of data at offset %jd.",
       VAR_4->sc_name, (intmax_t)VAR_16, (intmax_t)VAR_15);
  }
 }
 FUNC_6(VAR_5->bio_driver2, VAR_2);
 VAR_5->bio_driver2 = ((void*)0);
 if (VAR_5->bio_error != 0) {
  if (VAR_5->bio_error == -1)
   VAR_5->bio_error = VAR_1;
  else {
   FUNC_1(0, VAR_5,
       "Crypto READ request failed (error=%d).",
       VAR_5->bio_error);
  }
  VAR_5->bio_completed = 0;
 }



 FUNC_9(VAR_5, VAR_5->bio_error);
 FUNC_3(&VAR_4->sc_inflight, 1);
 return (0);
}
