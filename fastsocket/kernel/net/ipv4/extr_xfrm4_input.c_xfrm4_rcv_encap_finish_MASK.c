
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct iphdr {int tos; int saddr; int daddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int * FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_5(struct sk_buff *VAR_1)
{
 if (FUNC_4(VAR_1) == ((void*)0)) {
  const struct iphdr *VAR_2 = FUNC_1(VAR_1);

  if (FUNC_2(VAR_1, VAR_2->daddr, VAR_2->saddr, VAR_2->tos,
       VAR_1->dev))
   goto drop;
 }
 return FUNC_0(VAR_1);
drop:
 FUNC_3(VAR_1);
 return VAR_0;
}
