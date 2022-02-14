
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_mirred {scalar_t__ tcf_refcnt; int common; scalar_t__ tcfm_dev; int tcfm_list; int tcf_bindcnt; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static inline int FUNC_3(struct tcf_mirred *VAR_1, int VAR_2)
{
 if (VAR_1) {
  if (VAR_2)
   VAR_1->tcf_bindcnt--;
  VAR_1->tcf_refcnt--;
  if(!VAR_1->tcf_bindcnt && VAR_1->tcf_refcnt <= 0) {
   FUNC_1(&VAR_1->tcfm_list);
   if (VAR_1->tcfm_dev)
    FUNC_0(VAR_1->tcfm_dev);
   FUNC_2(&VAR_1->common, &VAR_0);
   return 1;
  }
 }
 return 0;
}
