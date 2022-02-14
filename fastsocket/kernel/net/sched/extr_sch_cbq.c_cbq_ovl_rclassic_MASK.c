
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbq_sched_data {scalar_t__ toplevel; } ;
struct cbq_class {scalar_t__ level; struct cbq_class* borrow; int qdisc; } ;


 int FUNC_0 (struct cbq_class*) ;
 struct cbq_sched_data* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cbq_class *VAR_0)
{
 struct cbq_sched_data *VAR_1 = FUNC_1(VAR_0->qdisc);
 struct cbq_class *VAR_2 = VAR_0;

 do {
  if (VAR_0->level > VAR_1->toplevel) {
   VAR_0 = ((void*)0);
   break;
  }
 } while ((VAR_0 = VAR_0->borrow) != ((void*)0));

 if (VAR_0 == ((void*)0))
  VAR_0 = VAR_2;
 FUNC_0(VAR_0);
}
