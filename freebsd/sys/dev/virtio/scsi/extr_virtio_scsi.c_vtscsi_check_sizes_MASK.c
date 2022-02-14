
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_softc {int vtscsi_flags; int vtscsi_max_nsegs; int vtscsi_dev; int vtscsi_request_vq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct vtscsi_softc *VAR_1)
{
 int VAR_2;

 if ((VAR_1->vtscsi_flags & VAR_0) == 0) {




  VAR_2 = FUNC_1(VAR_1->vtscsi_request_vq);
  if (VAR_1->vtscsi_max_nsegs > VAR_2) {
   FUNC_0(VAR_1->vtscsi_dev,
       "clamping seg_max (%d %d)\n", VAR_1->vtscsi_max_nsegs,
       VAR_2);
   VAR_1->vtscsi_max_nsegs = VAR_2;
  }
 }
}
