
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct TYPE_2__ {void* virt_addr; } ;
struct mlx5_umr_wr {int access_flags; struct ib_pd* pd; void* length; TYPE_1__ target; } ;
struct ib_sge {int dummy; } ;
struct ib_send_wr {scalar_t__ send_flags; } ;
struct ib_pd {int dummy; } ;


 int FUNC_0 (struct ib_pd*,struct ib_send_wr*,struct ib_sge*,void*,int,int ,int) ;
 struct mlx5_umr_wr* FUNC_1 (struct ib_send_wr*) ;

__attribute__((used)) static void FUNC_2(struct ib_pd *VAR_0, struct ib_send_wr *VAR_1,
        struct ib_sge *VAR_2, u64 VAR_3, int VAR_4, u32 VAR_5,
        int VAR_6, u64 VAR_7, u64 VAR_8,
        int VAR_9)
{
 struct mlx5_umr_wr *VAR_10 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_1->send_flags = 0;

 VAR_10->target.virt_addr = VAR_7;
 VAR_10->length = VAR_8;
 VAR_10->access_flags = VAR_9;
 VAR_10->pd = VAR_0;
}
