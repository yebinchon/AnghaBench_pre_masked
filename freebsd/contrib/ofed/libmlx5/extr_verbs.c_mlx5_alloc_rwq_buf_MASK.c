
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int wqe_cnt; int wrid; } ;
struct mlx5_rwq {TYPE_1__ rq; int buf_size; int buf; } ;
struct ibv_context {int device; } ;
typedef enum mlx5_alloc_type { ____Placeholder_mlx5_alloc_type } mlx5_alloc_type ;
struct TYPE_4__ {int page_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ,int ,int,int ) ;
 int FUNC_4 (struct ibv_context*) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ibv_context *VAR_4,
         struct mlx5_rwq *VAR_5,
         int VAR_6)
{
 int VAR_7;
 enum mlx5_alloc_type VAR_8 = VAR_1;

 VAR_5->rq.wrid = FUNC_2(VAR_5->rq.wqe_cnt * sizeof(uint64_t));
 if (!VAR_5->rq.wrid) {
  VAR_3 = VAR_0;
  return -1;
 }

 VAR_7 = FUNC_3(FUNC_4(VAR_4), &VAR_5->buf,
          FUNC_0(VAR_5->buf_size, FUNC_5
          (VAR_4->device)->page_size),
          FUNC_5(VAR_4->device)->page_size,
          VAR_8,
          VAR_2);

 if (VAR_7) {
  FUNC_1(VAR_5->rq.wrid);
  VAR_3 = VAR_0;
  return -1;
 }

 return 0;
}
