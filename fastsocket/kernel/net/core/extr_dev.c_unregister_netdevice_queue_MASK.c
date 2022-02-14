
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int unreg_list; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct net_device*) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_0, struct list_head *VAR_1)
{
 FUNC_0();

 if (VAR_1) {
  FUNC_1(&FUNC_3(VAR_0)->unreg_list, VAR_1);
 } else {
  FUNC_4(VAR_0);

  FUNC_2(VAR_0);
 }
}
