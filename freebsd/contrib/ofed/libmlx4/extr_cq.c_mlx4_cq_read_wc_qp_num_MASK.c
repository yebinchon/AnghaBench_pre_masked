
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mlx4_cq {TYPE_1__* cqe; } ;
struct ibv_cq_ex {int dummy; } ;
struct TYPE_2__ {int vlan_my_qpn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibv_cq_ex*) ;
 struct mlx4_cq* FUNC_2 (int ) ;

__attribute__((used)) static uint32_t FUNC_3(struct ibv_cq_ex *VAR_1)
{
 struct mlx4_cq *VAR_2 = FUNC_2(FUNC_1(VAR_1));

 return FUNC_0(VAR_2->cqe->vlan_my_qpn) & VAR_0;
}
