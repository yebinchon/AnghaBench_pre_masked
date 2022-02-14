
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_icm_table {int num_obj; int obj_size; int mutex; TYPE_1__** icm; int coherent; scalar_t__ virt; } ;
struct mthca_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mthca_dev*,scalar_t__,int) ;
 int FUNC_1 (struct mthca_dev*,TYPE_1__*,int ) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mthca_dev *VAR_2, struct mthca_icm_table *VAR_3, int VAR_4)
{
 int VAR_5;

 if (!FUNC_2(VAR_2))
  return;

 VAR_5 = (VAR_4 & (VAR_3->num_obj - 1)) * VAR_3->obj_size / VAR_1;

 FUNC_3(&VAR_3->mutex);

 if (--VAR_3->icm[VAR_5]->refcount == 0) {
  FUNC_0(VAR_2, VAR_3->virt + VAR_5 * VAR_1,
    VAR_1 / VAR_0);
  FUNC_1(VAR_2, VAR_3->icm[VAR_5], VAR_3->coherent);
  VAR_3->icm[VAR_5] = ((void*)0);
 }

 FUNC_4(&VAR_3->mutex);
}
