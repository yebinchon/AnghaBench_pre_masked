
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tcf_result {size_t classid; scalar_t__ class; } ;
struct sk_buff {size_t priority; } ;
struct cbq_class {scalar_t__ level; struct cbq_class** defaults; int filter_list; } ;
struct cbq_sched_data {struct cbq_class link; } ;
struct Qdisc {size_t handle; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cbq_class* FUNC_1 (struct cbq_sched_data*,size_t) ;
 struct cbq_class* FUNC_2 (struct sk_buff*,struct cbq_class*) ;
 struct cbq_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct sk_buff*,int ,struct tcf_result*) ;

__attribute__((used)) static struct cbq_class *
FUNC_5(struct sk_buff *VAR_5, struct Qdisc *VAR_6, int *VAR_7)
{
 struct cbq_sched_data *VAR_8 = FUNC_3(VAR_6);
 struct cbq_class *VAR_9 = &VAR_8->link;
 struct cbq_class **VAR_10;
 struct cbq_class *VAR_11 = ((void*)0);
 u32 VAR_12 = VAR_5->priority;
 struct tcf_result VAR_13;




 if (FUNC_0(VAR_12^VAR_6->handle) == 0 &&
     (VAR_11 = FUNC_1(VAR_8, VAR_12)) != ((void*)0))
  return VAR_11;

 *VAR_7 = VAR_0 | VAR_3;
 for (;;) {
  int VAR_14 = 0;
  VAR_10 = VAR_9->defaults;




  if (!VAR_9->filter_list ||
      (VAR_14 = FUNC_4(VAR_5, VAR_9->filter_list, &VAR_13)) < 0)
   goto fallback;

  if ((VAR_11 = (void*)VAR_13.class) == ((void*)0)) {
   if (FUNC_0(VAR_13.classid))
    VAR_11 = FUNC_1(VAR_8, VAR_13.classid);
   else if ((VAR_11 = VAR_10[VAR_13.classid&VAR_2]) == ((void*)0))
    VAR_11 = VAR_10[VAR_1];

   if (VAR_11 == ((void*)0) || VAR_11->level >= VAR_9->level)
    goto fallback;
  }
  if (VAR_11->level == 0)
   return VAR_11;






  VAR_9 = VAR_11;
 }

fallback:
 VAR_11 = VAR_9;




 if (FUNC_0(VAR_12) == 0 &&
     !(VAR_11 = VAR_9->defaults[VAR_12&VAR_2]) &&
     !(VAR_11 = VAR_9->defaults[VAR_1]))
  return VAR_9;

 return VAR_11;
}
