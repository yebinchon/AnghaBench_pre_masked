
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ixgbe_dcb_tc_config {TYPE_2__* path; } ;
struct TYPE_3__ {int pg_tcs; } ;
struct ixgbe_dcb_config {TYPE_1__ num_tcs; struct ixgbe_dcb_tc_config* tc_config; } ;
struct TYPE_4__ {int up_to_tc_bitmap; } ;



u8 FUNC_0(struct ixgbe_dcb_config *VAR_0, int VAR_1, u8 VAR_2)
{
 struct ixgbe_dcb_tc_config *VAR_3 = &VAR_0->tc_config[0];
 u8 VAR_4 = 1 << VAR_2;
 u8 VAR_5 = VAR_0->num_tcs.pg_tcs;


 if (!VAR_5)
  goto out;






 for (VAR_5--; VAR_5; VAR_5--) {
  if (VAR_4 & VAR_3[VAR_5].path[VAR_1].up_to_tc_bitmap)
   break;
 }
out:
 return VAR_5;
}
