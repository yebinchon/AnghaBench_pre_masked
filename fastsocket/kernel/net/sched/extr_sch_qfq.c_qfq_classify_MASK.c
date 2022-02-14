
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {int classid; scalar_t__ class; } ;
struct sk_buff {int priority; } ;
struct qfq_sched {int filter_list; } ;
struct qfq_class {int dummy; } ;
struct Qdisc {int handle; } ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 struct qfq_sched* FUNC_2 (struct Qdisc*) ;
 struct qfq_class* FUNC_3 (struct Qdisc*,int) ;
 int FUNC_4 (struct sk_buff*,int ,struct tcf_result*) ;

__attribute__((used)) static struct qfq_class *FUNC_5(struct sk_buff *VAR_3, struct Qdisc *VAR_4,
          int *VAR_5)
{
 struct qfq_sched *VAR_6 = FUNC_2(VAR_4);
 struct qfq_class *VAR_7;
 struct tcf_result VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_3->priority ^ VAR_4->handle) == 0) {
  FUNC_1("qfq_classify: found %d\n", VAR_3->priority);
  VAR_7 = FUNC_3(VAR_4, VAR_3->priority);
  if (VAR_7 != ((void*)0))
   return VAR_7;
 }

 *VAR_5 = VAR_0 | VAR_1;
 VAR_9 = FUNC_4(VAR_3, VAR_6->filter_list, &VAR_8);
 if (VAR_9 >= 0) {
  VAR_7 = (struct qfq_class *)VAR_8.class;
  if (VAR_7 == ((void*)0))
   VAR_7 = FUNC_3(VAR_4, VAR_8.classid);
  return VAR_7;
 }

 return ((void*)0);
}
