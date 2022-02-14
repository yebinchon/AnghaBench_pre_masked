
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2661_softc {scalar_t__ ext_5ghz_lna; scalar_t__ ext_2ghz_lna; } ;
struct ieee80211_channel {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (struct rt2661_softc*,int ) ;
 int FUNC_3 (struct rt2661_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct rt2661_softc*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct rt2661_softc *VAR_3, struct ieee80211_channel *VAR_4)
{
 uint8_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11;


 VAR_5 = 0x20; VAR_7 = 0x48; VAR_10 = 0x2c;
 VAR_6 = 0x50; VAR_8 = 0x48; VAR_9 = 0x48;
 if (FUNC_1(VAR_4)) {
  VAR_5 += 0x08; VAR_7 += 0x10; VAR_10 += 0x0c;
  VAR_6 += 0x10; VAR_8 += 0x10; VAR_9 += 0x10;
 }
 if ((FUNC_0(VAR_4) && VAR_3->ext_2ghz_lna) ||
     (FUNC_1(VAR_4) && VAR_3->ext_5ghz_lna)) {
  VAR_5 += 0x10; VAR_7 += 0x10; VAR_10 += 0x10;
 }

 FUNC_4(VAR_3, 17, VAR_5);
 FUNC_4(VAR_3, 96, VAR_7);
 FUNC_4(VAR_3, 104, VAR_10);

 if ((FUNC_0(VAR_4) && VAR_3->ext_2ghz_lna) ||
     (FUNC_1(VAR_4) && VAR_3->ext_5ghz_lna)) {
  FUNC_4(VAR_3, 75, 0x80);
  FUNC_4(VAR_3, 86, 0x80);
  FUNC_4(VAR_3, 88, 0x80);
 }

 FUNC_4(VAR_3, 35, VAR_6);
 FUNC_4(VAR_3, 97, VAR_8);
 FUNC_4(VAR_3, 98, VAR_9);

 VAR_11 = FUNC_2(VAR_3, VAR_2);
 VAR_11 &= ~(VAR_0 | VAR_1);
 if (FUNC_0(VAR_4))
  VAR_11 |= VAR_0;
 else
  VAR_11 |= VAR_1;
 FUNC_3(VAR_3, VAR_2, VAR_11);
}
