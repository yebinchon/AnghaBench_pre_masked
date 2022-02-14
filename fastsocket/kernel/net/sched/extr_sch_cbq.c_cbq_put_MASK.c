
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_sched_data {struct cbq_class* rx_class; } ;
struct cbq_class {scalar_t__ refcnt; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (struct Qdisc*,struct cbq_class*) ;
 struct cbq_sched_data* FUNC_1 (struct Qdisc*) ;
 int * FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct cbq_class *VAR_2 = (struct cbq_class*)VAR_1;

 if (--VAR_2->refcnt == 0) {
  FUNC_0(VAR_0, VAR_2);
 }
}
