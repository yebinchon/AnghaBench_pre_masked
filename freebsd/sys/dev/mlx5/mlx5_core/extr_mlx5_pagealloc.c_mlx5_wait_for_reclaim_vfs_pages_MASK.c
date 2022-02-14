
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_pages; int* pages_per_func; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

s64 FUNC_4(struct mlx5_core_dev *VAR_2)
{
 int VAR_3 = VAR_1 + FUNC_1(VAR_0);
 s64 VAR_4 = 0;
 s64 VAR_5 = 0;

 while (!FUNC_3(VAR_1, VAR_3)) {

  VAR_5 = VAR_2->priv.fw_pages - VAR_2->priv.pages_per_func[0];
  if (!VAR_5)
   break;

  if (VAR_5 != VAR_4)
   VAR_3 = VAR_3 + FUNC_1(100);

  VAR_4 = VAR_5;
  FUNC_2(1);
 }

 if (VAR_5)
  FUNC_0(VAR_2, "FW did not return all VFs pages, will cause to memory leak\n");

 return -VAR_5;
}
