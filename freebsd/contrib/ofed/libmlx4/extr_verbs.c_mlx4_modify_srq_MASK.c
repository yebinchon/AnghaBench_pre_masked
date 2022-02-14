
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_srq_attr {int dummy; } ;
struct ibv_srq {int dummy; } ;
struct ibv_modify_srq {int dummy; } ;


 int FUNC_0 (struct ibv_srq*,struct ibv_srq_attr*,int,struct ibv_modify_srq*,int) ;

int FUNC_1(struct ibv_srq *VAR_0,
       struct ibv_srq_attr *VAR_1,
       int VAR_2)
{
 struct ibv_modify_srq VAR_3;

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3, sizeof VAR_3);
}
