
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct htb_sched {struct tcf_proto* filter_list; } ;
struct htb_class {struct tcf_proto* filter_list; } ;
struct Qdisc {int dummy; } ;


 struct htb_sched* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_proto **FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct htb_sched *VAR_2 = FUNC_0(VAR_0);
 struct htb_class *VAR_3 = (struct htb_class *)VAR_1;
 struct tcf_proto **VAR_4 = VAR_3 ? &VAR_3->filter_list : &VAR_2->filter_list;

 return VAR_4;
}
