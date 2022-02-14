
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* persist; } ;
struct TYPE_3__ {int pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*,int,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct mlx4_ib_dev *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
 char VAR_4[9];


 FUNC_2(VAR_1, FUNC_0(VAR_0->dev->persist->pdev), VAR_3);
 FUNC_3(VAR_4, VAR_1, 8);
 VAR_4[8] = '\0';



 FUNC_1(VAR_1, "%s%.2d.%d", VAR_4, (VAR_2/8), (VAR_2%8));
}
