
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wq {int * wr_data; } ;
struct mlx5_cqe64 {int byte_cnt; int sop_drop_qpn; } ;
struct ibv_wc {int byte_len; int opcode; int wc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct ibv_wc *VAR_8, struct mlx5_cqe64 *VAR_9, struct mlx5_wq *VAR_10, int VAR_11)
{
 switch (FUNC_0(VAR_9->sop_drop_qpn) >> 24) {
 case 133:
  VAR_8->wc_flags |= VAR_6;
  VAR_7;
 case 134:
  VAR_8->opcode = VAR_3;
  break;
 case 131:
  VAR_8->wc_flags |= VAR_6;
  VAR_7;
 case 132:
 case 130:
  VAR_8->opcode = VAR_4;
  break;
 case 135:
  VAR_8->opcode = VAR_2;
  VAR_8->byte_len = FUNC_0(VAR_9->byte_cnt);
  break;
 case 137:
  VAR_8->opcode = VAR_0;
  VAR_8->byte_len = 8;
  break;
 case 136:
  VAR_8->opcode = VAR_1;
  VAR_8->byte_len = 8;
  break;
 case 128:
  VAR_8->opcode = VAR_10->wr_data[VAR_11];
  break;
 case 129:
  VAR_8->opcode = VAR_5;
  break;
 }
}
