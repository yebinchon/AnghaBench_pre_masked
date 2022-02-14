
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5_mkey_seg {int flags; void* bsfs_octo_size; void* xlt_oct_size; int len; void* flags_pd; void* qpn_mkey7_0; } ;
struct ib_sig_handover_wr {int access_flags; struct ib_mr* sig_mr; } ;
struct ib_mr {int rkey; } ;
struct TYPE_4__ {TYPE_1__* sig; } ;
struct TYPE_3__ {int sigerr_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5_mkey_seg*,int ,int) ;
 TYPE_2__* FUNC_6 (struct ib_mr*) ;

__attribute__((used)) static void FUNC_7(struct mlx5_mkey_seg *VAR_4,
     struct ib_sig_handover_wr *VAR_5, u32 VAR_6,
     u32 VAR_7, u32 VAR_8)
{
 struct ib_mr *VAR_9 = VAR_5->sig_mr;
 u32 VAR_10 = VAR_9->rkey;
 u8 VAR_11 = FUNC_6(VAR_9)->sig->sigerr_count & 1;

 FUNC_5(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->flags = FUNC_4(VAR_5->access_flags) |
       VAR_0;
 VAR_4->qpn_mkey7_0 = FUNC_1((VAR_10 & 0xff) | 0xffffff00);
 VAR_4->flags_pd = FUNC_1(VAR_3 | VAR_11 << 26 |
        VAR_1 | VAR_8);
 VAR_4->len = FUNC_2(VAR_7);
 VAR_4->xlt_oct_size = FUNC_1(FUNC_0(FUNC_3(VAR_6)));
 VAR_4->bsfs_octo_size = FUNC_1(VAR_2);
}
