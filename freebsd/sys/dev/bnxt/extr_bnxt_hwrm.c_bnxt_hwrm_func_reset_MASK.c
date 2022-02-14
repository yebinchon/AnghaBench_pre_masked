
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_func_reset_input {scalar_t__ enables; int member_0; } ;
struct bnxt_softc {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt_softc*,struct hwrm_func_reset_input*,int ) ;
 int FUNC_1 (struct bnxt_softc*,struct hwrm_func_reset_input*,int) ;

int
FUNC_2(struct bnxt_softc *VAR_1)
{
 struct hwrm_func_reset_input VAR_2 = {0};

 FUNC_0(VAR_1, &VAR_2, VAR_0);
 VAR_2.enables = 0;

 return FUNC_1(VAR_1, &VAR_2, sizeof(VAR_2));
}
