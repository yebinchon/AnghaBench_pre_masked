
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ check; } ;
struct sk_buff {scalar_t__ ip_summed; int csum; } ;
typedef int __wsum ;
typedef int __sum16 ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned short,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static __sum16 FUNC_5(struct sk_buff *VAR_2, struct udphdr *VAR_3,
       unsigned short VAR_4, __be32 VAR_5, __be32 VAR_6)
{
 __wsum VAR_7;

 if (VAR_3->check == 0 || FUNC_4(VAR_2))
  return 0;

 VAR_7 = FUNC_3(VAR_5, VAR_6, VAR_4, VAR_1, 0);

 if (VAR_2->ip_summed == VAR_0 &&
     !FUNC_2(FUNC_1(VAR_7, VAR_2->csum)))
  return 0;

 VAR_2->csum = VAR_7;

 return FUNC_0(VAR_2);
}
