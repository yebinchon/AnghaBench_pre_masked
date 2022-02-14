
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_prio_qopt {int bands; int* priomap; } ;
struct prio_sched_data {int bands; struct Qdisc** queues; int prio2band; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; int handle; int dev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int*,int) ;
 struct tc_prio_qopt* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 struct Qdisc VAR_3 ;
 int VAR_4 ;
 struct Qdisc* FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*) ;
 struct prio_sched_data* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*,int ) ;
 int FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_11(struct Qdisc *VAR_5, struct nlattr *VAR_6)
{
 struct prio_sched_data *VAR_7 = FUNC_7(VAR_5);
 struct tc_prio_qopt *VAR_8;
 int VAR_9;

 if (FUNC_3(VAR_6) < sizeof(*VAR_8))
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_6);

 if (VAR_8->bands > VAR_1 || VAR_8->bands < 2)
  return -VAR_0;

 for (VAR_9=0; VAR_9<=VAR_2; VAR_9++) {
  if (VAR_8->priomap[VAR_9] >= VAR_8->bands)
   return -VAR_0;
 }

 FUNC_9(VAR_5);
 VAR_7->bands = VAR_8->bands;
 FUNC_1(VAR_7->prio2band, VAR_8->priomap, VAR_2+1);

 for (VAR_9=VAR_7->bands; VAR_9<VAR_1; VAR_9++) {
  struct Qdisc *VAR_10 = VAR_7->queues[VAR_9];
  VAR_7->queues[VAR_9] = &VAR_3;
  if (VAR_10 != &VAR_3) {
   FUNC_8(VAR_10, VAR_10->q.qlen);
   FUNC_5(VAR_10);
  }
 }
 FUNC_10(VAR_5);

 for (VAR_9=0; VAR_9<VAR_7->bands; VAR_9++) {
  if (VAR_7->queues[VAR_9] == &VAR_3) {
   struct Qdisc *VAR_11, *VAR_12;
   VAR_11 = FUNC_4(FUNC_6(VAR_5), VAR_5->dev_queue,
        &VAR_4,
        FUNC_0(VAR_5->handle, VAR_9 + 1));
   if (VAR_11) {
    FUNC_9(VAR_5);
    VAR_12 = VAR_7->queues[VAR_9];
    VAR_7->queues[VAR_9] = VAR_11;

    if (VAR_12 != &VAR_3) {
     FUNC_8(VAR_12,
         VAR_12->q.qlen);
     FUNC_5(VAR_12);
    }
    FUNC_10(VAR_5);
   }
  }
 }
 return 0;
}
