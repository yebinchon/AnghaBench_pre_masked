
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct ip6addrlbl_entry {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifaddrlblmsg {scalar_t__ ifal_family; int ifal_prefixlen; scalar_t__ ifal_index; } ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int seq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 TYPE_2__ FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net*,scalar_t__) ;
 struct ip6addrlbl_entry* FUNC_3 (struct net*,struct in6_addr*,int ,scalar_t__) ;
 int VAR_9 ;
 int FUNC_4 (struct sk_buff*,struct ip6addrlbl_entry*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct ip6addrlbl_entry*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct ip6addrlbl_entry*) ;
 TYPE_1__ VAR_10 ;
 int FUNC_8 (struct in6_addr*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct in6_addr* FUNC_10 (struct nlattr*) ;
 struct ifaddrlblmsg* FUNC_11 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct nlmsghdr*,int,struct nlattr**,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (struct sk_buff*,struct net*,int ) ;
 struct net* FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_11, struct nlmsghdr* VAR_12,
     void *VAR_13)
{
 struct net *VAR_14 = FUNC_17(VAR_11->sk);
 struct ifaddrlblmsg *VAR_15;
 struct nlattr *VAR_16[VAR_7+1];
 struct in6_addr *VAR_17;
 u32 VAR_18;
 int VAR_19 = 0;
 struct ip6addrlbl_entry *VAR_20;
 struct sk_buff *VAR_21;

 VAR_19 = FUNC_13(VAR_12, sizeof(*VAR_15), VAR_16, VAR_7, VAR_9);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_15 = FUNC_11(VAR_12);

 if (VAR_15->ifal_family != VAR_0 ||
     VAR_15->ifal_prefixlen != 128)
  return -VAR_1;

 if (VAR_15->ifal_index &&
     !FUNC_2(VAR_14, VAR_15->ifal_index))
  return -VAR_1;

 if (!VAR_16[VAR_6])
  return -VAR_1;

 VAR_17 = FUNC_10(VAR_16[VAR_6]);
 if (!VAR_17)
  return -VAR_1;

 FUNC_14();
 VAR_20 = FUNC_3(VAR_14, VAR_17, FUNC_8(VAR_17), VAR_15->ifal_index);
 if (VAR_20 && FUNC_5(VAR_20))
  VAR_20 = ((void*)0);
 VAR_18 = VAR_10.seq;
 FUNC_15();

 if (!VAR_20) {
  VAR_19 = -VAR_4;
  goto out;
 }

 if (!(VAR_21 = FUNC_12(FUNC_6(), VAR_5))) {
  FUNC_7(VAR_20);
  return -VAR_3;
 }

 VAR_19 = FUNC_4(VAR_21, VAR_20, VAR_18,
         FUNC_0(VAR_11).pid, VAR_12->nlmsg_seq,
         VAR_8, 0);

 FUNC_7(VAR_20);

 if (VAR_19 < 0) {
  FUNC_1(VAR_19 == -VAR_2);
  FUNC_9(VAR_21);
  goto out;
 }

 VAR_19 = FUNC_16(VAR_21, VAR_14, FUNC_0(VAR_11).pid);
out:
 return VAR_19;
}
