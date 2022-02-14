
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct multiq_sched_data {int max_bands; int ** queues; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** FUNC_0 (int,int,int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (struct Qdisc*,struct nlattr*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (struct Qdisc*) ;
 struct multiq_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_4, struct nlattr *VAR_5)
{
 struct multiq_sched_data *VAR_6 = FUNC_4(VAR_4);
 int VAR_7, VAR_8;

 VAR_6->queues = ((void*)0);

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6->max_bands = FUNC_3(VAR_4)->num_tx_queues;

 VAR_6->queues = FUNC_0(VAR_6->max_bands, sizeof(struct Qdisc *), VAR_2);
 if (!VAR_6->queues)
  return -VAR_1;
 for (VAR_7 = 0; VAR_7 < VAR_6->max_bands; VAR_7++)
  VAR_6->queues[VAR_7] = &VAR_3;

 VAR_8 = FUNC_2(VAR_4,VAR_5);

 if (VAR_8)
  FUNC_1(VAR_6->queues);

 return VAR_8;
}
