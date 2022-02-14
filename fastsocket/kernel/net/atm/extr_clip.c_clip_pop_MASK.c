
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct clip_vcc {int xoff; int (* old_pop ) (struct atm_vcc*,struct sk_buff*) ;} ;
struct atm_vcc {int dummy; } ;
struct TYPE_2__ {int xoff_lock; } ;


 struct clip_vcc* FUNC_0 (struct atm_vcc*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct atm_vcc*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,struct atm_vcc*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(struct atm_vcc *VAR_0, struct sk_buff *VAR_1)
{
 struct clip_vcc *VAR_2 = FUNC_0(VAR_0);
 struct net_device *VAR_3 = VAR_1->dev;
 int VAR_4;
 unsigned long VAR_5;

 FUNC_4("clip_pop(vcc %p)\n", VAR_0);
 VAR_2->old_pop(VAR_0, VAR_1);

 if (!VAR_3)
  return;
 FUNC_5(&FUNC_1(VAR_3)->xoff_lock, VAR_5);
 if (FUNC_2(VAR_0, 0)) {
  VAR_4 = FUNC_8(&VAR_2->xoff, 0);
  if (VAR_4)
   FUNC_3(VAR_3);
 }
 FUNC_6(&FUNC_1(VAR_3)->xoff_lock, VAR_5);
}
