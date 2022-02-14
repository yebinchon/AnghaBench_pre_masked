
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; int function; } ;
struct sfq_sched_data {int* ht; int limit; int tail; int perturbation; scalar_t__ perturb_period; int quantum; scalar_t__ max_depth; TYPE_1__* dep; int * qs; TYPE_2__ perturb_timer; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_3__ {int next; int prev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct Qdisc*) ;
 struct sfq_sched_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*,struct nlattr*) ;
 int FUNC_6 (struct sfq_sched_data*,int) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct Qdisc *VAR_3, struct nlattr *VAR_4)
{
 struct sfq_sched_data *VAR_5 = FUNC_4(VAR_3);
 int VAR_6;

 VAR_5->perturb_timer.function = VAR_2;
 VAR_5->perturb_timer.data = (unsigned long)VAR_3;
 FUNC_0(&VAR_5->perturb_timer);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5->ht[VAR_6] = VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_7(&VAR_5->qs[VAR_6]);
  VAR_5->dep[VAR_6 + VAR_0].next = VAR_6 + VAR_0;
  VAR_5->dep[VAR_6 + VAR_0].prev = VAR_6 + VAR_0;
 }

 VAR_5->limit = VAR_0 - 1;
 VAR_5->max_depth = 0;
 VAR_5->tail = VAR_0;
 if (VAR_4 == ((void*)0)) {
  VAR_5->quantum = FUNC_2(FUNC_3(VAR_3));
  VAR_5->perturb_period = 0;
  VAR_5->perturbation = FUNC_1();
 } else {
  int VAR_7 = FUNC_5(VAR_3, VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_6(VAR_5, VAR_6);
 return 0;
}
