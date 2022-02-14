
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct e1000_mac_info {int ledctl_default; int ledctl_mode1; int ledctl_mode2; } ;
struct TYPE_3__ {scalar_t__ (* valid_led_default ) (struct e1000_hw*,int*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ nvm; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_6)
{
 struct e1000_mac_info *VAR_7 = &VAR_6->mac;
 s32 VAR_8;
 const u32 VAR_9 = VAR_2;
 const u32 VAR_10 = VAR_2 | VAR_3;
 u16 VAR_11, VAR_12, VAR_13, VAR_14;

 FUNC_0("e1000_id_led_init_pchlan");


 VAR_8 = VAR_6->nvm.ops.valid_led_default(VAR_6, &VAR_11);
 if (VAR_8)
  return VAR_8;

 VAR_7->ledctl_default = FUNC_1(VAR_6, VAR_0);
 VAR_7->ledctl_mode1 = VAR_7->ledctl_default;
 VAR_7->ledctl_mode2 = VAR_7->ledctl_default;

 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  VAR_13 = (VAR_11 >> (VAR_12 << 2)) & VAR_1;
  VAR_14 = (VAR_12 * 5);
  switch (VAR_13) {
  case 130:
  case 128:
  case 129:
   VAR_7->ledctl_mode1 &= ~(VAR_4 << VAR_14);
   VAR_7->ledctl_mode1 |= (VAR_9 << VAR_14);
   break;
  case 133:
  case 131:
  case 132:
   VAR_7->ledctl_mode1 &= ~(VAR_4 << VAR_14);
   VAR_7->ledctl_mode1 |= (VAR_10 << VAR_14);
   break;
  default:

   break;
  }
  switch (VAR_13) {
  case 134:
  case 128:
  case 131:
   VAR_7->ledctl_mode2 &= ~(VAR_4 << VAR_14);
   VAR_7->ledctl_mode2 |= (VAR_9 << VAR_14);
   break;
  case 135:
  case 129:
  case 132:
   VAR_7->ledctl_mode2 &= ~(VAR_4 << VAR_14);
   VAR_7->ledctl_mode2 |= (VAR_10 << VAR_14);
   break;
  default:

   break;
  }
 }

 return VAR_5;
}
