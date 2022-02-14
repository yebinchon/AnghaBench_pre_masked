
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct i40e_lldp_org_tlv {size_t* tlvinfo; int typelength; int ouisubtype; } ;
struct i40e_dcbx_config {scalar_t__ numapps; TYPE_1__* app; } ;
struct TYPE_2__ {int priority; int selector; int protocolid; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static void FUNC_2(struct i40e_lldp_org_tlv *VAR_7,
          struct i40e_dcbx_config *VAR_8)
{
 u16 VAR_9, VAR_10, VAR_11 = 0;
 u8 VAR_12, VAR_13, VAR_14 = 0;
 u8 *VAR_15 = VAR_7->tlvinfo;
 u32 VAR_16;


 if (VAR_8->numapps == 0)
  return;
 VAR_16 = (u32)((VAR_1 << VAR_4) |
   VAR_3);
 VAR_7->ouisubtype = FUNC_0(VAR_16);


 VAR_11++;
 while (VAR_14 < VAR_8->numapps) {
  VAR_12 = VAR_8->app[VAR_14].priority & 0x7;
  VAR_13 = VAR_8->app[VAR_14].selector & 0x7;
  VAR_15[VAR_11] = (VAR_12 << VAR_2) | VAR_13;
  VAR_15[VAR_11 + 1] = (VAR_8->app[VAR_14].protocolid >> 0x8) & 0xFF;
  VAR_15[VAR_11 + 2] = VAR_8->app[VAR_14].protocolid & 0xFF;

  VAR_11 += 3;
  VAR_14++;
  if (VAR_14 >= VAR_0)
   break;
 }

 VAR_10 = sizeof(VAR_7->ouisubtype) + 1 + (VAR_14*3);
 VAR_9 = (u16)((VAR_6 << VAR_5) |
  (VAR_10 & 0x1FF));
 VAR_7->typelength = FUNC_1(VAR_9);
}
