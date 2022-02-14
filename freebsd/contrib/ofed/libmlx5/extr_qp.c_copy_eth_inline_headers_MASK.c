
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mlx5_wqe_eth_seg {int inline_hdr_start; int inline_hdr_sz; } ;
struct mlx5_sg_copy_ptr {int index; int offset; } ;
struct ibv_send_wr {int num_sge; TYPE_1__* sg_list; } ;
struct ibv_qp {int context; } ;
struct TYPE_4__ {int * dbg_fp; } ;
struct TYPE_3__ {int length; scalar_t__ addr; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,void*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ,char*,...) ;
 TYPE_2__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline int FUNC_7(struct ibv_qp *VAR_3,
       struct ibv_send_wr *VAR_4,
       struct mlx5_wqe_eth_seg *VAR_5,
       struct mlx5_sg_copy_ptr *VAR_6)
{
 uint32_t VAR_7 = VAR_2;
 int VAR_8 = 0;
 int VAR_9 = 0;
 FILE *VAR_10 = FUNC_5(VAR_3->context)->dbg_fp;

 if (FUNC_6(VAR_4->num_sge < 1)) {
  FUNC_4(VAR_10, VAR_1, "illegal num_sge: %d, minimum is 1\n",
    VAR_4->num_sge);
  return VAR_0;
 }

 if (FUNC_1(VAR_4->sg_list[0].length >= VAR_2)) {
  VAR_8 = VAR_2;
  FUNC_2(VAR_5->inline_hdr_start,
         (void *)(uintptr_t)VAR_4->sg_list[0].addr,
         VAR_8);
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_4->num_sge && VAR_7 > 0; ++VAR_9) {
   VAR_8 = FUNC_3(VAR_4->sg_list[VAR_9].length,
      VAR_7);
   FUNC_2(VAR_5->inline_hdr_start +
          (VAR_2 - VAR_7),
          (void *)(uintptr_t)VAR_4->sg_list[VAR_9].addr,
          VAR_8);
   VAR_7 -= VAR_8;
  }
  if (FUNC_6(VAR_7)) {
   FUNC_4(VAR_10, VAR_1, "Ethernet headers < 16 bytes\n");
   return VAR_0;
  }
  --VAR_9;
 }


 VAR_5->inline_hdr_sz = FUNC_0(VAR_2);




 if (FUNC_6(VAR_4->sg_list[VAR_9].length == VAR_8)) {
  ++VAR_9;
  VAR_8 = 0;
 }

 VAR_6->index = VAR_9;
 VAR_6->offset = VAR_8;

 return 0;
}
