
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u8 ;
typedef int u64 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int addresses_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 size_t VAR_2 ;
 int FUNC_2 (int ,void*,int ,size_t) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (void*,void*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_7 (struct mlx5_core_dev*,void*,int) ;
 void* FUNC_8 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_9(struct mlx5_core_dev *VAR_14, int VAR_15,
          u64 *VAR_16, size_t VAR_17)
{
 void *VAR_18, *VAR_19;
 int VAR_20 = FUNC_3(VAR_10)
    + FUNC_3(VAR_9) * (int)VAR_17;
 int VAR_21;
 size_t VAR_22;
 int VAR_23 = 1 << FUNC_1(VAR_14, VAR_7);

 if ((int)VAR_17 > VAR_23) {
  FUNC_6(VAR_14, "Requested list size (%d) > (%d) max_list_size\n",
          (int)VAR_17, VAR_23);
  return -VAR_1;
 }

 VAR_18 = FUNC_8(VAR_20);
 if (!VAR_18) {
  FUNC_6(VAR_14, "failed to allocate inbox\n");
  return -VAR_0;
 }

 FUNC_2(VAR_10, VAR_18, VAR_13, VAR_15);
 if (VAR_15)
  FUNC_2(VAR_10, VAR_18,
    VAR_12, 1);
 FUNC_2(VAR_10, VAR_18,
   VAR_6.addresses_list, 1);

 VAR_19 = FUNC_0(VAR_10, VAR_18, VAR_11);

 FUNC_2(VAR_11, VAR_19, VAR_4,
   VAR_2);
 FUNC_2(VAR_11, VAR_19, VAR_3, VAR_17);

 for (VAR_22 = 0; VAR_22 < VAR_17; VAR_22++) {
  u8 *VAR_24 = (u8 *)FUNC_0(VAR_11, VAR_19,
        VAR_5[VAR_22]);
  u8 *VAR_25 = (u8 *)FUNC_0(VAR_9, VAR_24,
       VAR_8);
  FUNC_4(VAR_25, (u8 *)&VAR_16[VAR_22]);
 }

 VAR_21 = FUNC_7(VAR_14, VAR_18, VAR_20);

 FUNC_5(VAR_18);

 return VAR_21;
}
