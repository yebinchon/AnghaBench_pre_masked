
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx4_qp_table {int zones; } ;
struct mlx4_priv {struct mlx4_qp_table qp_table; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (int ,int ,int,int,int ,int *) ;

int FUNC_2(struct mlx4_dev *VAR_8, int VAR_9, int VAR_10,
       int *VAR_11, u8 VAR_12)
{
 u32 VAR_13;
 int VAR_14 = !!(VAR_12 & (u8)VAR_7);

 struct mlx4_priv *VAR_15 = FUNC_0(VAR_8);
 struct mlx4_qp_table *VAR_16 = &VAR_15->qp_table;

 if (VAR_9 > VAR_2 && VAR_14)
  return -VAR_0;

 VAR_13 = VAR_3;
 if (VAR_12 & (u8)VAR_6) {
  if (VAR_14)
   VAR_13 = VAR_4;
  else
   VAR_13 = VAR_5;
 }

 *VAR_11 = FUNC_1(VAR_16->zones, VAR_13, VAR_9, VAR_10,
     VAR_14 ? VAR_1 : 0, ((void*)0));
 if (*VAR_11 == -1)
  return -VAR_0;

 return 0;
}
