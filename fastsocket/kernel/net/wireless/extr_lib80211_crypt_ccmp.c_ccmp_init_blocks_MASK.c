
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hdr {int* addr4; int* addr2; int* addr1; int seq_ctrl; int frame_control; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_cipher*,int*,int*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int*,int*,int) ;

__attribute__((used)) static void FUNC_6(struct crypto_cipher *VAR_3,
        struct ieee80211_hdr *VAR_4,
        u8 * VAR_5, size_t VAR_6, u8 * VAR_7, u8 * VAR_8, u8 * VAR_9)
{
 u8 *VAR_10, VAR_11 = 0;
 size_t VAR_12;
 int VAR_13, VAR_14;
 u8 VAR_15[2 * VAR_0];

 VAR_13 = FUNC_0(VAR_4->frame_control);
 VAR_14 = FUNC_1(VAR_4->frame_control);

 VAR_12 = 22;
 if (VAR_13)
  VAR_12 += 6;
 if (VAR_14) {
  VAR_10 = (u8 *) & VAR_4->addr4;
  if (VAR_13)
   VAR_10 += 6;
  VAR_11 = *VAR_10 & 0x0f;
  VAR_12 += 2;
 }






 VAR_7[0] = 0x59;
 VAR_7[1] = VAR_11;
 FUNC_3(VAR_7 + 2, VAR_4->addr2, VAR_2);
 FUNC_3(VAR_7 + 8, VAR_5, VAR_1);
 VAR_7[14] = (VAR_6 >> 8) & 0xff;
 VAR_7[15] = VAR_6 & 0xff;
 VAR_10 = (u8 *) VAR_4;
 VAR_15[0] = 0;
 VAR_15[1] = VAR_12 & 0xff;
 VAR_15[2] = VAR_10[0] & 0x8f;
 VAR_15[3] = VAR_10[1] & 0xc7;
 FUNC_3(VAR_15 + 4, VAR_4->addr1, 3 * VAR_2);
 VAR_10 = (u8 *) & VAR_4->seq_ctrl;
 VAR_15[22] = VAR_10[0] & 0x0f;
 VAR_15[23] = 0;
 FUNC_4(VAR_15 + 24, 0, 8);
 if (VAR_13)
  FUNC_3(VAR_15 + 24, VAR_4->addr4, VAR_2);
 if (VAR_14) {
  VAR_15[VAR_13 ? 30 : 24] = VAR_11;

 }


 FUNC_2(VAR_3, VAR_7, VAR_8);
 FUNC_5(VAR_8, VAR_15, VAR_0);
 FUNC_2(VAR_3, VAR_8, VAR_8);
 FUNC_5(VAR_8, &VAR_15[VAR_0], VAR_0);
 FUNC_2(VAR_3, VAR_8, VAR_8);
 VAR_7[0] &= 0x07;
 VAR_7[14] = VAR_7[15] = 0;
 FUNC_2(VAR_3, VAR_7, VAR_9);
}
