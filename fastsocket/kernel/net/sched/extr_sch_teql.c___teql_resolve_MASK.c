
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct teql_sched_data {struct neighbour* ncache; } ;
struct sk_buff {int len; int protocol; } ;
struct netdev_queue {int qdisc; } ;
struct net_device {int dummy; } ;
struct neighbour {int lock; int ha; int primary_key; TYPE_2__* tbl; int refcnt; } ;
struct TYPE_4__ {int key_len; } ;
struct TYPE_3__ {struct neighbour* neighbour; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct neighbour*) ;
 int FUNC_1 (struct neighbour*) ;
 struct neighbour* FUNC_2 (TYPE_2__*,int ,struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,struct net_device*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct neighbour*,struct sk_buff*) ;
 int FUNC_7 (struct neighbour*) ;
 struct netdev_queue* FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (int ) ;
 struct teql_sched_data* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct neighbour**,struct neighbour*) ;

__attribute__((used)) static int
FUNC_16(struct sk_buff *VAR_2, struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct netdev_queue *VAR_5 = FUNC_8(VAR_4, 0);
 struct teql_sched_data *VAR_6 = FUNC_10(VAR_5->qdisc);
 struct neighbour *VAR_7 = FUNC_13(VAR_2)->neighbour;
 struct neighbour *VAR_8 = VAR_6->ncache;

 if (VAR_7->tbl == ((void*)0))
  return -VAR_1;
 if (VAR_8 && VAR_8->tbl == VAR_7->tbl &&
     FUNC_5(VAR_8->primary_key, VAR_7->primary_key, VAR_7->tbl->key_len) == 0) {
  FUNC_3(&VAR_8->refcnt);
 } else {
  VAR_8 = FUNC_2(VAR_7->tbl, VAR_7->primary_key, VAR_4);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
 }
 if (FUNC_6(VAR_8, VAR_3) == 0) {
  int VAR_9;

  FUNC_11(&VAR_8->lock);
  VAR_9 = FUNC_4(VAR_2, VAR_4, FUNC_9(VAR_2->protocol),
          VAR_8->ha, ((void*)0), VAR_2->len);
  FUNC_12(&VAR_8->lock);

  if (VAR_9 < 0) {
   FUNC_7(VAR_8);
   return -VAR_1;
  }
  FUNC_14(FUNC_15(&VAR_6->ncache, VAR_8));
  return 0;
 }
 FUNC_7(VAR_8);
 return (VAR_3 == ((void*)0)) ? -VAR_0 : 1;
}
