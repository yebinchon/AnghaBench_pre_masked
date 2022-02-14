
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dev; } ;
struct dst_entry {int dev; } ;
struct TYPE_2__ {int daddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct dst_entry* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3, u8 VAR_4, int VAR_5)
{
 int VAR_6;
 struct dst_entry *VAR_7 = FUNC_7(VAR_3);
 switch (VAR_5) {
 case 129:
  VAR_6 = FUNC_4(&FUNC_5(VAR_3)->daddr);
  if (VAR_6 == VAR_2) {
   FUNC_0(FUNC_1(VAR_7->dev), FUNC_3(VAR_7),
          VAR_1);
   break;
  }

 case 128:
  FUNC_0(FUNC_1(VAR_7->dev), FUNC_3(VAR_7),
         VAR_5);
  break;
 }
 FUNC_2(VAR_3, VAR_0, VAR_4, 0, VAR_3->dev);
 FUNC_6(VAR_3);
 return 0;
}
