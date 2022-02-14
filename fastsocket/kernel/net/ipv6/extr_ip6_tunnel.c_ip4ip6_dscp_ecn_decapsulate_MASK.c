
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ip6_tnl {TYPE_1__ parms; } ;
typedef int __u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct ipv6hdr*) ;

__attribute__((used)) static void FUNC_5(struct ip6_tnl *VAR_2,
     struct ipv6hdr *VAR_3,
     struct sk_buff *VAR_4)
{
 __u8 VAR_5 = FUNC_4(VAR_3) & ~VAR_0;

 if (VAR_2->parms.flags & VAR_1)
  FUNC_3(FUNC_2(VAR_4), VAR_0, VAR_5);

 if (FUNC_0(VAR_5))
  FUNC_1(FUNC_2(VAR_4));
}
