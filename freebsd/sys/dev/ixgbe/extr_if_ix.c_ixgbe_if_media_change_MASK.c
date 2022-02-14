
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* setup_link ) (struct ixgbe_hw*,int,int ) ;} ;
struct TYPE_6__ {TYPE_2__ ops; int autotry_restart; } ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
struct ifmedia {int ifm_media; } ;
struct adapter {int advertise; struct ixgbe_hw hw; } ;
typedef int ixgbe_link_speed ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 struct ifmedia* FUNC_5 (int ) ;
 struct adapter* FUNC_6 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct ixgbe_hw*,int,int ) ;

__attribute__((used)) static int
FUNC_8(if_ctx_t VAR_9)
{
 struct adapter *VAR_10 = FUNC_6(VAR_9);
 struct ifmedia *VAR_11 = FUNC_5(VAR_9);
 struct ixgbe_hw *VAR_12 = &VAR_10->hw;
 ixgbe_link_speed VAR_13 = 0;

 FUNC_2("ixgbe_if_media_change: begin");

 if (FUNC_1(VAR_11->ifm_media) != VAR_2)
  return (VAR_0);

 if (VAR_12->phy.media_type == VAR_8)
  return (VAR_1);






 switch (FUNC_0(VAR_11->ifm_media)) {
 case 128:
 case 131:
  VAR_13 |= VAR_3;
  VAR_13 |= VAR_6;
  VAR_13 |= VAR_4;
  break;
 case 133:
 case 134:

 case 132:
 case 137:




  VAR_13 |= VAR_6;
  VAR_13 |= VAR_4;
  break;

 case 143:



 case 141:
 case 140:
  VAR_13 |= VAR_6;
  break;
 case 139:
  VAR_13 |= VAR_3;
  VAR_13 |= VAR_6;
  break;
 case 130:
  VAR_13 |= VAR_4;
  break;
 case 138:
  VAR_13 |= VAR_3;
  break;
 case 129:
  VAR_13 |= VAR_5;
  break;
 default:
  goto invalid;
 }

 VAR_12->mac.autotry_restart = VAR_7;
 VAR_12->mac.ops.setup_link(VAR_12, VAR_13, VAR_7);
 VAR_10->advertise =
     ((VAR_13 & VAR_4) ? 4 : 0) |
     ((VAR_13 & VAR_6) ? 2 : 0) |
     ((VAR_13 & VAR_3) ? 1 : 0) |
     ((VAR_13 & VAR_5) ? 8 : 0);

 return (0);

invalid:
 FUNC_3(FUNC_4(VAR_9), "Invalid media type!\n");

 return (VAR_0);
}
