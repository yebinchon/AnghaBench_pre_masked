
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ieee80211com {int ic_cryptocaps; } ;
struct ndis_softc {struct ieee80211com ndis_ic; } ;
typedef int save ;
typedef int arg ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ndis_softc*,int ,scalar_t__*,int*) ;
 int FUNC_2 (struct ndis_softc*,int ,scalar_t__*,int*) ;

__attribute__((used)) static int
FUNC_3(struct ndis_softc *VAR_13, int VAR_14)
{
 struct ieee80211com *VAR_15 = &VAR_13->ndis_ic;
 int VAR_16 = 0, VAR_17;
 uint32_t VAR_18, VAR_19;

 VAR_17 = sizeof(VAR_18);

 if (VAR_14 == VAR_12 || VAR_14 == VAR_11) {
  if (!(VAR_15->ic_cryptocaps & VAR_4))
   return (VAR_1);
  VAR_18 = VAR_5;
 }

 if (VAR_14 == VAR_10) {
  if (!(VAR_15->ic_cryptocaps & VAR_3))
   return (VAR_1);
  VAR_18 = VAR_6;
 }

 if (VAR_14 == VAR_9) {
  if (!(VAR_15->ic_cryptocaps & VAR_2))
   return (VAR_1);
  VAR_18 = VAR_7;
 }

 FUNC_0(("Setting cipher to %d\n", VAR_18));
 VAR_19 = VAR_18;
 VAR_16 = FUNC_2(VAR_13, VAR_8, &VAR_18, &VAR_17);

 if (VAR_16)
  return (VAR_16);



 VAR_17 = sizeof(VAR_19);
 VAR_16 = FUNC_1(VAR_13, VAR_8, &VAR_18, &VAR_17);

 if (VAR_16 != 0 || VAR_18 != VAR_19)
  return (VAR_0);

 return (0);
}
