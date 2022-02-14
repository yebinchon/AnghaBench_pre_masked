
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_func_drv_unrgtr_input {int flags; int member_0; } ;
struct bnxt_softc {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt_softc*,struct hwrm_func_drv_unrgtr_input*,int ) ;
 int FUNC_1 (struct bnxt_softc*,struct hwrm_func_drv_unrgtr_input*,int) ;

int
FUNC_2(struct bnxt_softc *VAR_2, bool VAR_3)
{
 struct hwrm_func_drv_unrgtr_input VAR_4 = {0};

 FUNC_0(VAR_2, &VAR_4, VAR_0);
 if (VAR_3 == 1)
  VAR_4.flags |=
      VAR_1;
 return FUNC_1(VAR_2, &VAR_4, sizeof(VAR_4));
}
