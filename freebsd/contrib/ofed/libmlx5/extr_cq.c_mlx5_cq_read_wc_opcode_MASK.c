
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_cq {int umr_opcode; TYPE_1__* cqe64; } ;
struct mlx5_context {int dbg_fp; } ;
struct ibv_cq_ex {int context; } ;
typedef enum ibv_wc_opcode { ____Placeholder_ibv_wc_opcode } ibv_wc_opcode ;
struct TYPE_2__ {int sop_drop_qpn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibv_cq_ex*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct mlx5_cq* FUNC_4 (int ) ;
 struct mlx5_context* FUNC_5 (int ) ;

__attribute__((used)) static inline enum ibv_wc_opcode FUNC_6(struct ibv_cq_ex *VAR_9)
{
 struct mlx5_cq *VAR_10 = FUNC_4(FUNC_1(VAR_9));

 switch (FUNC_3(VAR_10->cqe64)) {
 case 138:
  return VAR_5;
 case 141:
 case 140:
 case 139:
  return VAR_4;
 case 142:
  switch (FUNC_0(VAR_10->cqe64->sop_drop_qpn) >> 24) {
  case 133:
  case 134:
   return VAR_3;
  case 131:
  case 132:
  case 130:
   return VAR_6;
  case 135:
   return VAR_2;
  case 137:
   return VAR_0;
  case 136:
   return VAR_1;
  case 128:
   return VAR_10->umr_opcode;
  case 129:
   return VAR_7;
  }
 }
 return 0;
}
