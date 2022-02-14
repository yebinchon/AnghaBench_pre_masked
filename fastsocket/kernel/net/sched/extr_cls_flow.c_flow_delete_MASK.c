
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct flow_filter {int list; } ;


 int FUNC_0 (struct tcf_proto*,struct flow_filter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tcf_proto*) ;
 int FUNC_3 (struct tcf_proto*) ;

__attribute__((used)) static int FUNC_4(struct tcf_proto *VAR_0, unsigned long VAR_1)
{
 struct flow_filter *VAR_2 = (struct flow_filter *)VAR_1;

 FUNC_2(VAR_0);
 FUNC_1(&VAR_2->list);
 FUNC_3(VAR_0);
 FUNC_0(VAR_0, VAR_2);
 return 0;
}
