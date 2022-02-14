
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mthca_dev {TYPE_2__* db_tab; TYPE_1__* pdev; int driver_uar; } ;
struct mthca_db_page {scalar_t__* db_rec; int mapping; int used; } ;
struct TYPE_4__ {int min_group2; int max_group1; int mutex; struct mthca_db_page* page; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,scalar_t__*,int ) ;
 int FUNC_3 (struct mthca_dev*,int ,int) ;
 int FUNC_4 (struct mthca_dev*,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mthca_dev *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct mthca_db_page *VAR_7;

 VAR_5 = VAR_4 / VAR_0;
 VAR_6 = VAR_4 % VAR_0;

 VAR_7 = VAR_2->db_tab->page + VAR_5;

 FUNC_5(&VAR_2->db_tab->mutex);

 VAR_7->db_rec[VAR_6] = 0;
 if (VAR_5 >= VAR_2->db_tab->min_group2)
  VAR_6 = VAR_0 - 1 - VAR_6;
 FUNC_1(VAR_6, VAR_7->used);

 if (FUNC_0(VAR_7->used, VAR_0) &&
     VAR_5 >= VAR_2->db_tab->max_group1 - 1) {
  FUNC_3(VAR_2, FUNC_4(VAR_2, &VAR_2->driver_uar, VAR_5), 1);

  FUNC_2(&VAR_2->pdev->dev, VAR_1,
      VAR_7->db_rec, VAR_7->mapping);
  VAR_7->db_rec = ((void*)0);

  if (VAR_5 == VAR_2->db_tab->max_group1) {
   --VAR_2->db_tab->max_group1;

  }
  if (VAR_5 == VAR_2->db_tab->min_group2)
   ++VAR_2->db_tab->min_group2;
 }

 FUNC_6(&VAR_2->db_tab->mutex);
}
