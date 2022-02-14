
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int permanent_address; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct mlx5_core_dev*,char*) ;
 int FUNC_6 (struct mlx5_core_dev*,void*,int) ;
 void* FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_8(struct mlx5_core_dev *VAR_7,
          u16 VAR_8, u8 *VAR_9)
{
 void *VAR_10;
 int VAR_11 = FUNC_2(VAR_2);
 int VAR_12;
 void *VAR_13;
 u8 *VAR_14;

 VAR_10 = FUNC_7(VAR_11);
 if (!VAR_10) {
  FUNC_5(VAR_7, "failed to allocate inbox\n");
  return -VAR_0;
 }

 FUNC_1(VAR_2, VAR_10,
   VAR_1.permanent_address, 1);
 FUNC_1(VAR_2, VAR_10, VAR_6, VAR_8);

 if (VAR_8)
  FUNC_1(VAR_2, VAR_10, VAR_4, 1);

 VAR_13 = FUNC_0(VAR_2,
         VAR_10, VAR_3);
 VAR_14 = FUNC_0(VAR_3, VAR_13,
    VAR_5);

 FUNC_3(&VAR_14[2], VAR_9);

 VAR_12 = FUNC_6(VAR_7, VAR_10, VAR_11);

 FUNC_4(VAR_10);

 return VAR_12;
}
