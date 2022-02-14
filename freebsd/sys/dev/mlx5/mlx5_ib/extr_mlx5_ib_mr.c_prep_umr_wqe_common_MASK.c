
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlx5_umr_wr {int npages; int page_shift; int mkey; } ;
struct TYPE_4__ {TYPE_1__* pd; } ;
struct mlx5_ib_dev {TYPE_2__ umrc; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct ib_send_wr {int num_sge; int opcode; struct ib_sge* sg_list; int * next; } ;
struct ib_pd {int device; } ;
struct TYPE_3__ {int local_dma_lkey; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct mlx5_ib_dev* FUNC_1 (int ) ;
 struct mlx5_umr_wr* FUNC_2 (struct ib_send_wr*) ;

__attribute__((used)) static void FUNC_3(struct ib_pd *VAR_1, struct ib_send_wr *VAR_2,
    struct ib_sge *VAR_3, u64 VAR_4, int VAR_5, u32 VAR_6,
    int VAR_7)
{
 struct mlx5_ib_dev *VAR_8 = FUNC_1(VAR_1->device);
 struct mlx5_umr_wr *VAR_9 = FUNC_2(VAR_2);

 VAR_3->addr = VAR_4;
 VAR_3->length = FUNC_0(sizeof(u64) * VAR_5, 64);
 VAR_3->lkey = VAR_8->umrc.pd->local_dma_lkey;

 VAR_2->next = ((void*)0);
 VAR_2->sg_list = VAR_3;
 if (VAR_5)
  VAR_2->num_sge = 1;
 else
  VAR_2->num_sge = 0;

 VAR_2->opcode = VAR_0;

 VAR_9->npages = VAR_5;
 VAR_9->page_shift = VAR_7;
 VAR_9->mkey = VAR_6;
}
