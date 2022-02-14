
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {scalar_t__ ic_countryie_chan; scalar_t__ ic_bsschan; int * ic_countryie; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (struct ieee80211com*) ;

__attribute__((used)) static uint8_t *
FUNC_3(uint8_t *VAR_1, struct ieee80211com *VAR_2)
{

 if (VAR_2->ic_countryie == ((void*)0) ||
     VAR_2->ic_countryie_chan != VAR_2->ic_bsschan) {





  if (VAR_2->ic_countryie != ((void*)0))
   FUNC_0(VAR_2->ic_countryie, VAR_0);
  VAR_2->ic_countryie = FUNC_2(VAR_2);
  if (VAR_2->ic_countryie == ((void*)0))
   return VAR_1;
  VAR_2->ic_countryie_chan = VAR_2->ic_bsschan;
 }
 return FUNC_1(VAR_1, VAR_2->ic_countryie);
}
