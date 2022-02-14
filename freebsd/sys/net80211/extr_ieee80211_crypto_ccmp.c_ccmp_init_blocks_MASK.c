
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u_int64_t ;
struct ieee80211_qosframe_addr4 {int* i_qos; } ;
struct ieee80211_qosframe {int* i_qos; } ;
struct ieee80211_frame_addr4 {int i_addr4; } ;
struct ieee80211_frame {int* i_fc; int* i_seq; int i_addr1; int i_addr2; } ;
typedef int rijndael_ctx ;


 size_t VAR_0 ;
 int FUNC_0 (int*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ieee80211_frame*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct ieee80211_frame*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int *,int*,int*) ;
 int FUNC_5 (int*,int*,size_t) ;

__attribute__((used)) static void
FUNC_6(rijndael_ctx *VAR_3, struct ieee80211_frame *VAR_4,
 u_int64_t VAR_5, size_t VAR_6,
 uint8_t VAR_7[VAR_0], uint8_t VAR_8[2 * VAR_0],
 uint8_t VAR_9[VAR_0], uint8_t VAR_10[VAR_0])
{







 VAR_7[0] = 0x59;

 FUNC_0(VAR_7 + 2, VAR_4->i_addr2);
 VAR_7[8] = VAR_5 >> 40;
 VAR_7[9] = VAR_5 >> 32;
 VAR_7[10] = VAR_5 >> 24;
 VAR_7[11] = VAR_5 >> 16;
 VAR_7[12] = VAR_5 >> 8;
 VAR_7[13] = VAR_5 >> 0;
 VAR_7[14] = (VAR_6 >> 8) & 0xff;
 VAR_7[15] = VAR_6 & 0xff;
 VAR_8[0] = 0;

 VAR_8[2] = VAR_4->i_fc[0] & 0x8f;
 VAR_8[3] = VAR_4->i_fc[1] & 0xc7;

 FUNC_3(VAR_8 + 4, VAR_4->i_addr1, 3 * VAR_1);
 VAR_8[22] = VAR_4->i_seq[0] & VAR_2;
 VAR_8[23] = 0;
 if (FUNC_1(VAR_4)) {
  FUNC_0(VAR_8 + 24,
   ((struct ieee80211_frame_addr4 *)VAR_4)->i_addr4);
  if (FUNC_0(VAR_4)) {
   struct ieee80211_qosframe_addr4 *VAR_11 =
    (struct ieee80211_qosframe_addr4 *) VAR_4;
   VAR_8[30] = VAR_11->i_qos[0] & 0x0f;
   VAR_8[31] = 0;
   VAR_7[1] = VAR_8[30];
   VAR_8[1] = 22 + VAR_1 + 2;
  } else {
   *(uint16_t *)&VAR_8[30] = 0;
   VAR_7[1] = 0;
   VAR_8[1] = 22 + VAR_1;
  }
 } else {
  if (FUNC_0(VAR_4)) {
   struct ieee80211_qosframe *VAR_12 =
    (struct ieee80211_qosframe*) VAR_4;
   VAR_8[24] = VAR_12->i_qos[0] & 0x0f;
   VAR_8[25] = 0;
   VAR_7[1] = VAR_8[24];
   VAR_8[1] = 22 + 2;
  } else {
   *(uint16_t *)&VAR_8[24] = 0;
   VAR_7[1] = 0;
   VAR_8[1] = 22;
  }
  *(uint16_t *)&VAR_8[26] = 0;
  *(uint32_t *)&VAR_8[28] = 0;
 }


 FUNC_4(VAR_3, VAR_7, VAR_9);
 FUNC_5(VAR_9, VAR_8, VAR_0);
 FUNC_4(VAR_3, VAR_9, VAR_9);
 FUNC_5(VAR_9, &VAR_8[VAR_0], VAR_0);
 FUNC_4(VAR_3, VAR_9, VAR_9);
 VAR_7[0] &= 0x07;
 VAR_7[14] = VAR_7[15] = 0;
 FUNC_4(VAR_3, VAR_7, VAR_10);

}
