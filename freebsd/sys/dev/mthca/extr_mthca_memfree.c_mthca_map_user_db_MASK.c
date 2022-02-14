
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct mthca_user_db_table {int mutex; TYPE_2__* page; } ;
struct mthca_uar {int dummy; } ;
struct TYPE_3__ {int uarc_size; } ;
struct mthca_dev {int pdev; TYPE_1__ uar_table; } ;
struct TYPE_4__ {int refcount; int uvirt; int mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int ,struct page**,int *) ;
 int FUNC_1 (struct mthca_dev*,int ,int ) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (struct mthca_dev*,struct mthca_uar*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int,int ) ;
 int FUNC_7 (int ,int *,int,int ) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int *) ;
 struct page* FUNC_10 (int *) ;
 int FUNC_11 (int *,struct page*,int ,int) ;

int FUNC_12(struct mthca_dev *VAR_6, struct mthca_uar *VAR_7,
        struct mthca_user_db_table *VAR_8, int VAR_9, u64 VAR_10)
{
 struct page *VAR_11[1];
 int VAR_12 = 0;
 int VAR_13;

 if (!FUNC_2(VAR_6))
  return 0;

 if (VAR_9 < 0 || VAR_9 > VAR_6->uar_table.uarc_size / 8)
  return -VAR_0;

 FUNC_4(&VAR_8->mutex);

 VAR_13 = VAR_9 / VAR_2;

 if ((VAR_8->page[VAR_13].refcount >= VAR_2) ||
     (VAR_8->page[VAR_13].uvirt && VAR_8->page[VAR_13].uvirt != VAR_10) ||
     (VAR_10 & 4095)) {
  VAR_12 = -VAR_0;
  goto out;
 }

 if (VAR_8->page[VAR_13].refcount) {
  ++VAR_8->page[VAR_13].refcount;
  goto out;
 }

 VAR_12 = FUNC_0(VAR_10 & VAR_4, 1, VAR_1, VAR_11, ((void*)0));
 if (VAR_12 < 0)
  goto out;

 FUNC_11(&VAR_8->page[VAR_13].mem, VAR_11[0], VAR_3,
   VAR_10 & ~VAR_4);

 VAR_12 = FUNC_6(VAR_6->pdev, &VAR_8->page[VAR_13].mem, 1, VAR_5);
 if (VAR_12 < 0) {
  FUNC_8(VAR_11[0]);
  goto out;
 }

 VAR_12 = FUNC_1(VAR_6, FUNC_9(&VAR_8->page[VAR_13].mem),
     FUNC_3(VAR_6, VAR_7, VAR_13));
 if (VAR_12) {
  FUNC_7(VAR_6->pdev, &VAR_8->page[VAR_13].mem, 1, VAR_5);
  FUNC_8(FUNC_10(&VAR_8->page[VAR_13].mem));
  goto out;
 }

 VAR_8->page[VAR_13].uvirt = VAR_10;
 VAR_8->page[VAR_13].refcount = 1;

out:
 FUNC_5(&VAR_8->mutex);
 return VAR_12;
}
