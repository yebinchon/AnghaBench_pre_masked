
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct sta_info {TYPE_2__* sdata; TYPE_1__ sta; } ;
struct sk_buff {int cb; int protocol; int dev; } ;
struct iapp_layer2_update {int ssap; int control; int* xid_info; scalar_t__ dsap; int len; int sa; int da; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_8(struct sta_info *VAR_1)
{
 struct iapp_layer2_update *VAR_2;
 struct sk_buff *VAR_3;




 VAR_3 = FUNC_0(sizeof(*VAR_2));
 if (!VAR_3)
  return;
 VAR_2 = (struct iapp_layer2_update *)FUNC_7(VAR_3, sizeof(*VAR_2));




 FUNC_1(VAR_2->da);
 FUNC_4(VAR_2->sa, VAR_1->sta.addr, VAR_0);
 VAR_2->len = FUNC_3(6);
 VAR_2->dsap = 0;
 VAR_2->ssap = 0x01;
 VAR_2->control = 0xaf;

 VAR_2->xid_info[0] = 0x81;
 VAR_2->xid_info[1] = 1;
 VAR_2->xid_info[2] = 0;

 VAR_3->dev = VAR_1->sdata->dev;
 VAR_3->protocol = FUNC_2(VAR_3, VAR_1->sdata->dev);
 FUNC_5(VAR_3->cb, 0, sizeof(VAR_3->cb));
 FUNC_6(VAR_3);
}
