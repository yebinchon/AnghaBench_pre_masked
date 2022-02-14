
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_geom {int consumer; struct g_eli_softc* softc; } ;
struct g_eli_softc {int sc_inflight; } ;
struct g_consumer {TYPE_2__* provider; } ;
struct cryptop {scalar_t__ crp_etype; TYPE_1__* crp_desc; scalar_t__ crp_opaque; } ;
struct bio {int bio_inbed; int bio_children; scalar_t__ bio_error; TYPE_2__* bio_to; int bio_done; int * bio_driver2; int * bio_data; struct bio* bio_driver1; } ;
struct TYPE_4__ {struct g_geom* geom; } ;
struct TYPE_3__ {int crd_key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int,int,...) ;
 int FUNC_1 (int,struct bio*,char*,...) ;
 struct g_consumer* FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct bio*) ;
 scalar_t__ FUNC_6 (struct cryptop*) ;
 int FUNC_7 (struct g_eli_softc*,int ) ;
 int VAR_2 ;
 int FUNC_8 (struct bio*,scalar_t__) ;
 int FUNC_9 (struct bio*,struct g_consumer*) ;

__attribute__((used)) static int
FUNC_10(struct cryptop *VAR_3)
{
 struct g_eli_softc *VAR_4;
 struct g_geom *VAR_5;
 struct g_consumer *VAR_6;
 struct bio *VAR_7, *VAR_8;

 if (VAR_3->crp_etype == VAR_0) {
  if (FUNC_6(VAR_3) == 0)
   return (0);
 }
 VAR_7 = (struct bio *)VAR_3->crp_opaque;
 VAR_7->bio_inbed++;
 if (VAR_3->crp_etype == 0) {
  FUNC_0(3, "Crypto WRITE request done (%d/%d).",
      VAR_7->bio_inbed, VAR_7->bio_children);
 } else {
  FUNC_0(1, "Crypto WRITE request failed (%d/%d) error=%d.",
      VAR_7->bio_inbed, VAR_7->bio_children, VAR_3->crp_etype);
  if (VAR_7->bio_error == 0)
   VAR_7->bio_error = VAR_3->crp_etype;
 }
 VAR_5 = VAR_7->bio_to->geom;
 VAR_4 = VAR_5->softc;
 FUNC_7(VAR_4, VAR_3->crp_desc->crd_key);



 if (VAR_7->bio_inbed < VAR_7->bio_children)
  return (0);
 VAR_7->bio_inbed = 0;
 VAR_7->bio_children = 1;
 VAR_8 = VAR_7->bio_driver1;
 VAR_7->bio_driver1 = ((void*)0);
 if (VAR_7->bio_error != 0) {
  FUNC_1(0, VAR_7, "Crypto WRITE request failed (error=%d).",
      VAR_7->bio_error);
  FUNC_4(VAR_7->bio_driver2, VAR_1);
  VAR_7->bio_driver2 = ((void*)0);
  FUNC_5(VAR_8);
  FUNC_8(VAR_7, VAR_7->bio_error);
  FUNC_3(&VAR_4->sc_inflight, 1);
  return (0);
 }
 VAR_8->bio_data = VAR_7->bio_driver2;
 VAR_8->bio_done = VAR_2;
 VAR_6 = FUNC_2(&VAR_5->consumer);
 VAR_8->bio_to = VAR_6->provider;
 FUNC_1(2, VAR_8, "Sending request.");



 FUNC_9(VAR_8, VAR_6);
 return (0);
}
