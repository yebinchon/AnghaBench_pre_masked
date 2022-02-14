
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int link_speed; scalar_t__ num_tcs; } ;
struct TYPE_4__ {TYPE_1__ dmac_config; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct ixgbe_hw*,int ,scalar_t__) ;

s32 FUNC_5(struct ixgbe_hw *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 FUNC_0("ixgbe_dmac_config_tcs_X550");


 switch (VAR_10->mac.dmac_config.link_speed) {
 case 129:
 case 130:
  VAR_13 = VAR_1;
  break;
 case 128:
  VAR_13 = VAR_3;
  break;
 default:
  VAR_13 = VAR_2;
  break;
 }

 VAR_15 = ((FUNC_2(VAR_10, VAR_5) >>
        VAR_6) / 1024);


 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_12 = FUNC_2(VAR_10, FUNC_1(VAR_11));
  VAR_12 &= ~VAR_4;

  if (VAR_11 < VAR_10->mac.dmac_config.num_tcs) {

   VAR_14 = FUNC_2(VAR_10, FUNC_3(VAR_11));
   VAR_14 = (VAR_14 & VAR_7) >>
    VAR_8;


   if (VAR_14 > VAR_13)
    VAR_14 = VAR_14 - VAR_13;
   else
    VAR_14 = 0;


   VAR_12 |= (VAR_14 > VAR_15) ?
    VAR_14 : VAR_15;
  }
  FUNC_4(VAR_10, FUNC_1(VAR_11), VAR_12);
 }
 return VAR_9;
}
