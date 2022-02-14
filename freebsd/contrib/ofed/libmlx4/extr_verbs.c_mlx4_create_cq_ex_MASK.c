
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_cq_init_attr_ex {int flags; int comp_mask; int wc_flags; int comp_vector; int channel; int cqe; } ;
struct ibv_cq_ex {int dummy; } ;
struct ibv_context {int dummy; } ;


 int VAR_0 ;
 struct ibv_cq_ex* FUNC_0 (struct ibv_context*,struct ibv_cq_init_attr_ex*,int ) ;

struct ibv_cq_ex *FUNC_1(struct ibv_context *VAR_1,
        struct ibv_cq_init_attr_ex *VAR_2)
{




 struct ibv_cq_init_attr_ex VAR_3 = {.cqe = VAR_2->cqe,
      .channel = VAR_2->channel,
      .comp_vector = VAR_2->comp_vector,
      .wc_flags = VAR_2->wc_flags,
      .comp_mask = VAR_2->comp_mask,
      .flags = VAR_2->flags};

 return FUNC_0(VAR_1, &VAR_3, VAR_0);
}
