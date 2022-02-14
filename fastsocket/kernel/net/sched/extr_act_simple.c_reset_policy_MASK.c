
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_defact {int tcf_lock; int tcfd_defdata; int tcf_action; } ;
struct tc_defact {int action; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct tcf_defact *VAR_1, char *VAR_2,
    struct tc_defact *VAR_3)
{
 FUNC_1(&VAR_1->tcf_lock);
 VAR_1->tcf_action = VAR_3->action;
 FUNC_0(VAR_1->tcfd_defdata, 0, VAR_0);
 FUNC_3(VAR_1->tcfd_defdata, VAR_2, VAR_0);
 FUNC_2(&VAR_1->tcf_lock);
}
