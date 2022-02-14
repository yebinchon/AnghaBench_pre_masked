
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int xmit_lock_owner; int _xmit_lock; } ;
struct net_device {int type; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
       struct netdev_queue *VAR_1,
       void *VAR_2)
{
 FUNC_1(&VAR_1->_xmit_lock);
 FUNC_0(&VAR_1->_xmit_lock, VAR_0->type);
 VAR_1->xmit_lock_owner = -1;
}
