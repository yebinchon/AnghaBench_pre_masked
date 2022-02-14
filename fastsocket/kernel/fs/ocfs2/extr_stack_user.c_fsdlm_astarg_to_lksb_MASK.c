
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_lksb {int dummy; } ;
struct TYPE_2__ {struct dlm_lksb lksb_fsdlm; } ;
struct ocfs2_lock_res {TYPE_1__ l_lksb; } ;



__attribute__((used)) static struct dlm_lksb *FUNC_0(void *VAR_0)
{
 struct ocfs2_lock_res *VAR_1 = VAR_0;
 return &VAR_1->l_lksb.lksb_fsdlm;
}
