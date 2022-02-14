
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sk_buff {int ip_summed; int len; int csum; } ;
struct iphdr {int daddr; int saddr; } ;
typedef int __sum16 ;




 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static __sum16 FUNC_4(struct sk_buff *VAR_1, unsigned int VAR_2,
          unsigned int VAR_3, unsigned int VAR_4,
          u_int8_t VAR_5)
{
 const struct iphdr *VAR_6 = FUNC_2(VAR_1);
 __sum16 VAR_7 = 0;

 switch (VAR_1->ip_summed) {
 case 129:
  if (VAR_4 == VAR_1->len - VAR_3)
   return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5);

 case 128:
  VAR_1->csum = FUNC_1(VAR_6->saddr, VAR_6->daddr, VAR_5,
            VAR_1->len - VAR_3, 0);
  VAR_1->ip_summed = 128;
  VAR_7 = FUNC_0(VAR_1, VAR_3 + VAR_4);
  if (!VAR_7)
   VAR_1->ip_summed = VAR_0;
 }
 return VAR_7;
}
