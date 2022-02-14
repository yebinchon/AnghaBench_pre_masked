
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct net_device* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct mlx4_ib_dev* FUNC_8 (struct ib_device*) ;

__attribute__((used)) static struct net_device *FUNC_9(struct ib_device *VAR_1, u8 VAR_2)
{
 struct mlx4_ib_dev *VAR_3 = FUNC_8(VAR_1);
 struct net_device *VAR_4;

 FUNC_6();
 VAR_4 = FUNC_2(VAR_3->dev, VAR_0, VAR_2);
 if (VAR_4)
  FUNC_1(VAR_4);

 FUNC_7();
 return VAR_4;
}
