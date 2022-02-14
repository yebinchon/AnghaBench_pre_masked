
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {int iv_flags; int * iv_wpa_ie; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;

uint8_t *
FUNC_1(uint8_t *VAR_1, const struct ieee80211vap *VAR_2)
{
 if (VAR_2->iv_flags & VAR_0 && VAR_2->iv_wpa_ie != ((void*)0))
  return (FUNC_0(VAR_1, VAR_2->iv_wpa_ie));
 else {

  return (VAR_1);
 }
}
