
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mthca_dev {TYPE_2__* db_tab; TYPE_1__* pdev; int driver_uar; } ;
struct TYPE_4__ {int npages; struct TYPE_4__* page; int mapping; int db_rec; int used; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct mthca_dev*,int ,int) ;
 int FUNC_4 (struct mthca_dev*) ;
 int FUNC_5 (struct mthca_dev*,int *,int) ;
 int FUNC_6 (struct mthca_dev*,char*,int) ;

void FUNC_7(struct mthca_dev *VAR_2)
{
 int VAR_3;

 if (!FUNC_4(VAR_2))
  return;







 for (VAR_3 = 0; VAR_3 < VAR_2->db_tab->npages; ++VAR_3) {
  if (!VAR_2->db_tab->page[VAR_3].db_rec)
   continue;

  if (!FUNC_0(VAR_2->db_tab->page[VAR_3].used, VAR_0))
   FUNC_6(VAR_2, "Kernel UARC page %d not empty\n", VAR_3);

  FUNC_3(VAR_2, FUNC_5(VAR_2, &VAR_2->driver_uar, VAR_3), 1);

  FUNC_1(&VAR_2->pdev->dev, VAR_1,
      VAR_2->db_tab->page[VAR_3].db_rec,
      VAR_2->db_tab->page[VAR_3].mapping);
 }

 FUNC_2(VAR_2->db_tab->page);
 FUNC_2(VAR_2->db_tab);
}
