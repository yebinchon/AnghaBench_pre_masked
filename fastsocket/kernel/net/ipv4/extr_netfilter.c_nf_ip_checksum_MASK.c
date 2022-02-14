
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sk_buff {int ip_summed; int len; int csum; } ;
struct iphdr {int daddr; int saddr; } ;
typedef int __sum16 ;




 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;

__sum16 FUNC_5(struct sk_buff *VAR_3, unsigned int VAR_4,
       unsigned int VAR_5, u_int8_t VAR_6)
{
 const struct iphdr *VAR_7 = FUNC_4(VAR_3);
 __sum16 VAR_8 = 0;

 switch (VAR_3->ip_summed) {
 case 129:
  if (VAR_4 != VAR_2 && VAR_4 != VAR_1)
   break;
  if ((VAR_6 == 0 && !FUNC_1(VAR_3->csum)) ||
      !FUNC_2(VAR_7->saddr, VAR_7->daddr,
           VAR_3->len - VAR_5, VAR_6,
           VAR_3->csum)) {
   VAR_3->ip_summed = VAR_0;
   break;
  }

 case 128:
  if (VAR_6 == 0)
   VAR_3->csum = 0;
  else
   VAR_3->csum = FUNC_3(VAR_7->saddr, VAR_7->daddr,
             VAR_3->len - VAR_5,
             VAR_6, 0);
  VAR_8 = FUNC_0(VAR_3);
 }
 return VAR_8;
}
