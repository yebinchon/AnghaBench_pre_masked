
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5_core_dev {TYPE_1__* iseg; } ;
struct TYPE_2__ {int initializing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlx5_core_dev*,char*,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,char*,unsigned int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct mlx5_core_dev *VAR_3, u32 VAR_4,
   u32 VAR_5)
{
 int VAR_6 = VAR_2 + FUNC_6(VAR_5);
 int VAR_7 = VAR_2 + FUNC_6(VAR_4);
 int VAR_8 = 0;

 FUNC_0(VAR_4 > VAR_5);

 while (FUNC_1(VAR_3) == 1) {
  if (FUNC_8(VAR_2, VAR_7)) {
   VAR_8 = -VAR_0;
   break;
  }
  if (VAR_5 && FUNC_8(VAR_2, VAR_6)) {
   FUNC_5(VAR_3,
       "Waiting for FW initialization, timeout abort in %u s\n",
       (unsigned int)(FUNC_3(VAR_7 - VAR_6) / 1000));
   VAR_6 = VAR_2 + FUNC_6(VAR_5);
  }
  FUNC_7(VAR_1);
 }

 if (VAR_8 != 0)
  FUNC_4(VAR_3, "Full initializing bit dword = 0x%x\n",
      FUNC_2(&VAR_3->iseg->initializing));

 return VAR_8;
}
