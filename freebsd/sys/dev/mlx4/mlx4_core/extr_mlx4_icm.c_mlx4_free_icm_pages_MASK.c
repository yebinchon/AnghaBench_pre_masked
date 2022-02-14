
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_icm_chunk {scalar_t__ nsg; int npages; TYPE_2__* mem; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_4__ {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct mlx4_dev *VAR_1, struct mlx4_icm_chunk *VAR_2)
{
 int VAR_3;

 if (VAR_2->nsg > 0)
  FUNC_2(VAR_1->persist->pdev, VAR_2->mem, VAR_2->npages,
        VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->npages; ++VAR_3)
  FUNC_0(FUNC_3(&VAR_2->mem[VAR_3]),
        FUNC_1(VAR_2->mem[VAR_3].length));
}
