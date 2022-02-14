
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int*,void*,int*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int*,void*,int*) ;
 int FUNC_3 (int*,void*,int,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (struct mlx5_core_dev*,void*,int,void*,int) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_9(struct mlx5_core_dev *VAR_11, u8 VAR_12,
         u8 VAR_13, u16 VAR_14, u16 VAR_15,
         u16 *VAR_16)
{
 int VAR_17 = FUNC_4(VAR_7);
 int VAR_18 = FUNC_4(VAR_8);
 int VAR_19;
 void *VAR_20 = ((void*)0);
 void *VAR_21 = ((void*)0);
 void *VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_19 = FUNC_1(VAR_11, VAR_9);

 VAR_24 = FUNC_8(FUNC_1(VAR_11, VAR_6));
 if (VAR_15 > VAR_24 && VAR_15 != 0xffff)
  return -VAR_0;

 if (VAR_15 == 0xffff)
  VAR_23 = VAR_24;
 else
  VAR_23 = 1;

 VAR_18 += VAR_23 * FUNC_4(VAR_16);

 VAR_21 = FUNC_6(VAR_17, VAR_2);
 VAR_20 = FUNC_6(VAR_18, VAR_2);

 FUNC_3(VAR_7, VAR_21, VAR_5,
   VAR_3);
 if (VAR_12) {
  if (VAR_19) {
   FUNC_3(VAR_7, VAR_21, VAR_10,
     VAR_14);
   FUNC_3(VAR_7, VAR_21, VAR_12, 1);
  } else {
   VAR_25 = -VAR_1;
   goto out;
  }
 }
 FUNC_3(VAR_7, VAR_21, VAR_15, VAR_15);

 if (FUNC_1(VAR_11, VAR_4) == 2)
  FUNC_3(VAR_7, VAR_21, VAR_13, VAR_13);

 VAR_25 = FUNC_7(VAR_11, VAR_21, VAR_17, VAR_20, VAR_18);
 if (VAR_25)
  goto out;

 VAR_22 = FUNC_0(VAR_8, VAR_20, VAR_16);
 for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++, VAR_16++,
      VAR_22 += FUNC_4(VAR_16))
  *VAR_16 = FUNC_2(VAR_16, VAR_22, VAR_16);

out:
 FUNC_5(VAR_21);
 FUNC_5(VAR_20);
 return VAR_25;
}
