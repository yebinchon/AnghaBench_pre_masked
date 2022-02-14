
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {int roce_en; } ;
struct TYPE_3__ {int roce_en; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 int FUNC_4 (struct mlx5_core_dev*,void*,int) ;
 void* FUNC_5 (int) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_6(struct mlx5_core_dev *VAR_4,
           int VAR_5)
{
 void *VAR_6;
 int VAR_7 = FUNC_1(VAR_2);
 int VAR_8;

 VAR_6 = FUNC_5(VAR_7);
 if (!VAR_6) {
  FUNC_3(VAR_4, "failed to allocate inbox\n");
  return -VAR_0;
 }

 FUNC_0(VAR_2, VAR_6, VAR_1.roce_en, 1);
 FUNC_0(VAR_2, VAR_6, VAR_3.roce_en,
   VAR_5);

 VAR_8 = FUNC_4(VAR_4, VAR_6, VAR_7);

 FUNC_2(VAR_6);

 return VAR_8;
}
