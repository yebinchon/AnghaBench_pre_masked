
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_6__ {int permanent_address; } ;
struct TYPE_4__ {int mac_addr_47_32; } ;
struct TYPE_5__ {TYPE_1__ permanent_address; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,void*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct mlx5_core_dev*,char*) ;
 int FUNC_6 (struct mlx5_core_dev*,void*,int) ;
 void* FUNC_7 (int) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_8(struct mlx5_core_dev *VAR_8, int VAR_9,
         u8 *VAR_10)
{
 void *VAR_11;
 int VAR_12 = FUNC_2(VAR_3);
 u8 *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_7(VAR_12);
 if (!VAR_11) {
  FUNC_5(VAR_8, "failed to allocate inbox\n");
  return -VAR_0;
 }

 FUNC_1(VAR_3, VAR_11,
   VAR_5, VAR_1);
 FUNC_1(VAR_3, VAR_11, VAR_7, VAR_9);
 FUNC_1(VAR_3, VAR_11, VAR_6, 1);
 FUNC_1(VAR_3, VAR_11,
   VAR_2.permanent_address, 1);
 VAR_13 = (u8 *)FUNC_0(VAR_3, VAR_11,
  VAR_4.permanent_address.mac_addr_47_32);
 FUNC_3(VAR_13, VAR_10);

 VAR_14 = FUNC_6(VAR_8, VAR_11, VAR_12);

 FUNC_4(VAR_11);

 return VAR_14;
}
