
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct g_eli_softc {int sc_bytes_per_sector; TYPE_3__* sc_geom; int sc_inflight; } ;
struct g_consumer {TYPE_4__* provider; } ;
struct cryptop {scalar_t__ crp_etype; TYPE_2__* crp_desc; scalar_t__ crp_opaque; } ;
struct bio {int bio_inbed; int bio_children; scalar_t__ bio_error; int bio_length; int bio_offset; void* bio_done; TYPE_4__* bio_to; int * bio_data; int * bio_driver2; struct bio* bio_driver1; } ;
struct TYPE_8__ {int sectorsize; TYPE_1__* geom; } ;
struct TYPE_7__ {int consumer; } ;
struct TYPE_6__ {int crd_key; } ;
struct TYPE_5__ {struct g_eli_softc* softc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int,int,...) ;
 int FUNC_1 (int,struct bio*,char*,...) ;
 struct g_consumer* FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct bio*) ;
 struct bio* FUNC_6 (struct bio*) ;
 scalar_t__ FUNC_7 (struct cryptop*) ;
 int FUNC_8 (struct g_eli_softc*,int ) ;
 void* VAR_3 ;
 int FUNC_9 (struct bio*,scalar_t__) ;
 int FUNC_10 (struct bio*,struct g_consumer*) ;

__attribute__((used)) static int
FUNC_11(struct cryptop *VAR_4)
{
 struct g_eli_softc *VAR_5;
 struct g_consumer *VAR_6;
 struct bio *VAR_7, *VAR_8, *VAR_9;
 u_int VAR_10;

 if (VAR_4->crp_etype == VAR_0) {
  if (FUNC_7(VAR_4) == 0)
   return (0);
 }
 VAR_7 = (struct bio *)VAR_4->crp_opaque;
 VAR_7->bio_inbed++;
 if (VAR_4->crp_etype == 0) {
  FUNC_0(3, "Crypto WRITE request done (%d/%d).",
      VAR_7->bio_inbed, VAR_7->bio_children);
 } else {
  FUNC_0(1, "Crypto WRITE request failed (%d/%d) error=%d.",
      VAR_7->bio_inbed, VAR_7->bio_children, VAR_4->crp_etype);
  if (VAR_7->bio_error == 0)
   VAR_7->bio_error = VAR_4->crp_etype;
 }
 VAR_5 = VAR_7->bio_to->geom->softc;
 FUNC_8(VAR_5, VAR_4->crp_desc->crd_key);



 if (VAR_7->bio_inbed < VAR_7->bio_children)
  return (0);
 if (VAR_7->bio_error != 0) {
  FUNC_1(0, VAR_7, "Crypto WRITE request failed (error=%d).",
      VAR_7->bio_error);
  FUNC_4(VAR_7->bio_driver2, VAR_2);
  VAR_7->bio_driver2 = ((void*)0);
  VAR_8 = VAR_7->bio_driver1;
  VAR_7->bio_driver1 = ((void*)0);
  FUNC_5(VAR_8);
  FUNC_9(VAR_7, VAR_7->bio_error);
  FUNC_3(&VAR_5->sc_inflight, 1);
  return (0);
 }
 VAR_6 = FUNC_2(&VAR_5->sc_geom->consumer);
 VAR_8 = VAR_7->bio_driver1;
 VAR_7->bio_driver1 = ((void*)0);
 VAR_8->bio_to = VAR_6->provider;
 VAR_8->bio_done = VAR_3;


 VAR_10 = VAR_7->bio_length / VAR_7->bio_to->sectorsize;

 VAR_10 = (VAR_10 * VAR_5->sc_bytes_per_sector) / VAR_6->provider->sectorsize;

 VAR_8->bio_length = VAR_6->provider->sectorsize * VAR_10;
 VAR_8->bio_offset = (VAR_7->bio_offset / VAR_7->bio_to->sectorsize) * VAR_5->sc_bytes_per_sector;
 VAR_8->bio_data = VAR_7->bio_driver2;





 VAR_9 = ((void*)0);
 if (VAR_8->bio_length > VAR_1) {
  VAR_9 = FUNC_6(VAR_7);
  VAR_9->bio_length = VAR_8->bio_length - VAR_1;
  VAR_9->bio_data = VAR_8->bio_data + VAR_1;
  VAR_9->bio_offset = VAR_8->bio_offset + VAR_1;
  VAR_9->bio_to = VAR_6->provider;
  VAR_9->bio_done = VAR_3;
  VAR_8->bio_length = VAR_1;
 }



 FUNC_1(2, VAR_8, "Sending request.");
 VAR_7->bio_inbed = 0;
 VAR_7->bio_children = (VAR_9 != ((void*)0) ? 2 : 1);
 FUNC_10(VAR_8, VAR_6);
 if (VAR_9 != ((void*)0)) {
  FUNC_1(2, VAR_9, "Sending request.");
  FUNC_10(VAR_9, VAR_6);
 }
 return (0);
}
