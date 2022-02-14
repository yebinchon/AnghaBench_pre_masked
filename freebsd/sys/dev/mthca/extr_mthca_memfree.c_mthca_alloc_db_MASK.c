
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mthca_dev {TYPE_2__* db_tab; TYPE_1__* pdev; int driver_uar; } ;
struct mthca_db_page {int * db_rec; int used; int mapping; } ;
typedef enum mthca_db_type { ____Placeholder_mthca_db_type } mthca_db_type ;
typedef int __be32 ;
struct TYPE_4__ {int max_group1; int min_group2; int mutex; struct mthca_db_page* page; int npages; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,int ,int *,int ) ;
 int FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct mthca_dev*,int ,int ) ;
 int FUNC_8 (struct mthca_dev*,int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int ) ;

int FUNC_12(struct mthca_dev *VAR_5, enum mthca_db_type VAR_6,
     u32 VAR_7, __be32 **VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;
 struct mthca_db_page *VAR_15;
 int VAR_16 = 0;

 FUNC_9(&VAR_5->db_tab->mutex);

 switch (VAR_6) {
 case 132:
 case 129:
  VAR_9 = 0;
  VAR_10 = 0;
  VAR_11 = VAR_5->db_tab->max_group1;
  VAR_12 = 1;
  break;

 case 131:
 case 130:
 case 128:
  VAR_9 = 1;
  VAR_10 = VAR_5->db_tab->npages - 1;
  VAR_11 = VAR_5->db_tab->min_group2;
  VAR_12 = -1;
  break;

 default:
  VAR_16 = -VAR_0;
  goto out;
 }

 for (VAR_13 = VAR_10; VAR_13 != VAR_11; VAR_13 += VAR_12)
  if (VAR_5->db_tab->page[VAR_13].db_rec &&
      !FUNC_0(VAR_5->db_tab->page[VAR_13].used,
     VAR_3)) {
   VAR_15 = VAR_5->db_tab->page + VAR_13;
   goto found;
  }

 for (VAR_13 = VAR_10; VAR_13 != VAR_11; VAR_13 += VAR_12)
  if (!VAR_5->db_tab->page[VAR_13].db_rec) {
   VAR_15 = VAR_5->db_tab->page + VAR_13;
   goto alloc;
  }

 if (VAR_5->db_tab->max_group1 >= VAR_5->db_tab->min_group2 - 1) {
  VAR_16 = -VAR_1;
  goto out;
 }

 if (VAR_9 == 0)
  ++VAR_5->db_tab->max_group1;
 else
  --VAR_5->db_tab->min_group2;

 VAR_15 = VAR_5->db_tab->page + VAR_11;

alloc:
 VAR_15->db_rec = FUNC_3(&VAR_5->pdev->dev, VAR_4,
       &VAR_15->mapping, VAR_2);
 if (!VAR_15->db_rec) {
  VAR_16 = -VAR_1;
  goto out;
 }
 FUNC_6(VAR_15->db_rec, 0, VAR_4);

 VAR_16 = FUNC_7(VAR_5, VAR_15->mapping,
     FUNC_8(VAR_5, &VAR_5->driver_uar, VAR_13));
 if (VAR_16) {
  FUNC_4(&VAR_5->pdev->dev, VAR_4,
      VAR_15->db_rec, VAR_15->mapping);
  goto out;
 }

 FUNC_1(VAR_15->used, VAR_3);

found:
 VAR_14 = FUNC_5(VAR_15->used, VAR_3);
 FUNC_11(VAR_14, VAR_15->used);

 if (VAR_9 == 1)
  VAR_14 = VAR_3 - 1 - VAR_14;

 VAR_16 = VAR_13 * VAR_3 + VAR_14;

 VAR_15->db_rec[VAR_14] = FUNC_2((VAR_7 << 8) | (VAR_6 << 5));

 *VAR_8 = (__be32 *) &VAR_15->db_rec[VAR_14];

out:
 FUNC_10(&VAR_5->db_tab->mutex);

 return VAR_16;
}
