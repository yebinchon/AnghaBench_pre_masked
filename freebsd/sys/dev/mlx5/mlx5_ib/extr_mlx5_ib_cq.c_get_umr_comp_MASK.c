
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_wq {int* wr_data; } ;
typedef enum ib_wc_opcode { ____Placeholder_ib_wc_opcode } ib_wc_opcode ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (char*) ;

__attribute__((used)) static enum ib_wc_opcode FUNC_1(struct mlx5_ib_wq *VAR_2, int VAR_3)
{
 switch (VAR_2->wr_data[VAR_3]) {
 case 128:
  return 0;

 case 130:
  return VAR_0;

 case 129:
  return VAR_1;

 default:
  FUNC_0("unknown completion status\n");
  return 0;
 }
}
