
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct TYPE_2__ {int frag_off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct sk_buff*,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int VAR_5 ;

int FUNC_4(struct sk_buff *VAR_6)
{




 if (FUNC_3(VAR_6)->frag_off & FUNC_1(VAR_1 | VAR_2)) {
  if (FUNC_2(VAR_6, VAR_0))
   return 0;
 }

 return FUNC_0(VAR_4, VAR_3, VAR_6, VAR_6->dev, ((void*)0),
         VAR_5);
}
