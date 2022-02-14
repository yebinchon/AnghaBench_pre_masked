
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_vs_flags {int mask; int flags; } ;
struct ip_vs_service {int fwmark; int timeout; int netmask; int stats; TYPE_2__* pe; TYPE_1__* scheduler; int port; struct ip_vs_flags addr; int protocol; int af; int flags; } ;
typedef int flags ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


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
 int FUNC_0 (struct sk_buff*,int ,int,struct ip_vs_flags*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int *) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_14,
       struct ip_vs_service *VAR_15)
{
 struct nlattr *VAR_16;
 struct ip_vs_flags VAR_17 = { .flags = VAR_15->flags,
         .mask = ~0 };

 VAR_16 = FUNC_7(VAR_14, VAR_2);
 if (!VAR_16)
  return -VAR_0;

 FUNC_2(VAR_14, VAR_4, VAR_15->af);

 if (VAR_15->fwmark) {
  FUNC_3(VAR_14, VAR_6, VAR_15->fwmark);
 } else {
  FUNC_2(VAR_14, VAR_10, VAR_15->protocol);
  FUNC_0(VAR_14, VAR_3, sizeof(VAR_15->addr), &VAR_15->addr);
  FUNC_2(VAR_14, VAR_9, VAR_15->port);
 }

 FUNC_1(VAR_14, VAR_11, VAR_15->scheduler->name);
 if (VAR_15->pe)
  FUNC_1(VAR_14, VAR_8, VAR_15->pe->name);
 FUNC_0(VAR_14, VAR_5, sizeof(VAR_17), &VAR_17);
 FUNC_3(VAR_14, VAR_13, VAR_15->timeout / VAR_1);
 FUNC_3(VAR_14, VAR_7, VAR_15->netmask);

 if (FUNC_4(VAR_14, VAR_12, &VAR_15->stats))
  goto nla_put_failure;

 FUNC_6(VAR_14, VAR_16);

 return 0;

nla_put_failure:
 FUNC_5(VAR_14, VAR_16);
 return -VAR_0;
}
