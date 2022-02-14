
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdisc_walker {int stop; scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct Qdisc*,int,struct qdisc_walker*) ;} ;
struct Qdisc {int dummy; } ;


 scalar_t__ FUNC_0 (struct Qdisc*,int,struct qdisc_walker*) ;

__attribute__((used)) static void FUNC_1(struct Qdisc *VAR_0, struct qdisc_walker *VAR_1)
{
 if (!VAR_1->stop) {
  if (VAR_1->count >= VAR_1->skip)
   if (VAR_1->fn(VAR_0, 1, VAR_1) < 0) {
    VAR_1->stop = 1;
    return;
   }
  VAR_1->count++;
 }
}
