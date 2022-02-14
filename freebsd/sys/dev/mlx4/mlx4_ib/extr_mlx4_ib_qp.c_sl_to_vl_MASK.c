
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sl2vl_tbl_to_u64 {int* sl8; int sl64; } ;
typedef int u8 ;
struct mlx4_ib_dev {int * sl2vl; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static u8 FUNC_1(struct mlx4_ib_dev *VAR_0, u8 VAR_1, int VAR_2)
{
 union sl2vl_tbl_to_u64 VAR_3;
 u8 VAR_4;

 if (VAR_1 > 15)
  return 0xf;
 VAR_3.sl64 = FUNC_0(&VAR_0->sl2vl[VAR_2 - 1]);
 VAR_4 = VAR_3.sl8[VAR_1 >> 1];
 if (VAR_1 & 1)
  VAR_4 &= 0x0f;
 else
  VAR_4 >>= 4;
 return VAR_4;
}
