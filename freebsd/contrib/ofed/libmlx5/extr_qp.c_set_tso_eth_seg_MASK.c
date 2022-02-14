
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct mlx5_wqe_eth_seg {void* inline_hdr_start; void* inline_hdr_sz; void* mss; } ;
struct mlx5_qp {scalar_t__ max_tso_header; TYPE_1__* ibv_qp; } ;
struct TYPE_5__ {scalar_t__ hdr_sz; scalar_t__ mss; void* hdr; } ;
struct ibv_send_wr {TYPE_2__ tso; } ;
struct TYPE_6__ {int * dbg_fp; } ;
struct TYPE_4__ {int context; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*,void*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int ,char*,scalar_t__,scalar_t__) ;
 void* FUNC_5 (struct mlx5_qp*,int ) ;
 TYPE_3__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int FUNC_8(void **VAR_3, struct ibv_send_wr *VAR_4,
       void *VAR_5, struct mlx5_qp *VAR_6, int *VAR_7)
{
 struct mlx5_wqe_eth_seg *VAR_8 = *VAR_3;
 int VAR_9 = sizeof(VAR_8->inline_hdr_start);
 uint64_t VAR_10, VAR_11, VAR_12;
 void *VAR_13 = VAR_4->tso.hdr;
 FILE *VAR_14 = FUNC_6(VAR_6->ibv_qp->context)->dbg_fp;

 if (FUNC_7(VAR_4->tso.hdr_sz < VAR_2 ||
       VAR_4->tso.hdr_sz > VAR_6->max_tso_header)) {
  FUNC_4(VAR_14, VAR_1,
    "TSO header size should be at least %d and at most %d\n",
    VAR_2,
    VAR_6->max_tso_header);
  return VAR_0;
 }

 VAR_10 = VAR_4->tso.hdr_sz;
 VAR_8->mss = FUNC_1(VAR_4->tso.mss);
 VAR_8->inline_hdr_sz = FUNC_1(VAR_4->tso.hdr_sz);





 VAR_11 = VAR_5 - (void *)VAR_8->inline_hdr_start;
 VAR_12 = FUNC_3(VAR_11, VAR_10);

 FUNC_2(VAR_8->inline_hdr_start, VAR_13, VAR_12);




 *VAR_3 += FUNC_0(VAR_12 - VAR_9, 16) - 16;
 *VAR_7 += FUNC_0(VAR_12 - VAR_9, 16) / 16 - 1;


 if (FUNC_7(VAR_12 < VAR_10)) {
  *VAR_3 = FUNC_5(VAR_6, 0);
  VAR_10 -= VAR_12;
  VAR_13 += VAR_12;
  FUNC_2(*VAR_3, VAR_13, VAR_10);
  *VAR_3 += FUNC_0(VAR_10, 16);
  *VAR_7 += FUNC_0(VAR_10, 16) / 16;
 }

 return 0;
}
