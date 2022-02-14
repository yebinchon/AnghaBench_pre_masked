
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_srq_init_attr_ex {int comp_mask; scalar_t__ srq_type; int pd; } ;
struct ibv_srq_init_attr {int dummy; } ;
struct ibv_srq {int dummy; } ;
struct ibv_context {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ibv_srq* FUNC_0 (int ,struct ibv_srq_init_attr*) ;
 struct ibv_srq* FUNC_1 (struct ibv_context*,struct ibv_srq_init_attr_ex*) ;

struct ibv_srq *FUNC_2(struct ibv_context *VAR_3,
       struct ibv_srq_init_attr_ex *VAR_4)
{
 if (!(VAR_4->comp_mask & VAR_2) ||
     (VAR_4->srq_type == VAR_0))
  return FUNC_0(VAR_4->pd, (struct ibv_srq_init_attr *) VAR_4);
 else if (VAR_4->srq_type == VAR_1)
  return FUNC_1(VAR_3, VAR_4);

 return ((void*)0);
}
