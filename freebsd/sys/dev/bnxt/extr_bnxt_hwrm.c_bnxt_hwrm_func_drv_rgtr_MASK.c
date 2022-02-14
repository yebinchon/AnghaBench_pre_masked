
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_func_drv_rgtr_input {int ver_maj; int ver_min; int ver_upd; int os_type; int enables; int member_0; } ;
struct bnxt_softc {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnxt_softc*,struct hwrm_func_drv_rgtr_input*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_func_drv_rgtr_input*,int) ;

int
FUNC_4(struct bnxt_softc *VAR_5)
{
 struct hwrm_func_drv_rgtr_input VAR_6 = {0};

 FUNC_0(VAR_5, &VAR_6, VAR_0);

 VAR_6.enables = FUNC_2(VAR_2 |
     VAR_1);
 VAR_6.os_type = FUNC_1(VAR_3);

 VAR_6.ver_maj = VAR_4 / 100000;
 VAR_6.ver_min = (VAR_4 / 1000) % 100;
 VAR_6.ver_upd = (VAR_4 / 100) % 10;

 return FUNC_3(VAR_5, &VAR_6, sizeof(VAR_6));
}
