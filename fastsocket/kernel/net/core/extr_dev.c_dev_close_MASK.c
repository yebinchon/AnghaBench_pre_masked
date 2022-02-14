
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; } ;
struct TYPE_2__ {int unreg_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (struct net_device*) ;
 int VAR_1 ;

int FUNC_5(struct net_device *VAR_2)
{
 if (VAR_2->flags & VAR_0) {
  FUNC_0(VAR_1);
  FUNC_2(&FUNC_4(VAR_2)->unreg_list, &VAR_1);
  FUNC_1(&VAR_1);
  FUNC_3(&VAR_1);
 }
 return 0;
}
