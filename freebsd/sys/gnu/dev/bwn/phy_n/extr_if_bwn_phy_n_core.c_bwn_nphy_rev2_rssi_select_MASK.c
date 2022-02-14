
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_mac {int dummy; } ;
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
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int ,int,int) ;
 int FUNC_3 (int) ;






__attribute__((used)) static void FUNC_4(struct bwn_mac *VAR_11, uint8_t VAR_12,
          enum n_rssi_type VAR_13)
{
 uint16_t VAR_14;
 bool VAR_15 = 0;

 switch (VAR_13) {
 case 129:
 case 128:
 case 131:
  VAR_14 = 0;
  VAR_15 = 1;
  break;
 case 130:
  VAR_14 = 1;
  break;
 case 132:
  VAR_14 = 2;
  break;
 default:
  VAR_14 = 3;
 }

 VAR_14 = (VAR_14 << 12) | (VAR_14 << 14);
 FUNC_2(VAR_11, VAR_0, 0x0FFF, VAR_14);
 FUNC_2(VAR_11, VAR_1, 0x0FFF, VAR_14);

 if (VAR_15) {
  FUNC_2(VAR_11, VAR_9, 0xFFCF,
    (VAR_13 + 1) << 4);
  FUNC_2(VAR_11, VAR_10, 0xFFCF,
    (VAR_13 + 1) << 4);
 }

 if (VAR_12 == 0) {
  FUNC_0(VAR_11, VAR_2, ~0x3000);
  if (VAR_15) {
   FUNC_0(VAR_11, VAR_3,
    ~(VAR_6 |
      VAR_4));
   FUNC_0(VAR_11, VAR_8,
    ~(0x1 << 12 |
      0x1 << 5 |
      0x1 << 1 |
      0x1));
   FUNC_0(VAR_11, VAR_3,
    ~VAR_7);
   FUNC_3(20);
   FUNC_0(VAR_11, VAR_8, ~0x1);
  }
 } else {
  FUNC_1(VAR_11, VAR_2, 0x3000);
  if (VAR_15) {
   FUNC_2(VAR_11, VAR_3,
    ~(VAR_6 |
      VAR_4),
    (VAR_6 |
     VAR_12 << VAR_5));
   FUNC_1(VAR_11, VAR_8,
    (0x1 << 12 |
      0x1 << 5 |
      0x1 << 1 |
      0x1));
   FUNC_1(VAR_11, VAR_3,
    VAR_7);
   FUNC_3(20);
   FUNC_0(VAR_11, VAR_8, ~0x1);
  }
 }
}
