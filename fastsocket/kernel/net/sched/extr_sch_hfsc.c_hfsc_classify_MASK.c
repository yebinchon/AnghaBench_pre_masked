
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_result {int classid; scalar_t__ class; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int priority; } ;
struct TYPE_2__ {struct tcf_proto* filter_list; } ;
struct hfsc_sched {int defcls; TYPE_1__ root; } ;
struct hfsc_class {scalar_t__ level; struct tcf_proto* filter_list; } ;
struct Qdisc {int handle; } ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct hfsc_class* FUNC_2 (int,struct Qdisc*) ;
 struct hfsc_sched* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct sk_buff*,struct tcf_proto*,struct tcf_result*) ;

__attribute__((used)) static struct hfsc_class *
FUNC_5(struct sk_buff *VAR_3, struct Qdisc *VAR_4, int *VAR_5)
{
 struct hfsc_sched *VAR_6 = FUNC_3(VAR_4);
 struct hfsc_class *VAR_7;
 struct tcf_result VAR_8;
 struct tcf_proto *VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_3->priority ^ VAR_4->handle) == 0 &&
     (VAR_7 = FUNC_2(VAR_3->priority, VAR_4)) != ((void*)0))
  if (VAR_7->level == 0)
   return VAR_7;

 *VAR_5 = VAR_0 | VAR_1;
 VAR_9 = VAR_6->root.filter_list;
 while (VAR_9 && (VAR_10 = FUNC_4(VAR_3, VAR_9, &VAR_8)) >= 0) {
  if ((VAR_7 = (struct hfsc_class *)VAR_8.class) == ((void*)0)) {
   if ((VAR_7 = FUNC_2(VAR_8.classid, VAR_4)) == ((void*)0))
    break;
  }

  if (VAR_7->level == 0)
   return VAR_7;


  VAR_9 = VAR_7->filter_list;
 }


 VAR_7 = FUNC_2(FUNC_1(FUNC_0(VAR_4->handle), VAR_6->defcls), VAR_4);
 if (VAR_7 == ((void*)0) || VAR_7->level > 0)
  return ((void*)0);

 return VAR_7;
}
