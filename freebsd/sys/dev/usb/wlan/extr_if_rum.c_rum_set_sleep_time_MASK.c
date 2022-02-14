
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint16_t ;
struct ieee80211com {int ic_lintval; } ;
struct rum_softc {int sc_sleep_time; struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (struct rum_softc*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (struct rum_softc*,int ,int,int) ;

__attribute__((used)) static int
FUNC_5(struct rum_softc *VAR_5, uint16_t VAR_6)
{
 struct ieee80211com *VAR_7 = &VAR_5->sc_ic;
 usb_error_t VAR_8;
 int VAR_9, VAR_10;

 FUNC_3(VAR_5);

 VAR_9 = VAR_7->ic_lintval / VAR_6;
 VAR_10 = VAR_7->ic_lintval % VAR_6;

 if (VAR_9 > VAR_3)
  VAR_9 = VAR_3;
 if (VAR_10 > VAR_2)
  VAR_10 = VAR_2;

 VAR_8 = FUNC_4(VAR_5, VAR_1,
     FUNC_2(VAR_9) |
     FUNC_1(VAR_10),
     FUNC_2(VAR_3) |
     FUNC_1(VAR_2));

 if (VAR_8 != VAR_4)
  return (VAR_0);

 VAR_5->sc_sleep_time = FUNC_0(VAR_9 * VAR_6 + VAR_10);

 return (0);
}
