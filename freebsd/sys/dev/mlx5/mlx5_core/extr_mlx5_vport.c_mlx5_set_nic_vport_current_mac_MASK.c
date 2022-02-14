
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void u8 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {int addresses_list; } ;
struct TYPE_3__ {int allowed_list_type; int allowed_list_size; int current_uc_mac_address; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,void*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,void*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct mlx5_core_dev*,char*) ;
 int FUNC_6 (struct mlx5_core_dev*,void*,int) ;
 void* FUNC_7 (int) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_8(struct mlx5_core_dev *VAR_10, int VAR_11,
       bool VAR_12, u8 *VAR_13)
{
 void *VAR_14;
 int VAR_15 = FUNC_2(VAR_6)
    + FUNC_2(VAR_5);
 u8 *VAR_16;
 u8 *VAR_17;
 int VAR_18;

 VAR_14 = FUNC_7(VAR_15);
 if (!VAR_14) {
  FUNC_5(VAR_10, "failed to allocate inbox\n");
  return -VAR_0;
 }

 FUNC_1(VAR_6, VAR_14,
   VAR_8, VAR_1);
 FUNC_1(VAR_6, VAR_14,
   VAR_9, VAR_11);
 FUNC_1(VAR_6, VAR_14,
   VAR_12, VAR_12);
 FUNC_1(VAR_6, VAR_14,
   VAR_3.addresses_list, 1);
 FUNC_1(VAR_6, VAR_14,
   VAR_7.allowed_list_type,
   VAR_2);
 FUNC_1(VAR_6, VAR_14,
   VAR_7.allowed_list_size, 1);

 VAR_16 = (u8 *)FUNC_0(VAR_6, VAR_14,
  VAR_7.current_uc_mac_address);
 VAR_17 = (u8 *)FUNC_0(VAR_5, VAR_16,
  VAR_4);
 FUNC_3(VAR_17, VAR_13);

 VAR_18 = FUNC_6(VAR_10, VAR_14, VAR_15);

 FUNC_4(VAR_14);

 return VAR_18;
}
