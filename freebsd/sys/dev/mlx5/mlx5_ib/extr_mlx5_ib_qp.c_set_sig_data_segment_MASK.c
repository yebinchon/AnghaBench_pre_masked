
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx5_stride_block_entry {void* stride; void* va; void* key; void* bcount; } ;
struct mlx5_stride_block_ctrl_seg {void* num_entries; void* repeat_count; void* op; void* bcount_per_cycle; } ;
struct mlx5_klm {void* va; void* key; void* bcount; } ;
struct TYPE_14__ {void* qend; } ;
struct mlx5_ib_qp {TYPE_7__ sq; } ;
struct mlx5_bsf {int dummy; } ;
struct TYPE_9__ {TYPE_1__* sg_list; } ;
struct ib_sig_handover_wr {TYPE_3__* prot; TYPE_2__ wr; struct ib_mr* sig_mr; struct ib_sig_attrs* sig_attrs; } ;
struct TYPE_11__ {int pi_interval; } ;
struct TYPE_12__ {TYPE_4__ dif; } ;
struct TYPE_13__ {int sig_type; TYPE_5__ sig; } ;
struct ib_sig_attrs {TYPE_6__ mem; } ;
struct ib_mr {int dummy; } ;
struct TYPE_10__ {int lkey; scalar_t__ addr; int length; } ;
struct TYPE_8__ {int length; int lkey; scalar_t__ addr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (struct mlx5_ib_qp*,int ) ;
 int FUNC_5 (struct ib_mr*,struct ib_sig_attrs*,struct mlx5_bsf*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ib_sig_handover_wr *VAR_2,
    struct mlx5_ib_qp *VAR_3, void **VAR_4, int *VAR_5)
{
 struct ib_sig_attrs *VAR_6 = VAR_2->sig_attrs;
 struct ib_mr *VAR_7 = VAR_2->sig_mr;
 struct mlx5_bsf *VAR_8;
 u32 VAR_9 = VAR_2->wr.sg_list->length;
 u32 VAR_10 = VAR_2->wr.sg_list->lkey;
 u64 VAR_11 = VAR_2->wr.sg_list->addr;
 int VAR_12;
 int VAR_13;

 if (!VAR_2->prot ||
     (VAR_10 == VAR_2->prot->lkey &&
      VAR_11 == VAR_2->prot->addr &&
      VAR_9 == VAR_2->prot->length)) {
  struct mlx5_klm *VAR_14 = *VAR_4;

  VAR_14->bcount = FUNC_2(VAR_9);
  VAR_14->key = FUNC_2(VAR_10);
  VAR_14->va = FUNC_3(VAR_11);
  VAR_13 = FUNC_0(sizeof(*VAR_14), 64);
 } else {
  struct mlx5_stride_block_ctrl_seg *VAR_15;
  struct mlx5_stride_block_entry *VAR_16;
  struct mlx5_stride_block_entry *VAR_17;
  u32 VAR_18 = VAR_2->prot->lkey;
  u64 VAR_19 = VAR_2->prot->addr;
  u16 VAR_20 = VAR_6->mem.sig.dif.pi_interval;
  int VAR_21;

  VAR_15 = *VAR_4;
  VAR_16 = (void *)VAR_15 + sizeof(*VAR_15);
  VAR_17 = (void *)VAR_16 + sizeof(*VAR_16);

  VAR_21 = FUNC_7(VAR_6->mem.sig_type);
  if (!VAR_21) {
   FUNC_6("Bad block size given: %u\n", VAR_20);
   return -VAR_0;
  }
  VAR_15->bcount_per_cycle = FUNC_2(VAR_20 +
           VAR_21);
  VAR_15->op = FUNC_2(VAR_1);
  VAR_15->repeat_count = FUNC_2(VAR_9 / VAR_20);
  VAR_15->num_entries = FUNC_1(2);

  VAR_16->bcount = FUNC_1(VAR_20);
  VAR_16->key = FUNC_2(VAR_10);
  VAR_16->va = FUNC_3(VAR_11);
  VAR_16->stride = FUNC_1(VAR_20);

  VAR_17->bcount = FUNC_1(VAR_21);
  VAR_17->key = FUNC_2(VAR_18);
  VAR_17->va = FUNC_3(VAR_19);
  VAR_17->stride = FUNC_1(VAR_21);

  VAR_13 = FUNC_0(sizeof(*VAR_15) + sizeof(*VAR_16) +
     sizeof(*VAR_17), 64);
 }

 *VAR_4 += VAR_13;
 *VAR_5 += VAR_13 / 16;
 if (FUNC_8((*VAR_4 == VAR_3->sq.qend)))
  *VAR_4 = FUNC_4(VAR_3, 0);

 VAR_8 = *VAR_4;
 VAR_12 = FUNC_5(VAR_7, VAR_6, VAR_8, VAR_9);
 if (VAR_12)
  return -VAR_0;

 *VAR_4 += sizeof(*VAR_8);
 *VAR_5 += sizeof(*VAR_8) / 16;
 if (FUNC_8((*VAR_4 == VAR_3->sq.qend)))
  *VAR_4 = FUNC_4(VAR_3, 0);

 return 0;
}
