
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct rtmsg {int dummy; } ;
struct TYPE_3__ {int dst; } ;
struct rt6_info {TYPE_1__ u; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct flowi {int fl6_src; int fl6_dst; void* oif; } ;
typedef int fl ;
struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 struct net_device* FUNC_1 (struct net*,int) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct net*,int *,struct flowi*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct flowi*,int ,int) ;
 int FUNC_7 (struct nlattr*) ;
 void* FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 int FUNC_11 (struct net*,struct sk_buff*,struct rt6_info*,int *,int *,int,int ,int ,int ,int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_12 (struct sk_buff*,struct net*,int ) ;
 int FUNC_13 (struct sk_buff*,int *) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (struct sk_buff*) ;
 struct net* FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_13, struct nlmsghdr* VAR_14, void *VAR_15)
{
 struct net *VAR_16 = FUNC_16(VAR_13->sk);
 struct nlattr *VAR_17[VAR_8+1];
 struct rt6_info *VAR_18;
 struct sk_buff *VAR_19;
 struct rtmsg *VAR_20;
 struct flowi VAR_21;
 int VAR_22, VAR_23 = 0;

 VAR_22 = FUNC_10(VAR_14, sizeof(*VAR_20), VAR_17, VAR_8, VAR_12);
 if (VAR_22 < 0)
  goto errout;

 VAR_22 = -VAR_0;
 FUNC_6(&VAR_21, 0, sizeof(VAR_21));

 if (VAR_17[VAR_10]) {
  if (FUNC_9(VAR_17[VAR_10]) < sizeof(struct in6_addr))
   goto errout;

  FUNC_4(&VAR_21.fl6_src, FUNC_7(VAR_17[VAR_10]));
 }

 if (VAR_17[VAR_6]) {
  if (FUNC_9(VAR_17[VAR_6]) < sizeof(struct in6_addr))
   goto errout;

  FUNC_4(&VAR_21.fl6_dst, FUNC_7(VAR_17[VAR_6]));
 }

 if (VAR_17[VAR_7])
  VAR_23 = FUNC_8(VAR_17[VAR_7]);

 if (VAR_17[VAR_9])
  VAR_21.oif = FUNC_8(VAR_17[VAR_9]);

 if (VAR_23) {
  struct net_device *VAR_24;
  VAR_24 = FUNC_1(VAR_16, VAR_23);
  if (!VAR_24) {
   VAR_22 = -VAR_2;
   goto errout;
  }
 }

 VAR_19 = FUNC_2(VAR_5, VAR_3);
 if (VAR_19 == ((void*)0)) {
  VAR_22 = -VAR_1;
  goto errout;
 }




 FUNC_15(VAR_19);
 FUNC_14(VAR_19, VAR_4 + sizeof(struct ipv6hdr));

 VAR_18 = (struct rt6_info*) FUNC_3(VAR_16, ((void*)0), &VAR_21);
 FUNC_13(VAR_19, &VAR_18->u.dst);

 VAR_22 = FUNC_11(VAR_16, VAR_19, VAR_18, &VAR_21.fl6_dst, &VAR_21.fl6_src, VAR_23,
       VAR_11, FUNC_0(VAR_13).pid,
       VAR_14->nlmsg_seq, 0, 0, 0);
 if (VAR_22 < 0) {
  FUNC_5(VAR_19);
  goto errout;
 }

 VAR_22 = FUNC_12(VAR_19, VAR_16, FUNC_0(VAR_13).pid);
errout:
 return VAR_22;
}
