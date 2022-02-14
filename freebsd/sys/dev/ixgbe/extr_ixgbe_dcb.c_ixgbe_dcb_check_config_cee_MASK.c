
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ixgbe_dcb_tc_path {int bwg_percent; int bwg_id; scalar_t__ tsa; } ;
struct ixgbe_dcb_config {int** bw_percentage; TYPE_1__* tc_config; } ;
typedef int s32 ;
typedef int link_strict ;
typedef int bw_sum ;
struct TYPE_2__ {struct ixgbe_dcb_tc_path* path; } ;


 int FUNC_0 (char*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int**,int ,int) ;

s32 FUNC_2(struct ixgbe_dcb_config *VAR_8)
{
 struct ixgbe_dcb_tc_path *VAR_9;
 s32 VAR_10 = VAR_5;
 u8 VAR_11, VAR_12, VAR_13 = 0, VAR_14;
 u8 VAR_15[2][VAR_1];
 bool VAR_16[2][VAR_1];

 FUNC_1(VAR_15, 0, sizeof(VAR_15));
 FUNC_1(VAR_16, 0, sizeof(VAR_16));


 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {

  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
   VAR_9 = &VAR_8->tc_config[VAR_12].path[VAR_11];

   VAR_13 = VAR_9->bwg_percent;
   VAR_14 = VAR_9->bwg_id;

   if (VAR_14 >= VAR_1) {
    VAR_10 = VAR_4;
    goto err_config;
   }
   if (VAR_9->tsa == VAR_7) {
    VAR_16[VAR_11][VAR_14] = VAR_6;

    if (VAR_13) {
     VAR_10 = VAR_4;
     goto err_config;
    }
   } else if (!VAR_13) {




    VAR_10 = VAR_4;
    goto err_config;
   }
   VAR_15[VAR_11][VAR_14] += VAR_13;
  }

  VAR_13 = 0;


  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   VAR_13 += VAR_8->bw_percentage[VAR_11][VAR_12];





   if (VAR_16[VAR_11][VAR_12]) {
    if (VAR_15[VAR_11][VAR_12]) {




     VAR_10 = VAR_4;
     goto err_config;
    }
   } else if (VAR_15[VAR_11][VAR_12] != VAR_0 &&
       VAR_15[VAR_11][VAR_12] != 0) {
    VAR_10 = VAR_4;
    goto err_config;
   }
  }

  if (VAR_13 != VAR_0) {
   VAR_10 = VAR_4;
   goto err_config;
  }
 }

err_config:
 FUNC_0("DCB error code %d while checking %s settings.\n",
    VAR_10, (VAR_11 == VAR_3) ? "Tx" : "Rx");

 return VAR_10;
}
