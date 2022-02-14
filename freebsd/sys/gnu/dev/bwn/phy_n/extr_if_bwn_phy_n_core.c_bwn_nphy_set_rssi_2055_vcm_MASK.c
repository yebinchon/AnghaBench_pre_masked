
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bwn_mac {int dummy; } ;
typedef enum n_rssi_type { ____Placeholder_n_rssi_type } n_rssi_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ,int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct bwn_mac *VAR_5,
           enum n_rssi_type VAR_6, uint8_t *VAR_7)
{
 int VAR_8;
 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  if (VAR_6 == VAR_4) {
   if (VAR_8 == 0) {
    FUNC_0(VAR_5, VAR_0,
        0xFC, VAR_7[0]);
    FUNC_0(VAR_5, VAR_1,
        0xFC, VAR_7[1]);
   } else {
    FUNC_0(VAR_5, VAR_2,
        0xFC, VAR_7[2 * VAR_8]);
    FUNC_0(VAR_5, VAR_3,
        0xFC, VAR_7[2 * VAR_8 + 1]);
   }
  } else {
   if (VAR_8 == 0)
    FUNC_0(VAR_5, VAR_1,
        0xF3, VAR_7[0] << 2);
   else
    FUNC_0(VAR_5, VAR_3,
        0xF3, VAR_7[2 * VAR_8 + 1] << 2);
  }
 }
}
