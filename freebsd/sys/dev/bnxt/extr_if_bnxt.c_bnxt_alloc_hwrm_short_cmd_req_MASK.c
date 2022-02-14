
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_softc {int hwrm_short_cmd_req_addr; int hwrm_max_req_len; int ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct bnxt_softc *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->ctx, VAR_1->hwrm_max_req_len,
     &VAR_1->hwrm_short_cmd_req_addr, VAR_0);

 return VAR_2;
}
