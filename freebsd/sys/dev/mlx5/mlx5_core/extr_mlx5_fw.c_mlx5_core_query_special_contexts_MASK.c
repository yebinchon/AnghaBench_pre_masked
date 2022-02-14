
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int resd_lkey; } ;
struct mlx5_core_dev {TYPE_1__ special_contexts; } ;
typedef int out ;
typedef int in ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct mlx5_core_dev*,int *,int,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_5)
{
 u32 VAR_6[FUNC_2(VAR_2)];
 u32 VAR_7[FUNC_2(VAR_3)];
 int VAR_8;

 FUNC_3(VAR_6, 0, sizeof(VAR_6));
 FUNC_3(VAR_7, 0, sizeof(VAR_7));

 FUNC_1(VAR_2, VAR_6, VAR_1,
   VAR_0);
 VAR_8 = FUNC_4(VAR_5, VAR_6, sizeof(VAR_6), VAR_7, sizeof(VAR_7));
 if (VAR_8)
  return VAR_8;

 VAR_5->special_contexts.resd_lkey = FUNC_0(VAR_3,
         VAR_7, VAR_4);

 return VAR_8;
}
