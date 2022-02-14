
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct iwm_softc {int dummy; } ;
struct ieee80211_rateset {int dummy; } ;
struct TYPE_2__ {struct ieee80211_rateset ni_rates; } ;
struct iwm_node {TYPE_1__ in_ni; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_rateset*,int) ;

__attribute__((used)) static void
FUNC_2(struct iwm_softc *VAR_10, int VAR_11,
 int *VAR_12, int *VAR_13, struct iwm_node *VAR_14)
{
 int VAR_15 = 100;
 int VAR_16 = 100;
 uint8_t VAR_17 = 0;
 uint8_t VAR_18 = 0;
 int VAR_19;
 struct ieee80211_rateset *VAR_20 = &VAR_14->in_ni.ni_rates;

 if (VAR_11) {
  for (VAR_19 = VAR_1; VAR_19 <= VAR_3; VAR_19++) {
   if ((FUNC_1(VAR_20, VAR_19) & VAR_0) == 0)
    continue;
   VAR_17 |= (1 << VAR_19);
   if (VAR_16 > VAR_19)
    VAR_16 = VAR_19;
  }
 }
 for (VAR_19 = VAR_2; VAR_19 <= VAR_4; VAR_19++) {
  if ((FUNC_1(VAR_20, VAR_19) & VAR_0) == 0)
   continue;
  VAR_18 |= (1 << (VAR_19 - VAR_2));
  if (VAR_15 > VAR_19)
   VAR_15 = VAR_19;
 }
 if (VAR_7 < VAR_15)
  VAR_18 |= FUNC_0(24) >> VAR_2;
 if (VAR_6 < VAR_15)
  VAR_18 |= FUNC_0(12) >> VAR_2;

 VAR_18 |= FUNC_0(6) >> VAR_2;
 if (VAR_5 < VAR_16)
  VAR_17 |= FUNC_0(11) >> VAR_1;
 if (VAR_9 < VAR_16)
  VAR_17 |= FUNC_0(5) >> VAR_1;
 if (VAR_8 < VAR_16)
  VAR_17 |= FUNC_0(2) >> VAR_1;

 VAR_17 |= FUNC_0(1) >> VAR_1;

 *VAR_12 = VAR_17;
 *VAR_13 = VAR_18;
}
