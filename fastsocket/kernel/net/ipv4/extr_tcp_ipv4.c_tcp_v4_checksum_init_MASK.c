
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int len; int csum; } ;
struct iphdr {int daddr; int saddr; } ;
typedef int __sum16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int,int ,int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int,int ,int ,int ) ;

__attribute__((used)) static __sum16 FUNC_4(struct sk_buff *VAR_3)
{
 const struct iphdr *VAR_4 = FUNC_2(VAR_3);

 if (VAR_3->ip_summed == VAR_0) {
  if (!FUNC_3(VAR_3->len, VAR_4->saddr,
      VAR_4->daddr, VAR_3->csum)) {
   VAR_3->ip_summed = VAR_1;
   return 0;
  }
 }

 VAR_3->csum = FUNC_1(VAR_4->saddr, VAR_4->daddr,
           VAR_3->len, VAR_2, 0);

 if (VAR_3->len <= 76) {
  return FUNC_0(VAR_3);
 }
 return 0;
}
