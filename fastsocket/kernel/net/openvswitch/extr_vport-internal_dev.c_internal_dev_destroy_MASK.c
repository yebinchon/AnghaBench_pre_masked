
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct netdev_vport {int dev; } ;


 int FUNC_0 (int ,int) ;
 struct netdev_vport* FUNC_1 (struct vport*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct vport *VAR_0)
{
 struct netdev_vport *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->dev);
 FUNC_3();
 FUNC_0(VAR_1->dev, -1);


 FUNC_5(VAR_1->dev);

 FUNC_4();
}
