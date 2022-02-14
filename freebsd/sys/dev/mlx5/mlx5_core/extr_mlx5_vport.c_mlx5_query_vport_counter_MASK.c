
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,void*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct mlx5_core_dev*,void*,int,void*,int) ;
 void* FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_6(struct mlx5_core_dev *VAR_9,
        u8 VAR_10, u16 VAR_11,
        void *VAR_12, int VAR_13)
{
 int VAR_14 = FUNC_2(VAR_6);
 int VAR_15;
 void *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_0(VAR_9, VAR_7);

 VAR_16 = FUNC_5(VAR_14);
 if (!VAR_16)
  return -VAR_0;

 FUNC_1(VAR_6, VAR_16, VAR_4,
   VAR_2);
 if (VAR_11) {
  if (VAR_15) {
   FUNC_1(VAR_6, VAR_16, VAR_5, 1);
   FUNC_1(VAR_6, VAR_16, VAR_8,
     VAR_11);
  } else {
   VAR_17 = -VAR_1;
   goto ex;
  }
 }
 if (FUNC_0(VAR_9, VAR_3) == 2)
  FUNC_1(VAR_6, VAR_16, VAR_10, VAR_10);

 VAR_17 = FUNC_4(VAR_9, VAR_16, VAR_14, VAR_12, VAR_13);

ex:
 FUNC_3(VAR_16);
 return VAR_17;
}
