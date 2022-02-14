
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {int ifindex; } ;
struct ndmsg {unsigned int ndm_flags; int ndm_state; int ndm_ifindex; scalar_t__ ndm_type; scalar_t__ ndm_pad2; scalar_t__ ndm_pad1; int ndm_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ,int *) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct ndmsg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_6,
       struct net_device *VAR_7,
       u8 *VAR_8, u32 VAR_9, u32 VAR_10,
       int VAR_11, unsigned int VAR_12)
{
 struct nlmsghdr *VAR_13;
 struct ndmsg *VAR_14;

 VAR_13 = FUNC_4(VAR_6, VAR_9, VAR_10, VAR_11, sizeof(*VAR_14), VAR_4);
 if (!VAR_13)
  return -VAR_1;

 VAR_14 = FUNC_2(VAR_13);
 VAR_14->ndm_family = VAR_0;
 VAR_14->ndm_pad1 = 0;
 VAR_14->ndm_pad2 = 0;
 VAR_14->ndm_flags = VAR_12;
 VAR_14->ndm_type = 0;
 VAR_14->ndm_ifindex = VAR_7->ifindex;
 VAR_14->ndm_state = VAR_5;

 if (FUNC_0(VAR_6, VAR_3, VAR_2, VAR_8))
  goto nla_put_failure;

 return FUNC_3(VAR_6, VAR_13);

nla_put_failure:
 FUNC_1(VAR_6, VAR_13);
 return -VAR_1;
}
