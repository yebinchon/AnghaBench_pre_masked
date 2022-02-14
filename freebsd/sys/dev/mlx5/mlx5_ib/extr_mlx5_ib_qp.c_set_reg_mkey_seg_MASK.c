
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_mkey_seg {int flags; void* xlt_oct_size; void* len; void* start_addr; void* flags_pd; void* qpn_mkey7_0; int log2_page_size; } ;
struct TYPE_2__ {int length; int iova; int page_size; } ;
struct mlx5_ib_mr {int access_mode; TYPE_1__ ibmr; int ndescs; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5_mkey_seg*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct mlx5_mkey_seg *VAR_3,
        struct mlx5_ib_mr *VAR_4,
        u32 VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_4->ndescs, 8) >> 1;

 FUNC_5(VAR_3, 0, sizeof(*VAR_3));

 if (VAR_4->access_mode == VAR_1)
  VAR_3->log2_page_size = FUNC_4(VAR_4->ibmr.page_size);
 else if (VAR_4->access_mode == VAR_0)

  VAR_7 *= 2;

 VAR_3->flags = FUNC_3(VAR_6) | VAR_4->access_mode;
 VAR_3->qpn_mkey7_0 = FUNC_1((VAR_5 & 0xff) | 0xffffff00);
 VAR_3->flags_pd = FUNC_1(VAR_2);
 VAR_3->start_addr = FUNC_2(VAR_4->ibmr.iova);
 VAR_3->len = FUNC_2(VAR_4->ibmr.length);
 VAR_3->xlt_oct_size = FUNC_1(VAR_7);
}
