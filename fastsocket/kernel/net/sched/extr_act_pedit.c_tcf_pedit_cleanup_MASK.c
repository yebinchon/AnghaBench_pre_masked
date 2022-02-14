
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_pedit {int common; struct tc_pedit_key* tcfp_keys; } ;
struct tc_pedit_key {int dummy; } ;
struct tc_action {struct tcf_pedit* priv; } ;


 int FUNC_0 (struct tc_pedit_key*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int,int *) ;

__attribute__((used)) static int FUNC_2(struct tc_action *VAR_1, int VAR_2)
{
 struct tcf_pedit *VAR_3 = VAR_1->priv;

 if (VAR_3) {
  struct tc_pedit_key *VAR_4 = VAR_3->tcfp_keys;
  if (FUNC_1(&VAR_3->common, VAR_2, &VAR_0)) {
   FUNC_0(VAR_4);
   return 1;
  }
 }
 return 0;
}
