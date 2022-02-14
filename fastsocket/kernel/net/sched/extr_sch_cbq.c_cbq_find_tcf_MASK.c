
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct cbq_class {struct tcf_proto* filter_list; } ;
struct cbq_sched_data {struct cbq_class link; } ;
struct Qdisc {int dummy; } ;


 struct cbq_sched_data* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_proto **FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct cbq_sched_data *VAR_2 = FUNC_0(VAR_0);
 struct cbq_class *VAR_3 = (struct cbq_class *)VAR_1;

 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_2->link;

 return &VAR_3->filter_list;
}
