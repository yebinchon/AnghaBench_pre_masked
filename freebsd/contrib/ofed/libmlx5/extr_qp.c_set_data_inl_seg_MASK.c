
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_wqe_inline_seg {int byte_count; } ;
struct mlx5_sg_copy_ptr {int offset; int index; } ;
struct TYPE_3__ {void* qend; } ;
struct mlx5_qp {int max_inline_data; TYPE_1__ sq; } ;
struct ibv_send_wr {int num_sge; TYPE_2__* sg_list; } ;
struct TYPE_4__ {int length; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (void*,void*,int) ;
 void* FUNC_4 (struct mlx5_qp*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct mlx5_qp *VAR_2, struct ibv_send_wr *VAR_3,
       void *VAR_4, int *VAR_5,
       struct mlx5_sg_copy_ptr *VAR_6)
{
 struct mlx5_wqe_inline_seg *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 void *VAR_12 = VAR_2->sq.qend;
 int VAR_13;
 int VAR_14 = VAR_6->offset;

 VAR_7 = VAR_4;
 VAR_4 += sizeof *VAR_7;
 for (VAR_10 = VAR_6->index; VAR_10 < VAR_3->num_sge; ++VAR_10) {
  VAR_8 = (void *) (unsigned long)(VAR_3->sg_list[VAR_10].addr + VAR_14);
  VAR_9 = VAR_3->sg_list[VAR_10].length - VAR_14;
  VAR_11 += VAR_9;
  VAR_14 = 0;

  if (FUNC_5(VAR_11 > VAR_2->max_inline_data))
   return VAR_0;

  if (FUNC_5(VAR_4 + VAR_9 > VAR_12)) {
   VAR_13 = VAR_12 - VAR_4;
   FUNC_3(VAR_4, VAR_8, VAR_13);
   VAR_8 += VAR_13;
   VAR_9 -= VAR_13;
   VAR_4 = FUNC_4(VAR_2, 0);
  }
  FUNC_3(VAR_4, VAR_8, VAR_9);
  VAR_4 += VAR_9;
 }

 if (FUNC_2(VAR_11)) {
  VAR_7->byte_count = FUNC_1(VAR_11 | VAR_1);
  *VAR_5 = FUNC_0(VAR_11 + sizeof VAR_7->byte_count, 16) / 16;
 } else
  *VAR_5 = 0;

 return 0;
}
