
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_ib_resize_cq {int buf_addr; } ;
struct mlx4_ib_dev {int dummy; } ;
struct mlx4_ib_cq {TYPE_2__* resize_buf; scalar_t__ resize_umem; TYPE_1__* umem; } ;
struct ib_udata {int dummy; } ;
struct TYPE_5__ {int cqe; int buf; } ;
struct TYPE_4__ {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlx4_ib_resize_cq*,struct ib_udata*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx4_ib_dev*,int ,int *,scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mlx4_ib_dev *VAR_4, struct mlx4_ib_cq *VAR_5,
       int VAR_6, struct ib_udata *VAR_7)
{
 struct mlx4_ib_resize_cq VAR_8;
 int VAR_9;

 if (VAR_5->resize_umem)
  return -VAR_0;

 if (FUNC_0(&VAR_8, VAR_7, sizeof VAR_8))
  return -VAR_1;

 VAR_5->resize_buf = FUNC_2(sizeof *VAR_5->resize_buf, VAR_3);
 if (!VAR_5->resize_buf)
  return -VAR_2;

 VAR_9 = FUNC_3(VAR_4, VAR_5->umem->context, &VAR_5->resize_buf->buf,
      &VAR_5->resize_umem, VAR_8.buf_addr, VAR_6);
 if (VAR_9) {
  FUNC_1(VAR_5->resize_buf);
  VAR_5->resize_buf = ((void*)0);
  return VAR_9;
 }

 VAR_5->resize_buf->cqe = VAR_6 - 1;

 return 0;
}
