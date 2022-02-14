
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_context {int hugetlb_lock; int hugetlb_list; } ;
struct mlx5_buf {int length; TYPE_1__* hmem; int base; } ;
struct TYPE_3__ {int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mlx5_context *VAR_2, struct mlx5_buf *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_3->length / VAR_0;
 FUNC_4(&VAR_2->hugetlb_lock);
 FUNC_2(&VAR_3->hmem->bitmap, VAR_3->base, VAR_4);
 if (FUNC_1(&VAR_3->hmem->bitmap)) {
  FUNC_0(&VAR_2->hugetlb_list, VAR_3->hmem, VAR_1);
  FUNC_5(&VAR_2->hugetlb_lock);
  FUNC_3(VAR_3->hmem);
 } else
  FUNC_5(&VAR_2->hugetlb_lock);
}
