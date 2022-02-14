
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_device {int page_size; } ;
struct mlx5_cqe64 {int op_own; } ;
struct mlx5_cq {int dummy; } ;
struct TYPE_2__ {int device; } ;
struct mlx5_context {TYPE_1__ ibv_ctx; } ;
struct mlx5_buf {struct mlx5_cqe64* buf; } ;
typedef enum mlx5_alloc_type { ____Placeholder_mlx5_alloc_type } mlx5_alloc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct mlx5_cqe64*,int ,int) ;
 int FUNC_2 (struct mlx5_context*,struct mlx5_buf*,int ,int ,int,int ) ;
 int FUNC_3 (int ,int*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 struct mlx5_device* FUNC_5 (int ) ;

int FUNC_6(struct mlx5_context *VAR_4, struct mlx5_cq *VAR_5,
        struct mlx5_buf *VAR_6, int VAR_7, int VAR_8)
{
 struct mlx5_cqe64 *VAR_9;
 int VAR_10;
 struct mlx5_device *VAR_11 = FUNC_5(VAR_4->ibv_ctx.device);
 int VAR_12;
 enum mlx5_alloc_type VAR_13;
 enum mlx5_alloc_type VAR_14 = VAR_0;

 if (FUNC_4("HUGE_CQ"))
  VAR_14 = VAR_1;

 FUNC_3(VAR_3, &VAR_13, VAR_14);

 VAR_12 = FUNC_2(VAR_4, VAR_6,
          FUNC_0(VAR_7 * VAR_8, VAR_11->page_size),
          VAR_11->page_size,
          VAR_13,
          VAR_3);

 if (VAR_12)
  return -1;

 FUNC_1(VAR_6->buf, 0, VAR_7 * VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10) {
  VAR_9 = VAR_6->buf + VAR_10 * VAR_8;
  VAR_9 += VAR_8 == 128 ? 1 : 0;
  VAR_9->op_own = VAR_2 << 4;
 }

 return 0;
}
