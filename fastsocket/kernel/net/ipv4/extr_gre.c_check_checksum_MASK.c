
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; int csum; } ;
typedef int __sum16 ;




 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __sum16 FUNC_2(struct sk_buff *VAR_0)
{
 __sum16 VAR_1 = 0;

 switch (VAR_0->ip_summed) {
 case 129:
  VAR_1 = FUNC_1(VAR_0->csum);

  if (!VAR_1)
   break;


 case 128:
  VAR_0->csum = 0;
  VAR_1 = FUNC_0(VAR_0);
  VAR_0->ip_summed = 129;
  break;
 }

 return VAR_1;
}
