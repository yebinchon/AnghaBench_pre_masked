
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* db; } ;
struct TYPE_7__ {int page_shift; int npages; } ;
struct mlx4_hwq_resources {TYPE_1__ db; TYPE_3__ buf; int mtt; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int,int,TYPE_3__*,int ) ;
 int FUNC_1 (struct mlx4_dev*,int,TYPE_3__*) ;
 int FUNC_2 (struct mlx4_dev*,int *,TYPE_3__*,int ) ;
 int FUNC_3 (struct mlx4_dev*,TYPE_1__*,int,int ) ;
 int FUNC_4 (struct mlx4_dev*,TYPE_1__*) ;
 int FUNC_5 (struct mlx4_dev*,int *) ;
 int FUNC_6 (struct mlx4_dev*,int ,int ,int *) ;

int FUNC_7(struct mlx4_dev *VAR_1, struct mlx4_hwq_resources *VAR_2,
         int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, &VAR_2->db, 1, VAR_0);
 if (VAR_5)
  return VAR_5;

 *VAR_2->db.db = 0;

 VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4, &VAR_2->buf, VAR_0);
 if (VAR_5)
  goto err_db;

 VAR_5 = FUNC_6(VAR_1, VAR_2->buf.npages, VAR_2->buf.page_shift,
       &VAR_2->mtt);
 if (VAR_5)
  goto err_buf;

 VAR_5 = FUNC_2(VAR_1, &VAR_2->mtt, &VAR_2->buf, VAR_0);
 if (VAR_5)
  goto err_mtt;

 return 0;

err_mtt:
 FUNC_5(VAR_1, &VAR_2->mtt);
err_buf:
 FUNC_1(VAR_1, VAR_3, &VAR_2->buf);
err_db:
 FUNC_4(VAR_1, &VAR_2->db);

 return VAR_5;
}
