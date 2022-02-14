
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct mlx4_dev*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_3 (struct mlx4_dev*,int,int) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_1, int VAR_2, int VAR_3, int VAR_4,
       u64 VAR_5, u64 *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;

 switch (VAR_3) {
 case 128:
  VAR_8 = !VAR_7 ? FUNC_1(VAR_6) : VAR_7;
  VAR_8 = FUNC_3(
    VAR_1, VAR_2, VAR_8);

  if (VAR_8 < 0)
   return -VAR_0;
  FUNC_2(VAR_1, VAR_2, VAR_5, VAR_8);
  FUNC_0(VAR_1, VAR_8, VAR_5);
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }

 return VAR_9;

}
