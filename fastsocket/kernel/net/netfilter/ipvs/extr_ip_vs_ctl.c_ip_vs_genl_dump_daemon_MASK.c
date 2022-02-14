
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; } ;
typedef int __be32 ;
struct TYPE_4__ {int pid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4, __be32 VAR_5,
      const char *VAR_6, __be32 VAR_7,
      struct netlink_callback *VAR_8)
{
 void *VAR_9;
 VAR_9 = FUNC_3(VAR_4, FUNC_0(VAR_8->skb).pid, VAR_8->nlh->nlmsg_seq,
     &VAR_3, VAR_2,
     VAR_1);
 if (!VAR_9)
  return -VAR_0;

 if (FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7))
  goto nla_put_failure;

 return FUNC_2(VAR_4, VAR_9);

nla_put_failure:
 FUNC_1(VAR_4, VAR_9);
 return -VAR_0;
}
