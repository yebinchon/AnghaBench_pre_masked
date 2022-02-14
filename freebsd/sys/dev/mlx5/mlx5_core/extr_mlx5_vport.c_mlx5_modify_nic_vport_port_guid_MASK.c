
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int port_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,void*,void*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (int ,void*,int ,int) ;
 int FUNC_4 (void*,void*,int ,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct mlx5_core_dev*,char*) ;
 int FUNC_8 (struct mlx5_core_dev*,void*,int) ;
 void* FUNC_9 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_10(struct mlx5_core_dev *VAR_10,
        u32 VAR_11, u64 VAR_12)
{
 void *VAR_13;
 int VAR_14 = FUNC_5(VAR_5);
 int VAR_15;
 void *VAR_16;

 if (!VAR_11)
  return -VAR_0;
 if (!FUNC_2(VAR_10, VAR_8))
  return -VAR_3;
 if (!FUNC_1(VAR_10, VAR_6))
  return -VAR_2;

 VAR_13 = FUNC_9(VAR_14);
 if (!VAR_13) {
  FUNC_7(VAR_10, "failed to allocate inbox\n");
  return -VAR_1;
 }

 FUNC_3(VAR_5, VAR_13,
   VAR_4.port_guid, 1);
 FUNC_3(VAR_5, VAR_13, VAR_9, VAR_11);

 FUNC_3(VAR_5, VAR_13, VAR_7, 1);

 VAR_16 = FUNC_0(VAR_5,
      VAR_13, VAR_16);
 FUNC_4(VAR_16, VAR_16, VAR_12, VAR_12);

 VAR_15 = FUNC_8(VAR_10, VAR_13, VAR_14);

 FUNC_6(VAR_13);

 return VAR_15;
}
