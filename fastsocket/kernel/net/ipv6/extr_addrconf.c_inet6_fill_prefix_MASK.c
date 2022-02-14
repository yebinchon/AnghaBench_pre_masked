
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct prefixmsg {int prefix_flags; scalar_t__ prefix_pad3; int prefix_type; int prefix_len; int prefix_ifindex; scalar_t__ prefix_pad2; scalar_t__ prefix_pad1; int prefix_family; } ;
struct prefix_cacheinfo {void* valid_time; void* preferred_time; } ;
struct prefix_info {int valid; int prefered; struct prefix_cacheinfo prefix; scalar_t__ autoconf; scalar_t__ onlink; int type; int prefix_len; } ;
struct nlmsghdr {int dummy; } ;
struct inet6_dev {TYPE_1__* dev; } ;
typedef int ci ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct prefix_cacheinfo*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct prefixmsg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int,int,unsigned int) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6, struct inet6_dev *VAR_7,
        struct prefix_info *VAR_8, u32 VAR_9, u32 VAR_10,
        int VAR_11, unsigned int VAR_12)
{
 struct prefixmsg *VAR_13;
 struct nlmsghdr *VAR_14;
 struct prefix_cacheinfo VAR_15;

 VAR_14 = FUNC_4(VAR_6, VAR_9, VAR_10, VAR_11, sizeof(*VAR_13), VAR_12);
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_14);
 VAR_13->prefix_family = VAR_0;
 VAR_13->prefix_pad1 = 0;
 VAR_13->prefix_pad2 = 0;
 VAR_13->prefix_ifindex = VAR_7->dev->ifindex;
 VAR_13->prefix_len = VAR_8->prefix_len;
 VAR_13->prefix_type = VAR_8->type;
 VAR_13->prefix_pad3 = 0;
 VAR_13->prefix_flags = 0;
 if (VAR_8->onlink)
  VAR_13->prefix_flags |= VAR_3;
 if (VAR_8->autoconf)
  VAR_13->prefix_flags |= VAR_2;

 FUNC_0(VAR_6, VAR_4, sizeof(VAR_8->prefix), &VAR_8->prefix);

 VAR_15.preferred_time = FUNC_5(VAR_8->prefered);
 VAR_15.valid_time = FUNC_5(VAR_8->valid);
 FUNC_0(VAR_6, VAR_5, sizeof(VAR_15), &VAR_15);

 return FUNC_3(VAR_6, VAR_14);

nla_put_failure:
 FUNC_1(VAR_6, VAR_14);
 return -VAR_1;
}
