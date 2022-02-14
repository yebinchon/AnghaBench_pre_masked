
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ multispeed_fiber; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_1__ phy; } ;
struct adapter {int phy_layer; int media; struct ixgbe_hw hw; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,int *) ;
 int FUNC_4 (struct ixgbe_hw*) ;

__attribute__((used)) static void
FUNC_5(if_ctx_t VAR_35)
{
 struct adapter *VAR_36 = FUNC_2(VAR_35);
 struct ixgbe_hw *VAR_37 = &VAR_36->hw;
 device_t VAR_38 = FUNC_1(VAR_35);
 u64 VAR_39;

 VAR_39 = VAR_36->phy_layer = FUNC_4(VAR_37);


 if (VAR_39 & VAR_31)
  FUNC_3(VAR_36->media, VAR_17 | VAR_11, 0, ((void*)0));
 if (VAR_39 & VAR_23)
  FUNC_3(VAR_36->media, VAR_17 | VAR_4, 0, ((void*)0));
 if (VAR_39 & VAR_24)
  FUNC_3(VAR_36->media, VAR_17 | VAR_5, 0, ((void*)0));
 if (VAR_39 & VAR_25)
  FUNC_3(VAR_36->media, VAR_17 | VAR_13, 0, ((void*)0));

 if (VAR_39 & VAR_34 ||
     VAR_39 & VAR_33)
  FUNC_3(VAR_36->media, VAR_17 | VAR_12, 0,
      ((void*)0));

 if (VAR_39 & VAR_29) {
  FUNC_3(VAR_36->media, VAR_17 | VAR_9, 0, ((void*)0));
  if (VAR_37->phy.multispeed_fiber)
   FUNC_3(VAR_36->media, VAR_17 | VAR_2, 0,
       ((void*)0));
 }
 if (VAR_39 & VAR_30) {
  FUNC_3(VAR_36->media, VAR_17 | VAR_10, 0, ((void*)0));
  if (VAR_37->phy.multispeed_fiber)
   FUNC_3(VAR_36->media, VAR_17 | VAR_3, 0,
       ((void*)0));
 } else if (VAR_39 & VAR_22)
  FUNC_3(VAR_36->media, VAR_17 | VAR_3, 0, ((void*)0));
 if (VAR_39 & VAR_26)
  FUNC_3(VAR_36->media, VAR_17 | VAR_6, 0, ((void*)0));
 if (VAR_39 & VAR_27) {
  FUNC_0(VAR_38, "Media supported: 10GbaseKR\n");
  FUNC_0(VAR_38, "10GbaseKR mapped to 10GbaseSR\n");
  FUNC_3(VAR_36->media, VAR_17 | VAR_10, 0, ((void*)0));
 }
 if (VAR_39 & VAR_28) {
  FUNC_0(VAR_38, "Media supported: 10GbaseKX4\n");
  FUNC_0(VAR_38, "10GbaseKX4 mapped to 10GbaseCX4\n");
  FUNC_3(VAR_36->media, VAR_17 | VAR_6, 0, ((void*)0));
 }
 if (VAR_39 & VAR_21) {
  FUNC_0(VAR_38, "Media supported: 1000baseKX\n");
  FUNC_0(VAR_38, "1000baseKX mapped to 1000baseCX\n");
  FUNC_3(VAR_36->media, VAR_17 | VAR_0, 0, ((void*)0));
 }
 if (VAR_39 & VAR_32) {
  FUNC_0(VAR_38, "Media supported: 2500baseKX\n");
  FUNC_0(VAR_38, "2500baseKX mapped to 2500baseSX\n");
  FUNC_3(VAR_36->media, VAR_17 | VAR_15, 0, ((void*)0));
 }

 if (VAR_39 & VAR_20)
  FUNC_0(VAR_38, "Media supported: 1000baseBX\n");

 if (VAR_37->device_id == VAR_19) {
  FUNC_3(VAR_36->media, VAR_17 | VAR_4 | VAR_18,
      0, ((void*)0));
  FUNC_3(VAR_36->media, VAR_17 | VAR_4, 0, ((void*)0));
 }

 FUNC_3(VAR_36->media, VAR_17 | VAR_16, 0, ((void*)0));
}
