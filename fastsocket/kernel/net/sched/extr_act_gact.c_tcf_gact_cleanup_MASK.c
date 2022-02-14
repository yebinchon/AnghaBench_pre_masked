
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_gact {int common; } ;
struct tc_action {struct tcf_gact* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *) ;

__attribute__((used)) static int FUNC_1(struct tc_action *VAR_1, int VAR_2)
{
 struct tcf_gact *VAR_3 = VAR_1->priv;

 if (VAR_3)
  return FUNC_0(&VAR_3->common, VAR_2, &VAR_0);
 return 0;
}
