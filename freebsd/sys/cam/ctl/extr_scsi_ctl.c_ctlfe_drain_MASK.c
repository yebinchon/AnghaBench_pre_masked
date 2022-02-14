
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlfe_lun_softc {scalar_t__ refcount; } ;
struct cam_periph {struct ctlfe_lun_softc* softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct cam_periph*) ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*,scalar_t__*,int ,char*,int) ;
 int FUNC_3 (struct cam_periph*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, int VAR_2)
{
 struct cam_periph *VAR_3 = VAR_1;
 struct ctlfe_lun_softc *VAR_4 = VAR_3->softc;

 FUNC_0(VAR_3);
 while (VAR_4->refcount != 0) {
  FUNC_2(VAR_3, &VAR_4->refcount, VAR_0,
      "ctlfe_drain", 1);
 }
 FUNC_3(VAR_3);
 FUNC_1(VAR_3);
}
