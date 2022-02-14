
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ibv_gid {int dummy; } ibv_gid ;
typedef int uint16_t ;
struct ibv_qp_1_0 {int real_qp; } ;


 int FUNC_0 (int ,union ibv_gid*,int ) ;

int FUNC_1(struct ibv_qp_1_0 *VAR_0, union ibv_gid *VAR_1, uint16_t VAR_2)
{
 return FUNC_0(VAR_0->real_qp, VAR_1, VAR_2);
}
