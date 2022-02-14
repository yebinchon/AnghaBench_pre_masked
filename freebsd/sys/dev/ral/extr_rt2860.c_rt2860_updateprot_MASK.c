
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211com {int ic_flags; scalar_t__ ic_protmode; int ic_curchan; } ;
struct rt2860_softc {struct ieee80211com sc_ic; } ;
struct TYPE_2__ {int mcs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rt2860_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static void
FUNC_2(struct rt2860_softc *VAR_13)
{
 struct ieee80211com *VAR_14 = &VAR_13->sc_ic;
 uint32_t VAR_15;

 VAR_15 = VAR_10 | VAR_7 | VAR_11;

 VAR_15 |= FUNC_0(VAR_14->ic_curchan) ?
     VAR_12[VAR_9].mcs :
     VAR_12[VAR_8].mcs;


 FUNC_1(VAR_13, VAR_3, VAR_15);

 if (VAR_14->ic_flags & VAR_0) {
  if (VAR_14->ic_protmode == VAR_2)
   VAR_15 |= VAR_6;
  else if (VAR_14->ic_protmode == VAR_1)
   VAR_15 |= VAR_5;
 }
 FUNC_1(VAR_13, VAR_4, VAR_15);
}
