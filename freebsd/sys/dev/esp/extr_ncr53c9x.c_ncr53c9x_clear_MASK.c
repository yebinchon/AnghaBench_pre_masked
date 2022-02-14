
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ncr53c9x_softc {int sc_ntarg; struct ncr53c9x_ecb* sc_nexus; scalar_t__ sc_msgify; int sc_state; } ;
struct ncr53c9x_ecb {TYPE_1__* ccb; } ;
typedef int cam_status ;
struct TYPE_4__ {int status; } ;
struct TYPE_3__ {TYPE_2__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ncr53c9x_softc*,int ) ;
 int FUNC_1 (struct ncr53c9x_softc*,int,int ) ;
 int FUNC_2 (struct ncr53c9x_softc*,struct ncr53c9x_ecb*) ;

__attribute__((used)) static void
FUNC_3(struct ncr53c9x_softc *VAR_2, cam_status VAR_3)
{
 struct ncr53c9x_ecb *VAR_4;
 int VAR_5;

 FUNC_0(VAR_2, VAR_0);


 VAR_2->sc_state = VAR_1;
 VAR_2->sc_msgify = 0;
 VAR_4 = VAR_2->sc_nexus;
 if (VAR_4 != ((void*)0)) {
  VAR_4->ccb->ccb_h.status = VAR_3;
  FUNC_2(VAR_2, VAR_4);
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->sc_ntarg; VAR_5++)
  FUNC_1(VAR_2, VAR_5, VAR_3);
}
