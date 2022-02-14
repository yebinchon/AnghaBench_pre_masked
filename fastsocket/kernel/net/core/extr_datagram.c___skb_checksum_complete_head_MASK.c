
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int dev; int csum; } ;
typedef int __sum16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_4 (int) ;

__sum16 FUNC_5(struct sk_buff *VAR_2, int VAR_3)
{
 __sum16 VAR_4;

 VAR_4 = FUNC_0(FUNC_3(VAR_2, 0, VAR_3, VAR_2->csum));
 if (FUNC_1(!VAR_4)) {
  if (FUNC_4(VAR_2->ip_summed == VAR_0))
   FUNC_2(VAR_2->dev);
  VAR_2->ip_summed = VAR_1;
 }
 return VAR_4;
}
