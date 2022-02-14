
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_mac {int dummy; } ;
typedef int int8_t ;
typedef enum n_rssi_type { ____Placeholder_n_rssi_type } n_rssi_type ;
typedef enum n_rail_type { ____Placeholder_n_rail_type } n_rail_type ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int VAR_24 ;
 int VAR_25 ;







 int FUNC_1 (int,int,int) ;

__attribute__((used)) static void FUNC_2(struct bwn_mac *VAR_26, uint16_t VAR_27,
     int8_t VAR_28, uint8_t VAR_29,
     enum n_rail_type VAR_30,
     enum n_rssi_type VAR_31)
{
 uint16_t VAR_32;
 bool VAR_33 = (VAR_29 == 1) || (VAR_29 == 5);
 bool VAR_34 = (VAR_29 == 2) || (VAR_29 == 5);

 VAR_28 = FUNC_1(VAR_28, -32, 31);
 VAR_32 = ((VAR_27 & 0x3F) << 8) | (VAR_28 & 0x3F);

 switch (VAR_31) {
 case 133:
  if (VAR_33 && VAR_30 == VAR_24)
   FUNC_0(VAR_26, VAR_3, VAR_32);
  if (VAR_33 && VAR_30 == VAR_25)
   FUNC_0(VAR_26, VAR_9, VAR_32);
  if (VAR_34 && VAR_30 == VAR_24)
   FUNC_0(VAR_26, VAR_15, VAR_32);
  if (VAR_34 && VAR_30 == VAR_25)
   FUNC_0(VAR_26, VAR_21, VAR_32);
  break;
 case 129:
  if (VAR_33 && VAR_30 == VAR_24)
   FUNC_0(VAR_26, VAR_1, VAR_32);
  if (VAR_33 && VAR_30 == VAR_25)
   FUNC_0(VAR_26, VAR_7, VAR_32);
  if (VAR_34 && VAR_30 == VAR_24)
   FUNC_0(VAR_26, VAR_13, VAR_32);
  if (VAR_34 && VAR_30 == VAR_25)
   FUNC_0(VAR_26, VAR_19, VAR_32);
  break;
 case 128:
  if (VAR_33 && VAR_30 == VAR_24)
   FUNC_0(VAR_26, VAR_2, VAR_32);
  if (VAR_33 && VAR_30 == VAR_25)
   FUNC_0(VAR_26, VAR_8, VAR_32);
  if (VAR_34 && VAR_30 == VAR_24)
   FUNC_0(VAR_26, VAR_14, VAR_32);
  if (VAR_34 && VAR_30 == VAR_25)
   FUNC_0(VAR_26, VAR_20, VAR_32);
  break;
 case 132:
  if (VAR_33 && VAR_30 == VAR_24)
   FUNC_0(VAR_26, VAR_4, VAR_32);
  if (VAR_33 && VAR_30 == VAR_25)
   FUNC_0(VAR_26, VAR_10, VAR_32);
  if (VAR_34 && VAR_30 == VAR_24)
   FUNC_0(VAR_26, VAR_16, VAR_32);
  if (VAR_34 && VAR_30 == VAR_25)
   FUNC_0(VAR_26, VAR_22, VAR_32);
  break;
 case 134:
  if (VAR_33 && VAR_30 == VAR_24)
   FUNC_0(VAR_26, VAR_0, VAR_32);
  if (VAR_33 && VAR_30 == VAR_25)
   FUNC_0(VAR_26, VAR_6, VAR_32);
  if (VAR_34 && VAR_30 == VAR_24)
   FUNC_0(VAR_26, VAR_12, VAR_32);
  if (VAR_34 && VAR_30 == VAR_25)
   FUNC_0(VAR_26, VAR_18, VAR_32);
  break;
 case 131:
  if (VAR_33)
   FUNC_0(VAR_26, VAR_5, VAR_32);
  if (VAR_34)
   FUNC_0(VAR_26, VAR_17, VAR_32);
  break;
 case 130:
  if (VAR_33)
   FUNC_0(VAR_26, VAR_11, VAR_32);
  if (VAR_34)
   FUNC_0(VAR_26, VAR_23, VAR_32);
  break;
 }
}
