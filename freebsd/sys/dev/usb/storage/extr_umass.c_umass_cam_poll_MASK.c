
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umass_softc {int sc_xfer; } ;
struct cam_sim {scalar_t__ softc; } ;


 int FUNC_0 (struct umass_softc*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct cam_sim *VAR_2)
{
 struct umass_softc *VAR_3 = (struct umass_softc *)VAR_2->softc;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_0(VAR_3, VAR_0, "CAM poll\n");

 FUNC_1(VAR_3->sc_xfer, VAR_1);
}
