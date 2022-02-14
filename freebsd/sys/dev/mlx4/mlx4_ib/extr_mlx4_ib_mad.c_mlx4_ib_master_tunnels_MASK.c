
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct TYPE_4__ {int num_ports; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int FUNC_0 (struct mlx4_ib_dev*,int ,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct mlx4_ib_dev *VAR_0, int VAR_1)
{
 int VAR_2;

 if (!FUNC_1(VAR_0->dev))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->dev->caps.num_ports; VAR_2++)
  FUNC_0(VAR_0, FUNC_2(VAR_0->dev), VAR_2 + 1, VAR_1);
 return;
}
