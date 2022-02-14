
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_caps {int flags2; int flags; int function_caps; } ;
struct mlx4_dev {struct mlx4_caps caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mlx4_dev*,char*) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;

__attribute__((used)) static void FUNC_3(struct mlx4_dev *VAR_5)
{
 struct mlx4_caps *VAR_6 = &VAR_5->caps;


 if (!(VAR_6->flags2 & VAR_1) ||
     !(VAR_6->flags2 & VAR_0))
  return;




 if (!(VAR_6->flags & VAR_3) ||
     !(VAR_6->flags & VAR_2)) {
  VAR_6->flags2 &= ~VAR_0;
  VAR_6->flags2 &= ~VAR_1;
  return;
 }

 if (FUNC_0() == 128 || FUNC_0() == 256) {
  FUNC_1(VAR_5, "Enabling CQE stride cacheLine supported\n");

  VAR_6->flags &= ~VAR_2;
  VAR_6->flags &= ~VAR_3;

  if (FUNC_2(VAR_5))
   VAR_6->function_caps |= VAR_4;
 } else {
  if (FUNC_0() != 32 && FUNC_0() != 64)
   FUNC_1(VAR_5, "Disabling CQE stride, cacheLine size unsupported\n");
  VAR_6->flags2 &= ~VAR_0;
  VAR_6->flags2 &= ~VAR_1;
 }
}
