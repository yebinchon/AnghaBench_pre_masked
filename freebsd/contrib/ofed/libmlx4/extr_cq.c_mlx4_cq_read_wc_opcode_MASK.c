
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_cq {TYPE_1__* cqe; } ;
struct ibv_cq_ex {int dummy; } ;
typedef enum ibv_wc_opcode { ____Placeholder_ibv_wc_opcode } ibv_wc_opcode ;
struct TYPE_2__ {int owner_sr_opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ibv_cq_ex*) ;
 struct mlx4_cq* FUNC_1 (int ) ;

__attribute__((used)) static enum ibv_wc_opcode FUNC_2(struct ibv_cq_ex *VAR_11)
{
 struct mlx4_cq *VAR_12 = FUNC_1(FUNC_0(VAR_11));

 if (VAR_12->cqe->owner_sr_opcode & VAR_9) {
  switch (VAR_12->cqe->owner_sr_opcode & VAR_10) {
  case 135:
  case 136:
   return VAR_5;
  case 132:
  case 133:
  case 134:
   return VAR_8;
  case 137:
   return VAR_4;
  case 141:
   return VAR_1;
  case 140:
   return VAR_2;
  case 138:
   return VAR_3;
  case 139:
   return VAR_0;
  }
 } else {
  switch (VAR_12->cqe->owner_sr_opcode & VAR_10) {
  case 131:
   return VAR_7;
  case 128:
  case 129:
  case 130:
   return VAR_6;
  }
 }

 return 0;
}
