
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_netem_qopt {int duplicate; int loss; scalar_t__ gap; int limit; int jitter; int latency; } ;
struct nlattr {int dummy; } ;
struct netem_sched_data {int reorder; scalar_t__ gap; int duplicate; int loss; scalar_t__ counter; int limit; int jitter; int latency; int qdisc; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct Qdisc*,struct nlattr*) ;
 int FUNC_2 (struct Qdisc*,struct nlattr*) ;
 int FUNC_3 (struct Qdisc*,struct nlattr*) ;
 int FUNC_4 (struct Qdisc*,struct nlattr*) ;
 int VAR_6 ;
 struct tc_netem_qopt* FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,int ,int) ;
 int FUNC_7 (char*) ;
 struct netem_sched_data* FUNC_8 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_9(struct Qdisc *VAR_7, struct nlattr *VAR_8)
{
 struct netem_sched_data *VAR_9 = FUNC_8(VAR_7);
 struct nlattr *VAR_10[VAR_4 + 1];
 struct tc_netem_qopt *VAR_11;
 int VAR_12;

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_8);
 VAR_12 = FUNC_6(VAR_10, VAR_4, VAR_8, VAR_6, sizeof(*VAR_11));
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_9->qdisc, VAR_11->limit);
 if (VAR_12) {
  FUNC_7("netem: can't set fifo limit\n");
  return VAR_12;
 }

 VAR_9->latency = VAR_11->latency;
 VAR_9->jitter = VAR_11->jitter;
 VAR_9->limit = VAR_11->limit;
 VAR_9->gap = VAR_11->gap;
 VAR_9->counter = 0;
 VAR_9->loss = VAR_11->loss;
 VAR_9->duplicate = VAR_11->duplicate;




 if (VAR_9->gap)
  VAR_9->reorder = ~0;

 if (VAR_10[VAR_1])
  FUNC_1(VAR_7, VAR_10[VAR_1]);

 if (VAR_10[VAR_3]) {
  VAR_12 = FUNC_3(VAR_7, VAR_10[VAR_3]);
  if (VAR_12)
   return VAR_12;
 }

 if (VAR_10[VAR_5])
  FUNC_4(VAR_7, VAR_10[VAR_5]);

 if (VAR_10[VAR_2])
  FUNC_2(VAR_7, VAR_10[VAR_2]);

 return 0;
}
