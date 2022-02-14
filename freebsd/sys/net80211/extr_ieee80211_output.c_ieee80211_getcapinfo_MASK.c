
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211vap {scalar_t__ iv_opmode; int iv_flags; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_flags; } ;
struct ieee80211_channel {int dummy; } ;


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
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int,char*) ;

uint16_t
FUNC_3(struct ieee80211vap *VAR_13, struct ieee80211_channel *VAR_14)
{
 struct ieee80211com *VAR_15 = VAR_13->iv_ic;
 uint16_t VAR_16;

 FUNC_2(VAR_13->iv_opmode != VAR_12, ("station mode"));

 if (VAR_13->iv_opmode == VAR_10)
  VAR_16 = VAR_0;
 else if (VAR_13->iv_opmode == VAR_11)
  VAR_16 = VAR_1;
 else
  VAR_16 = 0;
 if (VAR_13->iv_flags & VAR_7)
  VAR_16 |= VAR_2;
 if ((VAR_15->ic_flags & VAR_8) &&
     FUNC_0(VAR_14))
  VAR_16 |= VAR_3;
 if (VAR_15->ic_flags & VAR_9)
  VAR_16 |= VAR_4;
 if (FUNC_1(VAR_14) && (VAR_13->iv_flags & VAR_6))
  VAR_16 |= VAR_5;
 return VAR_16;
}
