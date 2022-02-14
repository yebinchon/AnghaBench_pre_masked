
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct Qdisc_class_ops {unsigned long (* get ) (struct Qdisc*,scalar_t__) ;int (* put ) (struct Qdisc*,unsigned long) ;int (* qlen_notify ) (struct Qdisc*,unsigned long) ;} ;
struct TYPE_4__ {unsigned int qlen; } ;
struct Qdisc {scalar_t__ parent; TYPE_2__ q; TYPE_1__* ops; } ;
struct TYPE_3__ {struct Qdisc_class_ops* cl_ops; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct Qdisc*) ;
 struct Qdisc* FUNC_3 (int ,scalar_t__) ;
 unsigned long FUNC_4 (struct Qdisc*,scalar_t__) ;
 int FUNC_5 (struct Qdisc*,unsigned long) ;
 int FUNC_6 (struct Qdisc*,unsigned long) ;

void FUNC_7(struct Qdisc *VAR_2, unsigned int VAR_3)
{
 const struct Qdisc_class_ops *VAR_4;
 unsigned long VAR_5;
 u32 VAR_6;

 if (VAR_3 == 0)
  return;
 while ((VAR_6 = VAR_2->parent)) {
  if (FUNC_0(VAR_6) == FUNC_0(VAR_0))
   return;

  VAR_2 = FUNC_3(FUNC_2(VAR_2), FUNC_0(VAR_6));
  if (VAR_2 == ((void*)0)) {
   FUNC_1(VAR_6 != VAR_1);
   return;
  }
  VAR_4 = VAR_2->ops->cl_ops;
  if (VAR_4->qlen_notify) {
   VAR_5 = VAR_4->get(VAR_2, VAR_6);
   VAR_4->qlen_notify(VAR_2, VAR_5);
   VAR_4->put(VAR_2, VAR_5);
  }
  VAR_2->q.qlen -= VAR_3;
 }
}
