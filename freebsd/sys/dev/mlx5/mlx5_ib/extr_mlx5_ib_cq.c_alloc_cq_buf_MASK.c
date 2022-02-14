
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_cq_buf {int cqe_size; int nent; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int *) ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_1, struct mlx5_ib_cq_buf *VAR_2,
   int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->mdev, VAR_3 * VAR_4,
     2 * VAR_0, &VAR_2->buf);
 if (VAR_5)
  return VAR_5;

 VAR_2->cqe_size = VAR_4;
 VAR_2->nent = VAR_3;

 return 0;
}
