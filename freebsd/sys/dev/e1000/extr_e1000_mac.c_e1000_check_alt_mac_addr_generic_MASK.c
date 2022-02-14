
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int (* rar_set ) (struct e1000_hw*,int*,int ) ;} ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ ops; } ;
struct TYPE_7__ {scalar_t__ (* read ) (struct e1000_hw*,int,int,int*) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_6__ {scalar_t__ func; } ;
struct e1000_hw {TYPE_5__ mac; TYPE_3__ nvm; TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int,int,int*) ;
 int FUNC_5 (struct e1000_hw*,int*,int ) ;

s32 FUNC_6(struct e1000_hw *VAR_13)
{
 u32 VAR_14;
 s32 VAR_15;
 u16 VAR_16, VAR_17, VAR_18;
 u8 VAR_19[VAR_7];

 FUNC_0("e1000_check_alt_mac_addr_generic");

 VAR_15 = VAR_13->nvm.ops.read(VAR_13, VAR_9, 1, &VAR_18);
 if (VAR_15)
  return VAR_15;


 if ((VAR_13->mac.type < VAR_10) || (VAR_13->mac.type == VAR_11))
  return VAR_6;




 if (VAR_13->mac.type >= VAR_12)
  return VAR_6;

 VAR_15 = VAR_13->nvm.ops.read(VAR_13, VAR_8, 1,
       &VAR_17);
 if (VAR_15) {
  FUNC_1("NVM Read Error\n");
  return VAR_15;
 }

 if ((VAR_17 == 0xFFFF) ||
     (VAR_17 == 0x0000))

  return VAR_6;

 if (VAR_13->bus.func == VAR_3)
  VAR_17 += VAR_0;
 if (VAR_13->bus.func == VAR_4)
  VAR_17 += VAR_1;

 if (VAR_13->bus.func == VAR_5)
  VAR_17 += VAR_2;
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14 += 2) {
  VAR_16 = VAR_17 + (VAR_14 >> 1);
  VAR_15 = VAR_13->nvm.ops.read(VAR_13, VAR_16, 1, &VAR_18);
  if (VAR_15) {
   FUNC_1("NVM Read Error\n");
   return VAR_15;
  }

  VAR_19[VAR_14] = (u8)(VAR_18 & 0xFF);
  VAR_19[VAR_14 + 1] = (u8)(VAR_18 >> 8);
 }


 if (VAR_19[0] & 0x01) {
  FUNC_1("Ignoring Alternate Mac Address with MC bit set\n");
  return VAR_6;
 }





 VAR_13->mac.ops.rar_set(VAR_13, VAR_19, 0);

 return VAR_6;
}
