
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tc_multiq_qopt {int bands; } ;
struct nlattr {int dummy; } ;
struct multiq_sched_data {int bands; int max_bands; struct Qdisc** queues; } ;
struct TYPE_5__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; int handle; int dev_queue; } ;
struct TYPE_6__ {int real_num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 struct tc_multiq_qopt* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 struct Qdisc VAR_2 ;
 int VAR_3 ;
 struct Qdisc* FUNC_4 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_5 (struct Qdisc*) ;
 TYPE_2__* FUNC_6 (struct Qdisc*) ;
 struct multiq_sched_data* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*,int ) ;
 int FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_11(struct Qdisc *VAR_4, struct nlattr *VAR_5)
{
 struct multiq_sched_data *VAR_6 = FUNC_7(VAR_4);
 struct tc_multiq_qopt *VAR_7;
 int VAR_8;

 if (!FUNC_1(FUNC_6(VAR_4)))
  return -VAR_1;
 if (FUNC_3(VAR_5) < sizeof(*VAR_7))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5);

 VAR_7->bands = FUNC_6(VAR_4)->real_num_tx_queues;

 FUNC_9(VAR_4);
 VAR_6->bands = VAR_7->bands;
 for (VAR_8 = VAR_6->bands; VAR_8 < VAR_6->max_bands; VAR_8++) {
  if (VAR_6->queues[VAR_8] != &VAR_2) {
   struct Qdisc *VAR_9 = VAR_6->queues[VAR_8];
   VAR_6->queues[VAR_8] = &VAR_2;
   FUNC_8(VAR_9, VAR_9->q.qlen);
   FUNC_5(VAR_9);
  }
 }

 FUNC_10(VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_6->bands; VAR_8++) {
  if (VAR_6->queues[VAR_8] == &VAR_2) {
   struct Qdisc *VAR_10, *VAR_11;
   VAR_10 = FUNC_4(FUNC_6(VAR_4),
        VAR_4->dev_queue,
        &VAR_3,
        FUNC_0(VAR_4->handle,
           VAR_8 + 1));
   if (VAR_10) {
    FUNC_9(VAR_4);
    VAR_11 = VAR_6->queues[VAR_8];
    VAR_6->queues[VAR_8] = VAR_10;

    if (VAR_11 != &VAR_2) {
     FUNC_8(VAR_11,
         VAR_11->q.qlen);
     FUNC_5(VAR_11);
    }
    FUNC_10(VAR_4);
   }
  }
 }
 return 0;
}
