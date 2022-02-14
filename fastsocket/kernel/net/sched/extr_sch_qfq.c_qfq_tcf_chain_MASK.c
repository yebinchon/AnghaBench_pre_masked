
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct qfq_sched {struct tcf_proto* filter_list; } ;
struct Qdisc {int dummy; } ;


 struct qfq_sched* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_proto **FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct qfq_sched *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1)
  return ((void*)0);

 return &VAR_2->filter_list;
}
