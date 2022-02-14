
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ (* read ) (struct ixgbe_hw*,int*,int,int ) ;int (* check_for_rst ) (struct ixgbe_hw*,int ) ;} ;
struct ixgbe_mbx_info {int timeout; TYPE_1__ ops; } ;
struct ixgbe_mac_info {scalar_t__ type; scalar_t__ get_link_status; } ;
struct ixgbe_hw {struct ixgbe_mac_info mac; struct ixgbe_mbx_info mbx; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int*,int,int ) ;
 int FUNC_4 (int) ;

s32 FUNC_5(struct ixgbe_hw *VAR_18, ixgbe_link_speed *VAR_19,
       bool *VAR_20, bool VAR_21)
{
 struct ixgbe_mbx_info *VAR_22 = &VAR_18->mbx;
 struct ixgbe_mac_info *VAR_23 = &VAR_18->mac;
 s32 VAR_24 = VAR_11;
 u32 VAR_25;
 u32 VAR_26 = 0;
 FUNC_1(VAR_21);


 if (!VAR_22->ops.check_for_rst(VAR_18, 0) || !VAR_22->timeout)
  VAR_23->get_link_status = VAR_15;

 if (!VAR_23->get_link_status)
  goto out;


 VAR_25 = FUNC_0(VAR_18, VAR_12);
 if (!(VAR_25 & VAR_3))
  goto out;




 if (VAR_23->type == VAR_16) {
  int VAR_27;

  for (VAR_27 = 0; VAR_27 < 5; VAR_27++) {
   FUNC_4(100);
   VAR_25 = FUNC_0(VAR_18, VAR_12);

   if (!(VAR_25 & VAR_3))
    goto out;
  }
 }

 switch (VAR_25 & VAR_1) {
 case 130:
  *VAR_19 = VAR_5;
  if (VAR_18->mac.type >= VAR_17) {
   if (VAR_25 & VAR_2)
    *VAR_19 = VAR_8;
  }
  break;
 case 128:
  *VAR_19 = VAR_7;
  break;
 case 131:
  *VAR_19 = VAR_4;
  if (VAR_18->mac.type == VAR_17) {
   if (VAR_25 & VAR_2)
    *VAR_19 = VAR_9;
  }
  break;
 case 129:
  *VAR_19 = VAR_10;

  if (VAR_18->mac.type >= VAR_17)
   *VAR_19 = VAR_6;
  break;
 default:
  *VAR_19 = VAR_10;
 }




 if (VAR_22->ops.read(VAR_18, &VAR_26, 1, 0))
  goto out;

 if (!(VAR_26 & VAR_13)) {

  if (VAR_26 & VAR_14)
   VAR_24 = -1;
  goto out;
 }


 if (!VAR_22->timeout) {
  VAR_24 = -1;
  goto out;
 }




 VAR_23->get_link_status = VAR_0;

out:
 *VAR_20 = !VAR_23->get_link_status;
 return VAR_24;
}
