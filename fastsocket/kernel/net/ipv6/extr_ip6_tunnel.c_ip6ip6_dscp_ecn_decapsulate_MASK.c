
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct ip6_tnl {TYPE_1__ parms; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ipv6hdr*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct ip6_tnl *VAR_1,
     struct ipv6hdr *VAR_2,
     struct sk_buff *VAR_3)
{
 if (VAR_1->parms.flags & VAR_0)
  FUNC_2(FUNC_3(VAR_2), FUNC_4(VAR_3));

 if (FUNC_0(FUNC_3(VAR_2)))
  FUNC_1(FUNC_4(VAR_3));
}
