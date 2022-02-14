
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ib_ucontext {int dummy; } ;
struct mlx5_ib_rwq {int rq_num_pas; int page_shift; int wq_sig; int umem; int create_type; int db; int buf_size; scalar_t__ log_page_size; int rq_page_offset; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_ib_create_wq {int flags; int db_addr; scalar_t__ buf_addr; } ;
struct ib_pd {TYPE_1__* uobject; } ;
struct TYPE_2__ {int context; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int*,int*,int*,int *) ;
 int FUNC_5 (struct mlx5_ib_ucontext*,int ,int *) ;
 int FUNC_6 (struct mlx5_ib_dev*,char*,...) ;
 int FUNC_7 (scalar_t__,int,int *) ;
 int FUNC_8 (struct mlx5_ib_dev*,char*) ;
 struct mlx5_ib_ucontext* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct mlx5_ib_dev *VAR_4, struct ib_pd *VAR_5,
     struct mlx5_ib_rwq *VAR_6,
     struct mlx5_ib_create_wq *VAR_7)
{
 struct mlx5_ib_ucontext *VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 u32 VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13;

 if (!VAR_7->buf_addr)
  return -VAR_0;

 VAR_8 = FUNC_9(VAR_5->uobject->context);
 VAR_6->umem = FUNC_2(VAR_5->uobject->context, VAR_7->buf_addr,
          VAR_6->buf_size, 0, 0);
 if (FUNC_0(VAR_6->umem)) {
  FUNC_6(VAR_4, "umem_get failed\n");
  VAR_13 = FUNC_1(VAR_6->umem);
  return VAR_13;
 }

 FUNC_4(VAR_6->umem, VAR_7->buf_addr, &VAR_10, &VAR_9,
      &VAR_12, ((void*)0));
 VAR_13 = FUNC_7(VAR_7->buf_addr, VAR_9,
         &VAR_6->rq_page_offset);
 if (VAR_13) {
  FUNC_8(VAR_4, "bad offset\n");
  goto err_umem;
 }

 VAR_6->rq_num_pas = VAR_12;
 VAR_6->page_shift = VAR_9;
 VAR_6->log_page_size = VAR_9 - VAR_1;
 VAR_6->wq_sig = !!(VAR_7->flags & VAR_2);

 FUNC_6(VAR_4, "addr 0x%llx, size %zd, npages %d, page_shift %d, ncont %d, offset %d\n",
      (unsigned long long)VAR_7->buf_addr, VAR_6->buf_size,
      VAR_10, VAR_9, VAR_12, VAR_11);

 VAR_13 = FUNC_5(VAR_8, VAR_7->db_addr, &VAR_6->db);
 if (VAR_13) {
  FUNC_6(VAR_4, "map failed\n");
  goto err_umem;
 }

 VAR_6->create_type = VAR_3;
 return 0;

err_umem:
 FUNC_3(VAR_6->umem);
 return VAR_13;
}
