
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_softc {int hwrm_cmd_resp; int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ) ;

int
FUNC_1(struct bnxt_softc *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->ctx, VAR_1, &VAR_2->hwrm_cmd_resp,
     VAR_0);
 return VAR_3;
}
