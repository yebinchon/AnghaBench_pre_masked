
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_frame {int dummy; } ;


 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_frame const*,int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_7,
    const struct ieee80211_frame *VAR_8, const uint8_t *VAR_9)
{
 int VAR_10 = -1;
 const uint8_t *VAR_11 = VAR_9;
 uint8_t VAR_12 = VAR_11[VAR_4];
 int VAR_13;

 if(VAR_12 > VAR_3) {
  FUNC_0(VAR_7,
      VAR_5 | VAR_6,
      VAR_8, ((void*)0), "PERR with wrong number of destionat (>19), %u",
      VAR_12);
  return (-1);
 }

 VAR_11 += VAR_4 + 1;

 for(VAR_13 = 0; VAR_13<VAR_12; VAR_13++) {
  if ((*VAR_11) & VAR_2)
   VAR_11 += VAR_1;
  else
   VAR_11 += VAR_0;
 }

 VAR_10 = (VAR_11 - VAR_9) - 2;
 if(VAR_10 != VAR_9[1]) {
  FUNC_0(VAR_7,
      VAR_5 | VAR_6,
      VAR_8, ((void*)0), "%s", "PERR with wrong len");
  return (-1);
 }
 return VAR_12;
}
