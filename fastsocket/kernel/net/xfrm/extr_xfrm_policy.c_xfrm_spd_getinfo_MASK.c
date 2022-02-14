
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrmk_spdinfo {int spdhmcnt; int spdhcnt; int fwdscnt; int outscnt; int inscnt; int fwdcnt; int outcnt; int incnt; } ;
struct TYPE_3__ {int policy_idx_hmask; int * policy_count; } ;
struct TYPE_4__ {TYPE_1__ xfrm; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_2(struct xfrmk_spdinfo *VAR_7)
{
 FUNC_0(&VAR_6);
 VAR_7->incnt = VAR_4.xfrm.policy_count[VAR_1];
 VAR_7->outcnt = VAR_4.xfrm.policy_count[VAR_3];
 VAR_7->fwdcnt = VAR_4.xfrm.policy_count[VAR_0];
 VAR_7->inscnt = VAR_4.xfrm.policy_count[VAR_1+VAR_2];
 VAR_7->outscnt = VAR_4.xfrm.policy_count[VAR_3+VAR_2];
 VAR_7->fwdscnt = VAR_4.xfrm.policy_count[VAR_0+VAR_2];
 VAR_7->spdhcnt = VAR_4.xfrm.policy_idx_hmask;
 VAR_7->spdhmcnt = VAR_5;
 FUNC_1(&VAR_6);
}
