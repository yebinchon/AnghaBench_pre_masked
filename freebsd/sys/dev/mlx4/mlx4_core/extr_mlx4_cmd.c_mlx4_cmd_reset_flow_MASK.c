
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx4_dev {int persist; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mlx4_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_1, u16 VAR_2, u8 VAR_3,
          int VAR_4)
{



 if (VAR_0) {
  FUNC_0(VAR_1->persist);
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 }

 return VAR_4;
}
