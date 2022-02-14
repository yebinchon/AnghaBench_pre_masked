
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct per_cpu_dm_data {int lock; int skb; int send_timer; } ;
struct nlattr {int dummy; } ;
struct net_dm_drop_point {int dummy; } ;
struct net_dm_alert_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct net_dm_alert_msg*,int ,size_t) ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_6 ;
 struct net_dm_alert_msg* FUNC_4 (struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct per_cpu_dm_data *VAR_7)
{
 size_t VAR_8;
 struct net_dm_alert_msg *VAR_9;
 struct nlattr *VAR_10;
 struct sk_buff *VAR_11;
 unsigned long VAR_12;

 VAR_8 = sizeof(struct net_dm_alert_msg);
 VAR_8 += VAR_4 * sizeof(struct net_dm_drop_point);
 VAR_8 += sizeof(struct nlattr);

 VAR_11 = FUNC_0(VAR_8, VAR_0);

 if (VAR_11) {
  FUNC_1(VAR_11, 0, 0, &VAR_6,
    0, VAR_2);
  VAR_10 = FUNC_5(VAR_11, VAR_3,
      sizeof(struct net_dm_alert_msg));
  VAR_9 = FUNC_4(VAR_10);
  FUNC_2(VAR_9, 0, VAR_8);
 } else {
  FUNC_3(&VAR_7->send_timer, VAR_5 + VAR_1 / 10);
 }

 FUNC_6(&VAR_7->lock, VAR_12);
 FUNC_8(VAR_7->skb, VAR_11);
 FUNC_7(&VAR_7->lock, VAR_12);

 return VAR_11;
}
