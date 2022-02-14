
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rt2560_softc {int dummy; } ;
struct ieee80211com {scalar_t__ ic_curmode; struct rt2560_softc* ic_softc; } ;


 int FUNC_0 (struct rt2560_softc*,char*,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct ieee80211com*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct rt2560_softc*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct rt2560_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_7)
{
 struct rt2560_softc *VAR_8 = VAR_7->ic_softc;
 uint8_t VAR_9;
 uint16_t VAR_10, VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14;


 VAR_9 = FUNC_2(VAR_7);
 VAR_10 = VAR_2 - VAR_6;
 VAR_11 = VAR_10 + VAR_9;
 VAR_12 = FUNC_1(VAR_10, VAR_9);
 VAR_13 = (VAR_7->ic_curmode == VAR_1) ? 364 : 60;

 VAR_14 = FUNC_3(VAR_8, VAR_3);
 VAR_14 = (VAR_14 & ~0x1f00) | VAR_9 << 8;
 FUNC_4(VAR_8, VAR_3, VAR_14);

 VAR_14 = VAR_11 << 16 | VAR_10;
 FUNC_4(VAR_8, VAR_4, VAR_14);

 VAR_14 = VAR_13 << 16 | VAR_12;
 FUNC_4(VAR_8, VAR_5, VAR_14);

 FUNC_0(VAR_8, "setting slottime to %uus\n", VAR_9);
}
