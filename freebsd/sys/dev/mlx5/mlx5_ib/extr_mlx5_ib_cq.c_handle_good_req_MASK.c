
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_wq {int dummy; } ;
struct mlx5_cqe64 {int byte_cnt; int sop_drop_qpn; } ;
struct ib_wc {int byte_len; int opcode; scalar_t__ wc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_ib_wq*,int) ;

__attribute__((used)) static void FUNC_2(struct ib_wc *VAR_8, struct mlx5_cqe64 *VAR_9,
       struct mlx5_ib_wq *VAR_10, int VAR_11)
{
 VAR_8->wc_flags = 0;
 switch (FUNC_0(VAR_9->sop_drop_qpn) >> 24) {
 case 132:
  VAR_8->wc_flags |= VAR_7;
 case 133:
  VAR_8->opcode = VAR_5;
  break;
 case 130:
  VAR_8->wc_flags |= VAR_7;
 case 131:
 case 129:
  VAR_8->opcode = VAR_6;
  break;
 case 134:
  VAR_8->opcode = VAR_4;
  VAR_8->byte_len = FUNC_0(VAR_9->byte_cnt);
  break;
 case 138:
  VAR_8->opcode = VAR_0;
  VAR_8->byte_len = 8;
  break;
 case 137:
  VAR_8->opcode = VAR_1;
  VAR_8->byte_len = 8;
  break;
 case 136:
  VAR_8->opcode = VAR_2;
  VAR_8->byte_len = 8;
  break;
 case 135:
  VAR_8->opcode = VAR_3;
  VAR_8->byte_len = 8;
  break;
 case 128:
  VAR_8->opcode = FUNC_1(VAR_10, VAR_11);
  break;
 }
}
