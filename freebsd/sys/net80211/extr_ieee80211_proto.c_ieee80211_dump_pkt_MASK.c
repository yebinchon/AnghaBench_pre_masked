
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {int dummy; } ;
struct ieee80211_qosframe {int* i_qos; } ;
struct ieee80211_frame {int* i_fc; int const* i_addr2; int const* i_addr1; int const* i_addr3; } ;



 int VAR_0 ;



 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ieee80211_frame const*) ;
 int VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (int const*) ;
 int FUNC_2 (struct ieee80211com*,struct ieee80211_frame const*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(struct ieee80211com *VAR_7,
 const uint8_t *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 const struct ieee80211_frame *VAR_12;
 int VAR_13;

 VAR_12 = (const struct ieee80211_frame *)VAR_8;
 switch (VAR_12->i_fc[1] & VAR_1) {
 case 129:
  FUNC_4("NODS %s", FUNC_1(VAR_12->i_addr2));
  FUNC_4("->%s", FUNC_1(VAR_12->i_addr1));
  FUNC_4("(%s)", FUNC_1(VAR_12->i_addr3));
  break;
 case 128:
  FUNC_4("TODS %s", FUNC_1(VAR_12->i_addr2));
  FUNC_4("->%s", FUNC_1(VAR_12->i_addr3));
  FUNC_4("(%s)", FUNC_1(VAR_12->i_addr1));
  break;
 case 130:
  FUNC_4("FRDS %s", FUNC_1(VAR_12->i_addr3));
  FUNC_4("->%s", FUNC_1(VAR_12->i_addr1));
  FUNC_4("(%s)", FUNC_1(VAR_12->i_addr2));
  break;
 case 131:
  FUNC_4("DSDS %s", FUNC_1((const uint8_t *)&VAR_12[1]));
  FUNC_4("->%s", FUNC_1(VAR_12->i_addr3));
  FUNC_4("(%s", FUNC_1(VAR_12->i_addr2));
  FUNC_4("->%s)", FUNC_1(VAR_12->i_addr1));
  break;
 }
 switch (VAR_12->i_fc[0] & VAR_0) {
 case 133:
  FUNC_4(" data");
  break;
 case 132:
  FUNC_4(" %s", FUNC_3(VAR_12->i_fc[0]));
  break;
 default:
  FUNC_4(" type#%d", VAR_12->i_fc[0] & VAR_0);
  break;
 }
 if (FUNC_0(VAR_12)) {
  const struct ieee80211_qosframe *VAR_14 =
   (const struct ieee80211_qosframe *)VAR_8;
  FUNC_4(" QoS [TID %u%s]", VAR_14->i_qos[0] & VAR_4,
   VAR_14->i_qos[0] & VAR_3 ? " ACM" : "");
 }
 if (VAR_12->i_fc[1] & VAR_2) {
  int VAR_15;

  VAR_15 = FUNC_2(VAR_7, VAR_12);
  FUNC_4(" WEP [IV %.02x %.02x %.02x",
   VAR_8[VAR_15+0], VAR_8[VAR_15+1], VAR_8[VAR_15+2]);
  if (VAR_8[VAR_15+VAR_6] & VAR_5)
   FUNC_4(" %.02x %.02x %.02x",
    VAR_8[VAR_15+4], VAR_8[VAR_15+5], VAR_8[VAR_15+6]);
  FUNC_4(" KID %u]", VAR_8[VAR_15+VAR_6] >> 6);
 }
 if (VAR_10 >= 0)
  FUNC_4(" %dM", VAR_10 / 2);
 if (VAR_11 >= 0)
  FUNC_4(" +%d", VAR_11);
 FUNC_4("\n");
 if (VAR_9 > 0) {
  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
   if ((VAR_13 & 1) == 0)
    FUNC_4(" ");
   FUNC_4("%02x", VAR_8[VAR_13]);
  }
  FUNC_4("\n");
 }
}
