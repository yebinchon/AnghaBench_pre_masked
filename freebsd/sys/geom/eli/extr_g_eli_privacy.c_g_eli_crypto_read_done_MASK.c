
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct g_eli_softc {int sc_inflight; } ;
struct cryptop {scalar_t__ crp_etype; TYPE_3__* crp_desc; scalar_t__ crp_olen; scalar_t__ crp_opaque; } ;
struct bio {scalar_t__ bio_inbed; scalar_t__ bio_children; scalar_t__ bio_error; scalar_t__ bio_completed; int * bio_driver2; TYPE_2__* bio_to; } ;
struct TYPE_6__ {int crd_key; } ;
struct TYPE_5__ {TYPE_1__* geom; } ;
struct TYPE_4__ {struct g_eli_softc* softc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_1 (int ,struct bio*,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct cryptop*) ;
 int FUNC_5 (struct g_eli_softc*,int ) ;
 int FUNC_6 (struct bio*,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct cryptop *VAR_2)
{
 struct g_eli_softc *VAR_3;
 struct bio *VAR_4;

 if (VAR_2->crp_etype == VAR_0) {
  if (FUNC_4(VAR_2) == 0)
   return (0);
 }
 VAR_4 = (struct bio *)VAR_2->crp_opaque;
 VAR_4->bio_inbed++;
 if (VAR_2->crp_etype == 0) {
  FUNC_0(3, "Crypto READ request done (%d/%d).",
      VAR_4->bio_inbed, VAR_4->bio_children);
  VAR_4->bio_completed += VAR_2->crp_olen;
 } else {
  FUNC_0(1, "Crypto READ request failed (%d/%d) error=%d.",
      VAR_4->bio_inbed, VAR_4->bio_children, VAR_2->crp_etype);
  if (VAR_4->bio_error == 0)
   VAR_4->bio_error = VAR_2->crp_etype;
 }
 VAR_3 = VAR_4->bio_to->geom->softc;
 if (VAR_3 != ((void*)0))
  FUNC_5(VAR_3, VAR_2->crp_desc->crd_key);



 if (VAR_4->bio_inbed < VAR_4->bio_children)
  return (0);
 FUNC_3(VAR_4->bio_driver2, VAR_1);
 VAR_4->bio_driver2 = ((void*)0);
 if (VAR_4->bio_error != 0) {
  FUNC_1(0, VAR_4, "Crypto READ request failed (error=%d).",
      VAR_4->bio_error);
  VAR_4->bio_completed = 0;
 }



 FUNC_6(VAR_4, VAR_4->bio_error);
 if (VAR_3 != ((void*)0))
  FUNC_2(&VAR_3->sc_inflight, 1);
 return (0);
}
