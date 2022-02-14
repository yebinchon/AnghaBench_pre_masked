
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interface_id; int subnet_prefix; } ;
union ib_gid {TYPE_1__ global; } ;
typedef int u8 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,void*,union ib_gid*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,void*,int,int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct mlx5_core_dev*,void*,int,void*,int) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_8(struct mlx5_core_dev *VAR_12, u8 VAR_13,
        u16 VAR_14, u16 VAR_15, union ib_gid *VAR_16)
{
 int VAR_17 = FUNC_3(VAR_8);
 int VAR_18 = FUNC_3(VAR_9);
 int VAR_19;
 void *VAR_20 = ((void*)0);
 void *VAR_21 = ((void*)0);
 union ib_gid *VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_19 = FUNC_1(VAR_12, VAR_10);
 VAR_23 = FUNC_6(FUNC_1(VAR_12, VAR_4));

 if (VAR_15 > VAR_23 && VAR_15 != 0xffff)
  return -VAR_0;

 if (VAR_15 == 0xffff)
  VAR_24 = VAR_23;
 else
  VAR_24 = 1;

 VAR_18 += VAR_24 * sizeof(*VAR_16);

 VAR_21 = FUNC_7(VAR_17);
 VAR_20 = FUNC_7(VAR_18);
 if (!VAR_21 || !VAR_20) {
  VAR_25 = -VAR_1;
  goto out;
 }

 FUNC_2(VAR_8, VAR_21, VAR_6,
   VAR_3);
 if (VAR_14) {
  if (VAR_19) {
   FUNC_2(VAR_8, VAR_21, VAR_11,
     VAR_14);
   FUNC_2(VAR_8, VAR_21, VAR_7, 1);
  } else {
   VAR_25 = -VAR_2;
   goto out;
  }
 }

 FUNC_2(VAR_8, VAR_21, VAR_15, VAR_15);

 if (FUNC_1(VAR_12, VAR_5) == 2)
  FUNC_2(VAR_8, VAR_21, VAR_13, VAR_13);

 VAR_25 = FUNC_5(VAR_12, VAR_21, VAR_17, VAR_20, VAR_18);
 if (VAR_25)
  goto out;

 VAR_22 = (union ib_gid *)FUNC_0(VAR_9, VAR_20, VAR_16);
 VAR_16->global.subnet_prefix = VAR_22->global.subnet_prefix;
 VAR_16->global.interface_id = VAR_22->global.interface_id;

out:
 FUNC_4(VAR_21);
 FUNC_4(VAR_20);
 return VAR_25;
}
