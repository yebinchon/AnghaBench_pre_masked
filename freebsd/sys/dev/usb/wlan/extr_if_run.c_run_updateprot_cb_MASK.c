
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct run_softc {int dummy; } ;
struct ieee80211com {scalar_t__ ic_curmode; int ic_flags; scalar_t__ ic_protmode; struct run_softc* ic_softc; } ;
struct TYPE_2__ {int mcs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_0 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_15)
{
 struct ieee80211com *VAR_16 = VAR_15;
 struct run_softc *VAR_17 = VAR_16->ic_softc;
 uint32_t VAR_18;

 VAR_18 = VAR_12 | VAR_9 | VAR_13;

 VAR_18 |= (VAR_16->ic_curmode == VAR_1) ?
     VAR_14[VAR_11].mcs | VAR_6 :
     VAR_14[VAR_10].mcs;


 FUNC_0(VAR_17, VAR_4, VAR_18);
 if (VAR_16->ic_flags & VAR_0) {
  if (VAR_16->ic_protmode == VAR_3)
   VAR_18 |= VAR_8;
  else if (VAR_16->ic_protmode == VAR_2)
   VAR_18 |= VAR_7;
 }
 FUNC_0(VAR_17, VAR_5, VAR_18);
}
