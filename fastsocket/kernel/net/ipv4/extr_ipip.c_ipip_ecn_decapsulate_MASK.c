
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iphdr {int tos; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct iphdr*) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_3(const struct iphdr *VAR_0,
     struct sk_buff *VAR_1)
{
 struct iphdr *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_0->tos))
  FUNC_1(VAR_2);
}
