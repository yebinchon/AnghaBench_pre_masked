
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipt_ECN_info {int ip_ect; } ;
struct iphdr {int tos; int check; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static inline bool
FUNC_4(struct sk_buff *VAR_1, const struct ipt_ECN_info *VAR_2)
{
 struct iphdr *VAR_3 = FUNC_2(VAR_1);

 if ((VAR_3->tos & VAR_0) != (VAR_2->ip_ect & VAR_0)) {
  __u8 VAR_4;
  if (!FUNC_3(VAR_1, sizeof(struct iphdr)))
   return 0;
  VAR_3 = FUNC_2(VAR_1);
  VAR_4 = VAR_3->tos;
  VAR_3->tos &= ~VAR_0;
  VAR_3->tos |= (VAR_2->ip_ect & VAR_0);
  FUNC_0(&VAR_3->check, FUNC_1(VAR_4), FUNC_1(VAR_3->tos));
 }
 return 1;
}
