
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct survey_info {int filled; int channel_time_tx; int channel_time_rx; int channel_time_ext_busy; int channel_time_busy; int channel_time; int noise; TYPE_1__* channel; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; } ;
struct TYPE_2__ {int center_freq; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_20, u32 VAR_21, u32 VAR_22,
    int VAR_23, struct net_device *VAR_24,
    struct survey_info *VAR_25)
{
 void *VAR_26;
 struct nlattr *VAR_27;

 VAR_26 = FUNC_2(VAR_20, VAR_21, VAR_22, VAR_23,
        VAR_4);
 if (!VAR_26)
  return -VAR_1;

 if (FUNC_6(VAR_20, VAR_2, VAR_24->ifindex))
  goto nla_put_failure;

 VAR_27 = FUNC_4(VAR_20, VAR_3);
 if (!VAR_27)
  goto nla_put_failure;

 if (FUNC_6(VAR_20, VAR_10,
   VAR_25->channel->center_freq))
  goto nla_put_failure;

 if ((VAR_25->filled & VAR_19) &&
     FUNC_8(VAR_20, VAR_12, VAR_25->noise))
  goto nla_put_failure;
 if ((VAR_25->filled & VAR_18) &&
     FUNC_5(VAR_20, VAR_11))
  goto nla_put_failure;
 if ((VAR_25->filled & VAR_13) &&
     FUNC_7(VAR_20, VAR_5,
   VAR_25->channel_time))
  goto nla_put_failure;
 if ((VAR_25->filled & VAR_14) &&
     FUNC_7(VAR_20, VAR_6,
   VAR_25->channel_time_busy))
  goto nla_put_failure;
 if ((VAR_25->filled & VAR_15) &&
     FUNC_7(VAR_20, VAR_7,
   VAR_25->channel_time_ext_busy))
  goto nla_put_failure;
 if ((VAR_25->filled & VAR_16) &&
     FUNC_7(VAR_20, VAR_8,
   VAR_25->channel_time_rx))
  goto nla_put_failure;
 if ((VAR_25->filled & VAR_17) &&
     FUNC_7(VAR_20, VAR_9,
   VAR_25->channel_time_tx))
  goto nla_put_failure;

 FUNC_3(VAR_20, VAR_27);

 return FUNC_1(VAR_20, VAR_26);

 nla_put_failure:
 FUNC_0(VAR_20, VAR_26);
 return -VAR_0;
}
