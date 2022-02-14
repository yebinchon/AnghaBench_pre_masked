
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct hfsc_sched {int root; } ;
struct hfsc_class {int cl_flags; TYPE_4__* qdisc; int cl_cumul; } ;
struct TYPE_9__ {scalar_t__ qlen; } ;
struct TYPE_7__ {int overlimits; } ;
struct Qdisc {TYPE_3__ q; int flags; TYPE_1__ qstats; } ;
struct TYPE_8__ {scalar_t__ qlen; } ;
struct TYPE_10__ {TYPE_2__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfsc_class* FUNC_0 (struct hfsc_sched*,int ) ;
 int FUNC_1 (struct Qdisc*) ;
 int FUNC_2 () ;
 struct sk_buff* FUNC_3 (TYPE_4__*) ;
 unsigned int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 struct hfsc_sched* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (char*,TYPE_4__*) ;
 int FUNC_8 (struct hfsc_class*) ;
 int FUNC_9 (struct hfsc_class*,unsigned int) ;
 int FUNC_10 (struct hfsc_class*,unsigned int) ;
 int FUNC_11 (struct hfsc_class*,scalar_t__,int ) ;
 struct hfsc_class* FUNC_12 (int *,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_13(struct Qdisc *VAR_2)
{
 struct hfsc_sched *VAR_3 = FUNC_6(VAR_2);
 struct hfsc_class *VAR_4;
 struct sk_buff *VAR_5;
 u64 VAR_6;
 unsigned int VAR_7;
 int VAR_8 = 0;

 if (VAR_2->q.qlen == 0)
  return ((void*)0);

 VAR_6 = FUNC_2();






 if ((VAR_4 = FUNC_0(VAR_3, VAR_6)) != ((void*)0)) {
  VAR_8 = 1;
 } else {




  VAR_4 = FUNC_12(&VAR_3->root, VAR_6);
  if (VAR_4 == ((void*)0)) {
   VAR_2->qstats.overlimits++;
   FUNC_1(VAR_2);
   return ((void*)0);
  }
 }

 VAR_5 = FUNC_3(VAR_4->qdisc);
 if (VAR_5 == ((void*)0)) {
  FUNC_7("HFSC", VAR_4->qdisc);
  return ((void*)0);
 }

 FUNC_11(VAR_4, FUNC_5(VAR_5), VAR_6);
 if (VAR_8)
  VAR_4->cl_cumul += FUNC_5(VAR_5);

 if (VAR_4->qdisc->q.qlen != 0) {
  if (VAR_4->cl_flags & VAR_0) {

   VAR_7 = FUNC_4(VAR_4->qdisc);
   if (VAR_8)
    FUNC_10(VAR_4, VAR_7);
   else
    FUNC_9(VAR_4, VAR_7);
  }
 } else {

  FUNC_8(VAR_4);
 }

 VAR_2->flags &= ~VAR_1;
 VAR_2->q.qlen--;

 return VAR_5;
}
