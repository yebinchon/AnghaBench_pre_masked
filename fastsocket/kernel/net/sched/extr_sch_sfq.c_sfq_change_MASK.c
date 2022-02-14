
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_sfq_qopt {int perturb_period; scalar_t__ limit; scalar_t__ quantum; } ;
struct sfq_sched_data {int perturb_period; scalar_t__ limit; int perturbation; int perturb_timer; int quantum; } ;
struct nlattr {scalar_t__ nla_len; } ;
struct TYPE_2__ {unsigned int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 struct tc_sfq_qopt* FUNC_5 (struct nlattr*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct Qdisc*) ;
 struct sfq_sched_data* FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (struct Qdisc*,unsigned int) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (struct Qdisc*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_13(struct Qdisc *VAR_5, struct nlattr *VAR_6)
{
 struct sfq_sched_data *VAR_7 = FUNC_8(VAR_5);
 struct tc_sfq_qopt *VAR_8 = FUNC_5(VAR_6);
 unsigned int VAR_9;

 if (VAR_6->nla_len < FUNC_4(sizeof(*VAR_8)))
  return -VAR_0;

 FUNC_10(VAR_5);
 VAR_7->quantum = VAR_8->quantum ? : FUNC_6(FUNC_7(VAR_5));
 VAR_7->perturb_period = VAR_8->perturb_period * VAR_1;
 if (VAR_8->limit)
  VAR_7->limit = FUNC_1(VAR_4, VAR_8->limit, VAR_2 - 1);

 VAR_9 = VAR_5->q.qlen;
 while (VAR_5->q.qlen > VAR_7->limit)
  FUNC_12(VAR_5);
 FUNC_9(VAR_5, VAR_9 - VAR_5->q.qlen);

 FUNC_0(&VAR_7->perturb_timer);
 if (VAR_7->perturb_period) {
  FUNC_2(&VAR_7->perturb_timer, VAR_3 + VAR_7->perturb_period);
  VAR_7->perturbation = FUNC_3();
 }
 FUNC_11(VAR_5);
 return 0;
}
