
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; } ;
struct iphdr {int tos; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_6(const struct iphdr *VAR_2, struct sk_buff *VAR_3)
{
 if (FUNC_0(VAR_2->tos)) {
  if (VAR_3->protocol == FUNC_3(VAR_0)) {
   FUNC_2(FUNC_4(VAR_3));
  } else if (VAR_3->protocol == FUNC_3(VAR_1)) {
   FUNC_1(FUNC_5(VAR_3));
  }
 }
}
