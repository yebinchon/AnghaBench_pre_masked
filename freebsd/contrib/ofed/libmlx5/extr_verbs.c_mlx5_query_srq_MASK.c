
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_srq_attr {int dummy; } ;
struct ibv_srq {int dummy; } ;
struct ibv_query_srq {int dummy; } ;


 int FUNC_0 (struct ibv_srq*,struct ibv_srq_attr*,struct ibv_query_srq*,int) ;

int FUNC_1(struct ibv_srq *VAR_0,
      struct ibv_srq_attr *VAR_1)
{
 struct ibv_query_srq VAR_2;

 return FUNC_0(VAR_0, VAR_1, &VAR_2, sizeof VAR_2);
}
