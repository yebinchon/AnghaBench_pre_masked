
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_mirred {int dummy; } ;
struct tc_action {struct tcf_mirred* priv; } ;


 int FUNC_0 (struct tcf_mirred*,int) ;

__attribute__((used)) static int FUNC_1(struct tc_action *VAR_0, int VAR_1)
{
 struct tcf_mirred *VAR_2 = VAR_0->priv;

 if (VAR_2)
  return FUNC_0(VAR_2, VAR_1);
 return 0;
}
