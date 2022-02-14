
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_icm_table {int obj_size; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mthca_dev*) ;
 int FUNC_1 (struct mthca_dev*,struct mthca_icm_table*,int) ;

void FUNC_2(struct mthca_dev *VAR_1, struct mthca_icm_table *VAR_2,
      int VAR_3, int VAR_4)
{
 int VAR_5;

 if (!FUNC_0(VAR_1))
  return;

 for (VAR_5 = VAR_3; VAR_5 <= VAR_4; VAR_5 += VAR_0 / VAR_2->obj_size)
  FUNC_1(VAR_1, VAR_2, VAR_5);
}
