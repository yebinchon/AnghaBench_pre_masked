
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_cq_init_attr_ex {int cqe; int comp_vector; int wc_flags; struct ibv_comp_channel* channel; } ;
struct ibv_cq_ex {int dummy; } ;
struct ibv_cq {int dummy; } ;
struct ibv_context {int dummy; } ;
struct ibv_comp_channel {int dummy; } ;


 int VAR_0 ;
 struct ibv_cq_ex* FUNC_0 (struct ibv_context*,struct ibv_cq_init_attr_ex*,int ) ;
 struct ibv_cq* FUNC_1 (struct ibv_cq_ex*) ;

struct ibv_cq *FUNC_2(struct ibv_context *VAR_1, int VAR_2,
         struct ibv_comp_channel *VAR_3,
         int VAR_4)
{
 struct ibv_cq_ex *VAR_5;
 struct ibv_cq_init_attr_ex VAR_6 = {.cqe = VAR_2, .channel = VAR_3,
           .comp_vector = VAR_4,
           .wc_flags = VAR_0};

 VAR_5 = FUNC_0(VAR_1, &VAR_6, 0);
 return VAR_5 ? FUNC_1(VAR_5) : ((void*)0);
}
