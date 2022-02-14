
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
 int VAR_1 ;
 struct ibv_cq_ex* FUNC_0 (struct ibv_context*,struct ibv_cq_init_attr_ex*,int ,int *) ;
 int VAR_2 ;
 struct ibv_cq* FUNC_1 (struct ibv_cq_ex*) ;

struct ibv_cq *FUNC_2(struct ibv_context *VAR_3, int VAR_4,
         struct ibv_comp_channel *VAR_5,
         int VAR_6)
{
 struct ibv_cq_ex *VAR_7;
 struct ibv_cq_init_attr_ex VAR_8 = {.cqe = VAR_4, .channel = VAR_5,
      .comp_vector = VAR_6,
      .wc_flags = VAR_1};

 if (VAR_4 <= 0) {
  VAR_2 = VAR_0;
  return ((void*)0);
 }

 VAR_7 = FUNC_0(VAR_3, &VAR_8, 0, ((void*)0));
 return VAR_7 ? FUNC_1(VAR_7) : ((void*)0);
}
