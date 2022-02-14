
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfq_sched_data {scalar_t__ perturb_period; int perturb_timer; int perturbation; } ;
struct Qdisc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 () ;
 struct sfq_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 struct Qdisc *VAR_2 = (struct Qdisc *)VAR_1;
 struct sfq_sched_data *VAR_3 = FUNC_2(VAR_2);

 VAR_3->perturbation = FUNC_1();

 if (VAR_3->perturb_period)
  FUNC_0(&VAR_3->perturb_timer, VAR_0 + VAR_3->perturb_period);
}
