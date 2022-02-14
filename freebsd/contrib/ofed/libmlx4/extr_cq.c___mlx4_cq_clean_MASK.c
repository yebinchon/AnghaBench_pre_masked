
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int srq_num; } ;
struct mlx4_srq {TYPE_1__ verbs_srq; scalar_t__ ext_srq; } ;
struct mlx4_cqe {int owner_sr_opcode; int wqe_index; int vlan_my_qpn; int g_mlpath_rqpn; } ;
struct TYPE_4__ {int cqe; } ;
struct mlx4_cq {int cqe_size; int cons_index; TYPE_2__ ibv_cq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mlx4_cqe* FUNC_2 (struct mlx4_cq*,int) ;
 scalar_t__ FUNC_3 (struct mlx4_cq*,int) ;
 int FUNC_4 (struct mlx4_cqe*,struct mlx4_cqe*,int) ;
 int FUNC_5 (struct mlx4_srq*,int ) ;
 int FUNC_6 (struct mlx4_cq*) ;
 int FUNC_7 () ;

void FUNC_8(struct mlx4_cq *VAR_3, uint32_t VAR_4, struct mlx4_srq *VAR_5)
{
 struct mlx4_cqe *VAR_6, *VAR_7;
 uint32_t VAR_8;
 uint8_t VAR_9;
 int VAR_10 = 0;
 int VAR_11 = VAR_3->cqe_size == 64 ? 1 : 0;
 for (VAR_8 = VAR_3->cons_index; FUNC_3(VAR_3, VAR_8); ++VAR_8)
  if (VAR_8 == VAR_3->cons_index + VAR_3->ibv_cq.cqe)
   break;





 while ((int) --VAR_8 - (int) VAR_3->cons_index >= 0) {
  VAR_6 = FUNC_2(VAR_3, VAR_8 & VAR_3->ibv_cq.cqe);
  VAR_6 += VAR_11;
  if (VAR_5 && VAR_5->ext_srq &&
      (FUNC_1(VAR_6->g_mlpath_rqpn) & VAR_2) == VAR_5->verbs_srq.srq_num &&
      !(VAR_6->owner_sr_opcode & VAR_0)) {
   FUNC_5(VAR_5, FUNC_0(VAR_6->wqe_index));
   ++VAR_10;
  } else if ((FUNC_1(VAR_6->vlan_my_qpn) & VAR_2) == VAR_4) {
   if (VAR_5 && !(VAR_6->owner_sr_opcode & VAR_0))
    FUNC_5(VAR_5, FUNC_0(VAR_6->wqe_index));
   ++VAR_10;
  } else if (VAR_10) {
   VAR_7 = FUNC_2(VAR_3, (VAR_8 + VAR_10) & VAR_3->ibv_cq.cqe);
   VAR_7 += VAR_11;
   VAR_9 = VAR_7->owner_sr_opcode & VAR_1;
   FUNC_4(VAR_7, VAR_6, sizeof *VAR_6);
   VAR_7->owner_sr_opcode = VAR_9 |
    (VAR_7->owner_sr_opcode & ~VAR_1);
  }
 }

 if (VAR_10) {
  VAR_3->cons_index += VAR_10;




  FUNC_7();
  FUNC_6(VAR_3);
 }
}
