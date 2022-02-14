
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twa_softc {int ctlr_handle; } ;
struct cam_sim {int dummy; } ;
typedef int TW_VOID ;


 scalar_t__ FUNC_0 (struct cam_sim*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct twa_softc*,char*,struct twa_softc*) ;

TW_VOID
FUNC_3(struct cam_sim *VAR_0)
{
 struct twa_softc *VAR_1 = (struct twa_softc *)(FUNC_0(VAR_0));

 FUNC_2(3, VAR_1, "entering; sc = %p", VAR_1);
 FUNC_1(&(VAR_1->ctlr_handle));
 FUNC_2(3, VAR_1, "exiting; sc = %p", VAR_1);
}
