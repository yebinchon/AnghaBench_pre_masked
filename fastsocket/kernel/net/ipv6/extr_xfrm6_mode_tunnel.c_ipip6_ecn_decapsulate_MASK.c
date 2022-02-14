
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_5(struct sk_buff *VAR_0)
{
 struct ipv6hdr *VAR_1 = FUNC_4(VAR_0);
 struct ipv6hdr *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_0(FUNC_3(VAR_1)))
  FUNC_1(VAR_2);
}
