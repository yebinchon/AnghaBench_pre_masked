
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_dcb_tc_path {size_t bwg_id; size_t bwg_percent; size_t link_percent; size_t data_credits_refill; size_t data_credits_max; } ;
struct ixgbe_dcb_config {size_t** bw_percentage; TYPE_2__* tc_config; } ;
typedef int s32 ;
struct TYPE_4__ {size_t desc_credits_max; struct ixgbe_dcb_tc_path* path; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (size_t,int) ;

s32 FUNC_1(struct ixgbe_hw *VAR_9,
       struct ixgbe_dcb_config *VAR_10,
       u32 VAR_11, u8 VAR_12)
{
 struct ixgbe_dcb_tc_path *VAR_13;
 u32 VAR_14 = 0;
 u16 VAR_15 = 100;
 s32 VAR_16 = VAR_7;

 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 u32 VAR_19 = 0;
 u16 VAR_20 = 0;
 u8 VAR_21 = 0;
 u8 VAR_22;

 if (VAR_10 == ((void*)0)) {
  VAR_16 = VAR_6;
  goto out;
 }

 VAR_17 = ((VAR_11 / 2) + VAR_0 - 1) /
       VAR_0;


 for (VAR_22 = 0; VAR_22 < VAR_3; VAR_22++) {
  VAR_13 = &VAR_10->tc_config[VAR_22].path[VAR_12];
  VAR_21 = VAR_10->bw_percentage[VAR_12][VAR_13->bwg_id];
  VAR_20 = VAR_13->bwg_percent;

  VAR_20 = (VAR_20 * VAR_21) / 100;

  if (VAR_20 && VAR_20 < VAR_15)
   VAR_15 = VAR_20;
 }
 VAR_14 = (VAR_17 / VAR_15) + 1;


 for (VAR_22 = 0; VAR_22 < VAR_3; VAR_22++) {
  VAR_13 = &VAR_10->tc_config[VAR_22].path[VAR_12];
  VAR_21 = VAR_10->bw_percentage[VAR_12][VAR_13->bwg_id];

  VAR_20 = VAR_13->bwg_percent;

  VAR_20 = (VAR_20 * VAR_21) / 100;
  if (VAR_13->bwg_percent > 0 && VAR_20 == 0)
   VAR_20 = 1;


  VAR_13->link_percent = (u8)VAR_20;


  VAR_18 = FUNC_0(VAR_20 * VAR_14,
        (u32)VAR_2);


  if (VAR_18 < VAR_17)
   VAR_18 = VAR_17;

  VAR_13->data_credits_refill = (u16)VAR_18;


  VAR_19 = (VAR_20 * VAR_1) / 100;






  if (VAR_19 < VAR_17)
   VAR_19 = VAR_17;

  if (VAR_12 == VAR_5) {






   if (VAR_19 && (VAR_19 <
       VAR_4)
       && (VAR_9->mac.type == VAR_8))
    VAR_19 = VAR_4;

   VAR_10->tc_config[VAR_22].desc_credits_max =
        (u16)VAR_19;
  }

  VAR_13->data_credits_max = (u16)VAR_19;
 }

out:
 return VAR_16;
}
