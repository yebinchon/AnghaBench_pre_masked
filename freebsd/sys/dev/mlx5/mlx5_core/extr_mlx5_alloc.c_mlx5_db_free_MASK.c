
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* pgdir; } ;
struct mlx5_db {TYPE_2__ u; int index; } ;
struct TYPE_4__ {int pgdir_mutex; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct TYPE_6__ {int list; int fw_page; int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mlx5_core_dev *VAR_1, struct mlx5_db *VAR_2)
{
 FUNC_5(&VAR_1->priv.pgdir_mutex);

 FUNC_0(VAR_2->index, VAR_2->u.pgdir->bitmap);

 if (FUNC_1(VAR_2->u.pgdir->bitmap, VAR_0)) {
  FUNC_4(VAR_2->u.pgdir->fw_page);
  FUNC_3(&VAR_2->u.pgdir->list);
  FUNC_2(VAR_2->u.pgdir);
 }

 FUNC_6(&VAR_1->priv.pgdir_mutex);
}
