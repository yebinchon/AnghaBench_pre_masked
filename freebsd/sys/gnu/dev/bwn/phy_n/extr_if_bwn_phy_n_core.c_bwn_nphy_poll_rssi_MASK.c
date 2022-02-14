
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;
typedef int int8_t ;
typedef int int32_t ;
typedef enum n_rssi_type { ____Placeholder_n_rssi_type } n_rssi_type ;


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
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int,int) ;

__attribute__((used)) static int FUNC_3(struct bwn_mac *VAR_17, enum n_rssi_type VAR_18,
         int32_t *VAR_19, uint8_t VAR_20)
{
 int VAR_21;
 int VAR_22;
 uint16_t VAR_23[9];
 uint16_t VAR_24[2];



 if (VAR_17->mac_phy.rev >= 3) {
  VAR_23[0] = FUNC_0(VAR_17, VAR_0);
  VAR_23[1] = FUNC_0(VAR_17, VAR_1);
  VAR_23[2] = FUNC_0(VAR_17,
      VAR_8);
  VAR_23[3] = FUNC_0(VAR_17,
      VAR_9);
  VAR_23[4] = FUNC_0(VAR_17, VAR_3);
  VAR_23[5] = FUNC_0(VAR_17, VAR_2);
  VAR_23[6] = FUNC_0(VAR_17, VAR_15);
  VAR_23[7] = FUNC_0(VAR_17, VAR_16);
  VAR_23[8] = 0;
 } else {
  VAR_23[0] = FUNC_0(VAR_17, VAR_0);
  VAR_23[1] = FUNC_0(VAR_17, VAR_1);
  VAR_23[2] = FUNC_0(VAR_17, VAR_2);
  VAR_23[3] = FUNC_0(VAR_17, VAR_7);
  VAR_23[4] = FUNC_0(VAR_17, VAR_10);
  VAR_23[5] = FUNC_0(VAR_17, VAR_11);
  VAR_23[6] = FUNC_0(VAR_17, VAR_12);
  VAR_23[7] = 0;
  VAR_23[8] = 0;
 }

 FUNC_2(VAR_17, 5, VAR_18);

 if (VAR_17->mac_phy.rev < 2) {
  VAR_23[8] = FUNC_0(VAR_17, VAR_6);
  FUNC_1(VAR_17, VAR_6, 5);
 }

 for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
  VAR_19[VAR_21] = 0;

 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  if (VAR_17->mac_phy.rev < 2) {
   VAR_24[0] = FUNC_0(VAR_17, VAR_5);
   VAR_24[1] = FUNC_0(VAR_17, VAR_4);
  } else {
   VAR_24[0] = FUNC_0(VAR_17, VAR_13);
   VAR_24[1] = FUNC_0(VAR_17, VAR_14);
  }

  VAR_19[0] += ((int8_t)((VAR_24[0] & 0x3F) << 2)) >> 2;
  VAR_19[1] += ((int8_t)(((VAR_24[0] >> 8) & 0x3F) << 2)) >> 2;
  VAR_19[2] += ((int8_t)((VAR_24[1] & 0x3F) << 2)) >> 2;
  VAR_19[3] += ((int8_t)(((VAR_24[1] >> 8) & 0x3F) << 2)) >> 2;
 }
 VAR_22 = (VAR_19[0] & 0xFF) << 24 | (VAR_19[1] & 0xFF) << 16 |
  (VAR_19[2] & 0xFF) << 8 | (VAR_19[3] & 0xFF);

 if (VAR_17->mac_phy.rev < 2)
  FUNC_1(VAR_17, VAR_6, VAR_23[8]);

 if (VAR_17->mac_phy.rev >= 3) {
  FUNC_1(VAR_17, VAR_0, VAR_23[0]);
  FUNC_1(VAR_17, VAR_1, VAR_23[1]);
  FUNC_1(VAR_17, VAR_8,
    VAR_23[2]);
  FUNC_1(VAR_17, VAR_9,
    VAR_23[3]);
  FUNC_1(VAR_17, VAR_3, VAR_23[4]);
  FUNC_1(VAR_17, VAR_2, VAR_23[5]);
  FUNC_1(VAR_17, VAR_15, VAR_23[6]);
  FUNC_1(VAR_17, VAR_16, VAR_23[7]);
 } else {
  FUNC_1(VAR_17, VAR_0, VAR_23[0]);
  FUNC_1(VAR_17, VAR_1, VAR_23[1]);
  FUNC_1(VAR_17, VAR_2, VAR_23[2]);
  FUNC_1(VAR_17, VAR_7, VAR_23[3]);
  FUNC_1(VAR_17, VAR_10, VAR_23[4]);
  FUNC_1(VAR_17, VAR_11, VAR_23[5]);
  FUNC_1(VAR_17, VAR_12, VAR_23[6]);
 }

 return VAR_22;
}
