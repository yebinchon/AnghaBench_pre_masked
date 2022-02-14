
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_qosframe {int* i_qos; } ;
struct ieee80211_frame_addr4 {int* i_fc; int i_addr4; int i_addr3; int i_addr1; int i_addr2; } ;
struct ieee80211_frame {int dummy; } ;


 int FUNC_0 (int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(const struct ieee80211_frame *VAR_4, uint8_t VAR_5[16])
{
 const struct ieee80211_frame_addr4 *VAR_6 =
  (const struct ieee80211_frame_addr4 *) VAR_4;

 switch (VAR_6->i_fc[1] & VAR_2) {
 case 129:
  FUNC_0(VAR_5, VAR_6->i_addr1);
  FUNC_0(VAR_5 + VAR_0, VAR_6->i_addr2);
  break;
 case 128:
  FUNC_0(VAR_5, VAR_6->i_addr3);
  FUNC_0(VAR_5 + VAR_0, VAR_6->i_addr2);
  break;
 case 130:
  FUNC_0(VAR_5, VAR_6->i_addr1);
  FUNC_0(VAR_5 + VAR_0, VAR_6->i_addr3);
  break;
 case 131:
  FUNC_0(VAR_5, VAR_6->i_addr3);
  FUNC_0(VAR_5 + VAR_0, VAR_6->i_addr4);
  break;
 }

 if (VAR_6->i_fc[0] & VAR_1) {
  const struct ieee80211_qosframe *VAR_7 =
   (const struct ieee80211_qosframe *) VAR_6;
  VAR_5[12] = VAR_7->i_qos[0] & VAR_3;
 } else
  VAR_5[12] = 0;
 VAR_5[13] = VAR_5[14] = VAR_5[15] = 0;
}
