
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


typedef int u32 ;
struct TYPE_13__ {int psv_idx; } ;
struct TYPE_9__ {int psv_idx; } ;
struct mlx5_core_sig_ctx {TYPE_6__ psv_wire; TYPE_2__ psv_memory; } ;
struct TYPE_10__ {void* bs_selector; int copy_byte_mask; } ;
struct TYPE_8__ {void* bs_selector; } ;
struct mlx5_bsf_basic {int bsf_size_sbs; void* w_bfs_psv; TYPE_3__ wire; void* m_bfs_psv; TYPE_1__ mem; void* raw_data_size; int check_byte_mask; } ;
struct mlx5_bsf {int w_inl; int m_inl; struct mlx5_bsf_basic basic; } ;
struct TYPE_11__ {int pi_interval; int ref_tag; int app_tag; int bg_type; } ;
struct TYPE_12__ {TYPE_4__ dif; } ;
struct ib_sig_domain {int sig_type; TYPE_5__ sig; } ;
struct ib_sig_attrs {struct ib_sig_domain wire; struct ib_sig_domain mem; int check_mask; } ;
struct ib_mr {int dummy; } ;
struct TYPE_14__ {struct mlx5_core_sig_ctx* sig; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_bsf*,int ,int) ;
 int FUNC_3 (struct ib_sig_domain*,int *) ;
 TYPE_7__* FUNC_4 (struct ib_mr*) ;

__attribute__((used)) static int FUNC_5(struct ib_mr *VAR_4,
   struct ib_sig_attrs *VAR_5,
   struct mlx5_bsf *VAR_6, u32 VAR_7)
{
 struct mlx5_core_sig_ctx *VAR_8 = FUNC_4(VAR_4)->sig;
 struct mlx5_bsf_basic *VAR_9 = &VAR_6->basic;
 struct ib_sig_domain *VAR_10 = &VAR_5->mem;
 struct ib_sig_domain *VAR_11 = &VAR_5->wire;

 FUNC_2(VAR_6, 0, sizeof(*VAR_6));


 VAR_9->bsf_size_sbs = 1 << 7;

 VAR_9->check_byte_mask = VAR_5->check_mask;
 VAR_9->raw_data_size = FUNC_1(VAR_7);


 switch (VAR_5->mem.sig_type) {
 case 129:
  break;
 case 128:
  VAR_9->mem.bs_selector = FUNC_0(VAR_10->sig.dif.pi_interval);
  VAR_9->m_bfs_psv = FUNC_1(VAR_8->psv_memory.psv_idx);
  FUNC_3(VAR_10, &VAR_6->m_inl);
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_5->wire.sig_type) {
 case 129:
  break;
 case 128:
  if (VAR_10->sig.dif.pi_interval == VAR_11->sig.dif.pi_interval &&
      VAR_10->sig_type == VAR_11->sig_type) {

   VAR_9->bsf_size_sbs |= 1 << 4;
   if (VAR_10->sig.dif.bg_type == VAR_11->sig.dif.bg_type)
    VAR_9->wire.copy_byte_mask |= VAR_2;
   if (VAR_10->sig.dif.app_tag == VAR_11->sig.dif.app_tag)
    VAR_9->wire.copy_byte_mask |= VAR_1;
   if (VAR_10->sig.dif.ref_tag == VAR_11->sig.dif.ref_tag)
    VAR_9->wire.copy_byte_mask |= VAR_3;
  } else
   VAR_9->wire.bs_selector = FUNC_0(VAR_11->sig.dif.pi_interval);

  VAR_9->w_bfs_psv = FUNC_1(VAR_8->psv_wire.psv_idx);
  FUNC_3(VAR_11, &VAR_6->w_inl);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
