
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct neigh_parms {int locktime; int proxy_delay; int anycast_delay; int retrans_time; int delay_probe_time; int gc_staletime; int base_reachable_time; int reachable_time; int mcast_probes; int ucast_probes; int app_probes; int proxy_qlen; int queue_len; int refcnt; TYPE_1__* dev; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_18, struct neigh_parms *VAR_19)
{
 struct nlattr *VAR_20;

 VAR_20 = FUNC_5(VAR_18, VAR_2);
 if (VAR_20 == ((void*)0))
  return -VAR_1;

 if (VAR_19->dev)
  FUNC_1(VAR_18, VAR_8, VAR_19->dev->ifindex);

 FUNC_1(VAR_18, VAR_15, FUNC_2(&VAR_19->refcnt));
 FUNC_1(VAR_18, VAR_13, VAR_19->queue_len);
 FUNC_1(VAR_18, VAR_12, VAR_19->proxy_qlen);
 FUNC_1(VAR_18, VAR_4, VAR_19->app_probes);
 FUNC_1(VAR_18, VAR_17, VAR_19->ucast_probes);
 FUNC_1(VAR_18, VAR_10, VAR_19->mcast_probes);
 FUNC_0(VAR_18, VAR_14, VAR_19->reachable_time);
 FUNC_0(VAR_18, VAR_5,
        VAR_19->base_reachable_time);
 FUNC_0(VAR_18, VAR_7, VAR_19->gc_staletime);
 FUNC_0(VAR_18, VAR_6, VAR_19->delay_probe_time);
 FUNC_0(VAR_18, VAR_16, VAR_19->retrans_time);
 FUNC_0(VAR_18, VAR_3, VAR_19->anycast_delay);
 FUNC_0(VAR_18, VAR_11, VAR_19->proxy_delay);
 FUNC_0(VAR_18, VAR_9, VAR_19->locktime);

 return FUNC_4(VAR_18, VAR_20);

nla_put_failure:
 FUNC_3(VAR_18, VAR_20);
 return -VAR_0;
}
