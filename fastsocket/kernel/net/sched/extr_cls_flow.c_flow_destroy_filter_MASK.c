
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct flow_filter {int ematches; int exts; int perturb_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct flow_filter*) ;
 int FUNC_2 (struct tcf_proto*,int *) ;
 int FUNC_3 (struct tcf_proto*,int *) ;

__attribute__((used)) static void FUNC_4(struct tcf_proto *VAR_0, struct flow_filter *VAR_1)
{
 FUNC_0(&VAR_1->perturb_timer);
 FUNC_3(VAR_0, &VAR_1->exts);
 FUNC_2(VAR_0, &VAR_1->ematches);
 FUNC_1(VAR_1);
}
