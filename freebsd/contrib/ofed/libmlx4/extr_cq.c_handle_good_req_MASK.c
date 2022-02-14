
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cqe {int owner_sr_opcode; int byte_cnt; } ;
struct ibv_wc {int byte_len; void* opcode; scalar_t__ wc_flags; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct ibv_wc *VAR_10, struct mlx4_cqe *VAR_11)
{
 VAR_10->wc_flags = 0;
 switch (VAR_11->owner_sr_opcode & VAR_8) {
 case 131:
  VAR_10->wc_flags |= VAR_7;
  VAR_9;
 case 132:
  VAR_10->opcode = VAR_5;
  break;
 case 129:
  VAR_10->wc_flags |= VAR_7;
  VAR_9;
 case 130:
 case 128:
  VAR_10->opcode = VAR_6;
  break;
 case 133:
  VAR_10->opcode = VAR_4;
  VAR_10->byte_len = FUNC_0(VAR_11->byte_cnt);
  break;
 case 137:
  VAR_10->opcode = VAR_1;
  VAR_10->byte_len = 8;
  break;
 case 136:
  VAR_10->opcode = VAR_2;
  VAR_10->byte_len = 8;
  break;
 case 134:
  VAR_10->opcode = VAR_3;
  break;
 case 135:
  VAR_10->opcode = VAR_0;
  break;
 default:

  VAR_10->opcode = VAR_6;
  break;
 }
}
