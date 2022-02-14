
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int _xmit_lock; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
         struct netdev_queue *VAR_2,
         void *VAR_3)
{
 FUNC_0(&VAR_2->_xmit_lock,
           &VAR_0,
           *(int *)VAR_3);
}
