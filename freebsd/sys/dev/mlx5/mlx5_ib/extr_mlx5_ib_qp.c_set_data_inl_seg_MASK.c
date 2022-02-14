
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_wqe_inline_seg {int byte_count; } ;
struct TYPE_3__ {void* qend; } ;
struct mlx5_ib_qp {int max_inline_data; TYPE_1__ sq; } ;
struct ib_send_wr {int num_sge; TYPE_2__* sg_list; } ;
struct TYPE_4__ {int length; scalar_t__ addr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,void*,int) ;
 void* FUNC_3 (struct mlx5_ib_qp*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mlx5_ib_qp *VAR_2, struct ib_send_wr *VAR_3,
       void *VAR_4, int *VAR_5)
{
 struct mlx5_wqe_inline_seg *VAR_6;
 void *VAR_7 = VAR_2->sq.qend;
 void *VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_6 = VAR_4;
 VAR_4 += sizeof(*VAR_6);
 for (VAR_12 = 0; VAR_12 < VAR_3->num_sge; VAR_12++) {
  VAR_8 = (void *)(unsigned long)(VAR_3->sg_list[VAR_12].addr);
  VAR_11 = VAR_3->sg_list[VAR_12].length;
  VAR_9 += VAR_11;

  if (FUNC_4(VAR_9 > VAR_2->max_inline_data))
   return -VAR_0;

  if (FUNC_4(VAR_4 + VAR_11 > VAR_7)) {
   VAR_10 = VAR_7 - VAR_4;
   FUNC_2(VAR_4, VAR_8, VAR_10);
   VAR_8 += VAR_10;
   VAR_11 -= VAR_10;
   VAR_4 = FUNC_3(VAR_2, 0);
  }
  FUNC_2(VAR_4, VAR_8, VAR_11);
  VAR_4 += VAR_11;
 }

 VAR_6->byte_count = FUNC_1(VAR_9 | VAR_1);

 *VAR_5 = FUNC_0(VAR_9 + sizeof(VAR_6->byte_count), 16) / 16;

 return 0;
}
