
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; scalar_t__ ppriv_ptr1; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct mpssas_softc {int sc; } ;
struct cam_periph {int dummy; } ;
typedef int path_str ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,char*) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct cam_periph *VAR_1, union ccb *VAR_2)
{
 struct mpssas_softc *VAR_3;
 char VAR_4[64];

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = (struct mpssas_softc *)VAR_2->ccb_h.ppriv_ptr1;

 FUNC_3(VAR_2->ccb_h.path, VAR_4, sizeof(VAR_4));
 FUNC_0(VAR_3->sc, VAR_0, "Completing stop unit for %s\n",
     VAR_4);






 FUNC_2(VAR_2->ccb_h.path);
 FUNC_1(VAR_2);
}
