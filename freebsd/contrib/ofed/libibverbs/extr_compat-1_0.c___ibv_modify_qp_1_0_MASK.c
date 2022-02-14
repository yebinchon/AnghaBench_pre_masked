
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_qp_attr {int dummy; } ;
struct ibv_qp_1_0 {int real_qp; } ;


 int FUNC_0 (int ,struct ibv_qp_attr*,int) ;

int FUNC_1(struct ibv_qp_1_0 *VAR_0, struct ibv_qp_attr *VAR_1,
   int VAR_2)
{
 return FUNC_0(VAR_0->real_qp, VAR_1, VAR_2);
}
