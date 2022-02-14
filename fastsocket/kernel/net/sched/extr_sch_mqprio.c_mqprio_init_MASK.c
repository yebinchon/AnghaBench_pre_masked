
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_mqprio_qopt {int num_tc; int * prio_tc_map; int * offset; int * count; } ;
struct nlattr {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int num_tx_queues; } ;
struct mqprio_sched {struct Qdisc** qdiscs; } ;
struct Qdisc {scalar_t__ parent; int flags; int handle; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct Qdisc** FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct Qdisc*) ;
 scalar_t__ FUNC_6 (struct net_device*,struct tc_mqprio_qopt*) ;
 struct netdev_queue* FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (struct net_device*,int,int ) ;
 int FUNC_10 (struct net_device*,int,int ,int ) ;
 int FUNC_11 (struct net_device*) ;
 struct tc_mqprio_qopt* FUNC_12 (struct nlattr*) ;
 int FUNC_13 (struct nlattr*) ;
 int VAR_11 ;
 struct Qdisc* FUNC_14 (struct net_device*,struct netdev_queue*,int *,int ) ;
 struct net_device* FUNC_15 (struct Qdisc*) ;
 struct mqprio_sched* FUNC_16 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_17(struct Qdisc *VAR_12, struct nlattr *VAR_13)
{
 struct net_device *VAR_14 = FUNC_15(VAR_12);
 struct mqprio_sched *VAR_15 = FUNC_16(VAR_12);
 struct netdev_queue *VAR_16;
 struct Qdisc *VAR_17;
 int VAR_18, VAR_19 = -VAR_2;
 struct tc_mqprio_qopt *VAR_20 = ((void*)0);

 FUNC_0(VAR_8 != VAR_10);
 FUNC_0(VAR_6 != VAR_9);

 if (VAR_12->parent != VAR_7)
  return -VAR_2;

 if (!FUNC_11(VAR_14))
  return -VAR_2;

 if (!VAR_13 || FUNC_13(VAR_13) < sizeof(*VAR_20))
  return -VAR_0;

 VAR_20 = FUNC_12(VAR_13);
 if (FUNC_6(VAR_14, VAR_20))
  return -VAR_0;


 VAR_15->qdiscs = FUNC_4(VAR_14->num_tx_queues, sizeof(VAR_15->qdiscs[0]),
          VAR_3);
 if (VAR_15->qdiscs == ((void*)0)) {
  VAR_19 = -VAR_1;
  goto err;
 }

 for (VAR_18 = 0; VAR_18 < VAR_14->num_tx_queues; VAR_18++) {
  VAR_16 = FUNC_7(VAR_14, VAR_18);
  VAR_17 = FUNC_14(VAR_14, VAR_16, &VAR_11,
       FUNC_2(FUNC_1(VAR_12->handle),
          FUNC_3(VAR_18 + 1)));
  if (VAR_17 == ((void*)0)) {
   VAR_19 = -VAR_1;
   goto err;
  }
  VAR_17->flags |= VAR_4;
  VAR_15->qdiscs[VAR_18] = VAR_17;
 }

 FUNC_8(VAR_14, VAR_20->num_tc);
 for (VAR_18 = 0; VAR_18 < VAR_20->num_tc; VAR_18++)
  FUNC_10(VAR_14, VAR_18,
        VAR_20->count[VAR_18], VAR_20->offset[VAR_18]);


 for (VAR_18 = 0; VAR_18 < VAR_6 + 1; VAR_18++)
  FUNC_9(VAR_14, VAR_18, VAR_20->prio_tc_map[VAR_18]);

 VAR_12->flags |= VAR_5;
 return 0;

err:
 FUNC_5(VAR_12);
 return VAR_19;
}
