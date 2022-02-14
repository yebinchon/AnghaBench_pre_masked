
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_robust_lists_params {int robust_inact_offset; int robust_priv_list_offset; int robust_list_offset; } ;
struct thread {int td_rb_inact; int td_rbp_list; int td_rb_list; } ;



__attribute__((used)) static int
FUNC_0(struct thread *VAR_0, struct umtx_robust_lists_params *VAR_1)
{

 VAR_0->td_rb_list = VAR_1->robust_list_offset;
 VAR_0->td_rbp_list = VAR_1->robust_priv_list_offset;
 VAR_0->td_rb_inact = VAR_1->robust_inact_offset;
 return (0);
}
