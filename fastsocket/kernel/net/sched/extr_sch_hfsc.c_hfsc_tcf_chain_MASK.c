
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct hfsc_class {struct tcf_proto* filter_list; } ;
struct hfsc_sched {struct hfsc_class root; } ;
struct Qdisc {int dummy; } ;


 struct hfsc_sched* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_proto **
FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct hfsc_sched *VAR_2 = FUNC_0(VAR_0);
 struct hfsc_class *VAR_3 = (struct hfsc_class *)VAR_1;

 if (VAR_3 == ((void*)0))
  VAR_3 = &VAR_2->root;

 return &VAR_3->filter_list;
}
