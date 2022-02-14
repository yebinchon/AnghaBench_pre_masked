
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_tools_dev {scalar_t__ char_device; int fdev; } ;
struct cdev {int si_name; } ;


 int FUNC_0 (struct cdev*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mlx5_fpga_tools_dev *VAR_0)
{

 FUNC_1(FUNC_2(VAR_0->fdev), "tools char device %s destroyed\n",
     ((struct cdev *)(VAR_0->char_device))->si_name);
 FUNC_0((struct cdev *)(VAR_0->char_device));
}
