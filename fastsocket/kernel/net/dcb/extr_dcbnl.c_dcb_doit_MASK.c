
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net_device {int dcbnl_ops; } ;
struct net {int dummy; } ;
struct dcbmsg {int cmd; } ;
struct TYPE_2__ {int pid; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_3 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_4 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_5 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_6 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_7 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_8 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_9 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_10 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_11 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_12 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_13 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_14 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_15 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_16 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_17 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_18 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_19 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_20 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_21 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_22 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_23 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_24 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_25 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_26 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_27 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 int FUNC_28 (struct net_device*,struct nlattr**,int ,int ,int ) ;
 struct net_device* FUNC_29 (int *,int ) ;
 int FUNC_30 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_31 (struct net*,int *) ;
 int FUNC_32 (struct nlattr*) ;
 int FUNC_33 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 struct net* FUNC_34 (int ) ;

__attribute__((used)) static int FUNC_35(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6, void *VAR_7)
{
 struct net *VAR_8 = FUNC_34(VAR_5->sk);
 struct net_device *VAR_9;
 struct dcbmsg *VAR_10 = (struct dcbmsg *)FUNC_1(VAR_6);
 struct nlattr *VAR_11[VAR_1 + 1];
 u32 VAR_12 = VAR_5 ? FUNC_0(VAR_5).pid : 0;
 int VAR_13 = -VAR_2;

 if (!FUNC_31(VAR_8, &VAR_4))
  return -VAR_2;

 VAR_13 = FUNC_33(VAR_6, sizeof(*VAR_10), VAR_11, VAR_1,
     VAR_3);
 if (VAR_13 < 0)
  return VAR_13;

 if (!VAR_11[VAR_0])
  return -VAR_2;

 VAR_9 = FUNC_29(&VAR_4, FUNC_32(VAR_11[VAR_0]));
 if (!VAR_9)
  return -VAR_2;

 if (!VAR_9->dcbnl_ops)
  goto errout;

 switch (VAR_10->cmd) {
 case 145:
  VAR_13 = FUNC_13(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                       VAR_6->nlmsg_flags);
  goto out;
 case 141:
  VAR_13 = FUNC_11(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                        VAR_6->nlmsg_flags);
  goto out;
 case 146:
  VAR_13 = FUNC_10(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                             VAR_6->nlmsg_flags);
  goto out;
 case 135:
  VAR_13 = FUNC_19(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                          VAR_6->nlmsg_flags);
  goto out;
 case 137:
  VAR_13 = FUNC_17(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                          VAR_6->nlmsg_flags);
  goto out;
 case 154:
  VAR_13 = FUNC_2(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                         VAR_6->nlmsg_flags);
  goto out;
 case 128:
  VAR_13 = FUNC_28(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                       VAR_6->nlmsg_flags);
  goto out;
 case 139:
  VAR_13 = FUNC_26(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                        VAR_6->nlmsg_flags);
  goto out;

 case 131:
  VAR_13 = FUNC_21(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                     VAR_6->nlmsg_flags);
  goto out;
 case 134:
  VAR_13 = FUNC_20(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                          VAR_6->nlmsg_flags);
  goto out;
 case 136:
  VAR_13 = FUNC_18(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                          VAR_6->nlmsg_flags);
  goto out;
 case 150:
  VAR_13 = FUNC_6(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                     VAR_6->nlmsg_flags);
  goto out;
 case 147:
  VAR_13 = FUNC_9(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                        VAR_6->nlmsg_flags);
  goto out;
 case 129:
  VAR_13 = FUNC_25(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                        VAR_6->nlmsg_flags);
  goto out;
 case 140:
  VAR_13 = FUNC_12(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                          VAR_6->nlmsg_flags);
  goto out;
 case 138:
  VAR_13 = FUNC_27(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                          VAR_6->nlmsg_flags);
  goto out;
 case 153:
  VAR_13 = FUNC_3(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                         VAR_6->nlmsg_flags);
  goto out;
 case 151:
  VAR_13 = FUNC_5(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                     VAR_6->nlmsg_flags);
  goto out;
 case 133:
  VAR_13 = FUNC_22(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
                     VAR_6->nlmsg_flags);
  goto out;
 case 142:
  VAR_13 = FUNC_16(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
         VAR_6->nlmsg_flags);
  goto out;
 case 143:
  VAR_13 = FUNC_15(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
         VAR_6->nlmsg_flags);
  goto out;
 case 144:
  VAR_13 = FUNC_14(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
         VAR_6->nlmsg_flags);
  goto out;
 case 149:
  VAR_13 = FUNC_7(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
        VAR_6->nlmsg_flags);
  goto out;
 case 132:
  VAR_13 = FUNC_23(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
        VAR_6->nlmsg_flags);
  goto out;
 case 148:
  VAR_13 = FUNC_8(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
           VAR_6->nlmsg_flags);
  goto out;
 case 130:
  VAR_13 = FUNC_24(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
           VAR_6->nlmsg_flags);
  goto out;
 case 152:
  VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_12, VAR_6->nlmsg_seq,
        VAR_6->nlmsg_flags);
  goto out;
 default:
  goto errout;
 }
errout:
 VAR_13 = -VAR_2;
out:
 FUNC_30(VAR_9);
 return VAR_13;
}
