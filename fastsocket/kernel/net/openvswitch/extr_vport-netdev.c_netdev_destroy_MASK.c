
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vport {int dummy; } ;
struct netdev_vport {int rcu; TYPE_1__* dev; } ;
struct TYPE_2__ {int * ax25_ptr; int priv_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_1 ;
 struct netdev_vport* FUNC_3 (struct vport*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct vport *VAR_4)
{
 struct netdev_vport *VAR_5 = FUNC_3(VAR_4);

 FUNC_4();
 VAR_5->dev->priv_flags &= ~VAR_0;
 VAR_5->dev->ax25_ptr = ((void*)0);

 if (FUNC_0(&VAR_2))
  VAR_3 = ((void*)0);

 FUNC_2(VAR_5->dev, -1);
 FUNC_5();

 FUNC_1(&VAR_5->rcu, VAR_1);
}
