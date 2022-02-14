
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mthca_icm_chunk {scalar_t__ nsg; int npages; TYPE_1__* mem; } ;
struct mthca_dev {int pdev; } ;
struct TYPE_3__ {int length; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct mthca_dev *VAR_1, struct mthca_icm_chunk *VAR_2)
{
 int VAR_3;

 if (VAR_2->nsg > 0)
  FUNC_2(VAR_1->pdev, VAR_2->mem, VAR_2->npages,
        VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->npages; ++VAR_3)
  FUNC_0(FUNC_3(&VAR_2->mem[VAR_3]),
        FUNC_1(VAR_2->mem[VAR_3].length));
}
