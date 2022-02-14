
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_user_db_table {int mutex; TYPE_1__* page; } ;
struct mthca_uar {int dummy; } ;
struct mthca_dev {int dummy; } ;
struct TYPE_2__ {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct mthca_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mthca_dev *VAR_1, struct mthca_uar *VAR_2,
    struct mthca_user_db_table *VAR_3, int VAR_4)
{
 if (!FUNC_0(VAR_1))
  return;






 FUNC_1(&VAR_3->mutex);

 --VAR_3->page[VAR_4 / VAR_0].refcount;

 FUNC_2(&VAR_3->mutex);
}
