
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int ip_summed; int csum; } ;
struct iphdr {int daddr; int saddr; } ;
typedef int __wsum ;
typedef int __sum16 ;
struct TYPE_2__ {int flush; } ;




 void* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff** FUNC_7 (struct sk_buff**,struct sk_buff*) ;
 int FUNC_8 (int ,int ,int ,int ) ;

struct sk_buff **FUNC_9(struct sk_buff **VAR_2, struct sk_buff *VAR_3)
{
 struct iphdr *VAR_4 = FUNC_5(VAR_3);
 __wsum VAR_5;
 __sum16 VAR_6;

 switch (VAR_3->ip_summed) {
 case 129:
  if (!FUNC_8(FUNC_4(VAR_3), VAR_4->saddr, VAR_4->daddr,
      VAR_3->csum)) {
   VAR_3->ip_summed = VAR_0;
   break;
  }
flush:
  FUNC_0(VAR_3)->flush = 1;
  return ((void*)0);

 case 128:
  VAR_5 = FUNC_2(VAR_4->saddr, VAR_4->daddr,
       FUNC_4(VAR_3), VAR_1, 0);
  VAR_6 = FUNC_1(FUNC_3(VAR_3,
          FUNC_6(VAR_3),
          FUNC_4(VAR_3),
          VAR_5));
  if (VAR_6)
   goto flush;

  VAR_3->ip_summed = VAR_0;
  break;
 }

 return FUNC_7(VAR_2, VAR_3);
}
