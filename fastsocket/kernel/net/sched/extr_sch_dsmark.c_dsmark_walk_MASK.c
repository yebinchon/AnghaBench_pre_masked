
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdisc_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct Qdisc*,int,struct qdisc_walker*) ;} ;
struct dsmark_qdisc_data {int indices; int* mask; int * value; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (char*,struct Qdisc*,struct dsmark_qdisc_data*,struct qdisc_walker*) ;
 struct dsmark_qdisc_data* FUNC_1 (struct Qdisc*) ;
 scalar_t__ FUNC_2 (struct Qdisc*,int,struct qdisc_walker*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0, struct qdisc_walker *VAR_1)
{
 struct dsmark_qdisc_data *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 FUNC_0("dsmark_walk(sch %p,[qdisc %p],walker %p)\n", VAR_0, VAR_2, VAR_1);

 if (VAR_1->stop)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->indices; VAR_3++) {
  if (VAR_2->mask[VAR_3] == 0xff && !VAR_2->value[VAR_3])
   goto ignore;
  if (VAR_1->count >= VAR_1->skip) {
   if (VAR_1->fn(VAR_0, VAR_3+1, VAR_1) < 0) {
    VAR_1->stop = 1;
    break;
   }
  }
ignore:
  VAR_1->count++;
 }
}
