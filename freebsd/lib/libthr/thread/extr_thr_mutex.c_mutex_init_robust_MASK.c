
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtx_robust_lists_params {uintptr_t robust_list_offset; uintptr_t robust_priv_list_offset; uintptr_t robust_inact_offset; } ;
struct pthread {int robust_inited; int inact_mtx; int priv_robust_list; int robust_list; } ;
typedef int rb ;


 int VAR_0 ;
 struct pthread* FUNC_0 () ;
 int FUNC_1 (int *,int ,int,struct umtx_robust_lists_params*,int *) ;

__attribute__((used)) static void
FUNC_2(struct pthread *VAR_1)
{
 struct umtx_robust_lists_params VAR_2;

 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_0();
 if (VAR_1->robust_inited)
  return;
 VAR_2.robust_list_offset = (uintptr_t)&VAR_1->robust_list;
 VAR_2.robust_priv_list_offset = (uintptr_t)&VAR_1->priv_robust_list;
 VAR_2.robust_inact_offset = (uintptr_t)&VAR_1->inact_mtx;
 FUNC_1(((void*)0), VAR_0, sizeof(VAR_2), &VAR_2, ((void*)0));
 VAR_1->robust_inited = 1;
}
