
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int virt_addr; } ;
struct mlx5_umr_wr {int mkey; int page_shift; int length; TYPE_1__ target; scalar_t__ pd; int access_flags; } ;
struct mlx5_mkey_seg {void* qpn_mkey7_0; int log2_page_size; void* len; void* start_addr; void* flags_pd; int flags; int status; } ;
struct ib_send_wr {int send_flags; } ;
struct TYPE_4__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_mkey_seg*,int ,int) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (scalar_t__) ;
 struct mlx5_umr_wr* FUNC_6 (struct ib_send_wr*) ;

__attribute__((used)) static void FUNC_7(struct mlx5_mkey_seg *VAR_3, struct ib_send_wr *VAR_4)
{
 struct mlx5_umr_wr *VAR_5 = FUNC_6(VAR_4);

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 if (VAR_4->send_flags & VAR_0) {
  VAR_3->status = VAR_2;
  return;
 }

 VAR_3->flags = FUNC_0(VAR_5->access_flags);
 if (!(VAR_4->send_flags & VAR_1)) {
  if (VAR_5->pd)
   VAR_3->flags_pd = FUNC_1(FUNC_5(VAR_5->pd)->pdn);
  VAR_3->start_addr = FUNC_2(VAR_5->target.virt_addr);
 }
 VAR_3->len = FUNC_2(VAR_5->length);
 VAR_3->log2_page_size = VAR_5->page_shift;
 VAR_3->qpn_mkey7_0 = FUNC_1(0xffffff00 |
           FUNC_4(VAR_5->mkey));
}
