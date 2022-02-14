
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_neigh {TYPE_1__* dev; } ;
struct sk_buff {TYPE_1__* dev; int protocol; } ;
struct TYPE_2__ {int type; } ;




 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;

void FUNC_5(struct sk_buff *VAR_1, struct x25_neigh *VAR_2)
{
 unsigned char *VAR_3;

 FUNC_4(VAR_1);

 switch (VAR_2->dev->type) {
  case 128:
   VAR_3 = FUNC_3(VAR_1, 1);
   *VAR_3 = 0x00;
   break;






  default:
   FUNC_2(VAR_1);
   return;
 }

 VAR_1->protocol = FUNC_1(VAR_0);
 VAR_1->dev = VAR_2->dev;

 FUNC_0(VAR_1);
}
