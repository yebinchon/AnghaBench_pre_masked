
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct cpack_state {int dummy; } ;
typedef int netdissect_options ;
typedef enum ieee80211_radiotap_type { ____Placeholder_ieee80211_radiotap_type } ieee80211_radiotap_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct cpack_state*,int,int *,int) ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_1,
                            struct cpack_state *VAR_2, uint8_t *VAR_3,
                            uint32_t VAR_4, int VAR_5)
{





 uint32_t VAR_6, VAR_7;
 int VAR_8;
 enum ieee80211_radiotap_type VAR_9;
 int VAR_10;

 for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_7) {



  VAR_7 = VAR_6 & (VAR_6 - 1);






  VAR_8 = (((VAR_6 ^ VAR_7) >> 16) ? 16 + ((((VAR_6 ^ VAR_7) >> 16) >> 8) ? 8 + (((((VAR_6 ^ VAR_7) >> 16) >> 8) >> 4) ? 4 + ((((((VAR_6 ^ VAR_7) >> 16) >> 8) >> 4) >> 2) ? 2 + (((((((VAR_6 ^ VAR_7) >> 16) >> 8) >> 4) >> 2) & 2) ? 1 : 0) : (((((((VAR_6 ^ VAR_7) >> 16) >> 8) >> 4)) & 2) ? 1 : 0)) : ((((((VAR_6 ^ VAR_7) >> 16) >> 8)) >> 2) ? 2 + (((((((VAR_6 ^ VAR_7) >> 16) >> 8)) >> 2) & 2) ? 1 : 0) : (((((((VAR_6 ^ VAR_7) >> 16) >> 8))) & 2) ? 1 : 0))) : (((((VAR_6 ^ VAR_7) >> 16)) >> 4) ? 4 + ((((((VAR_6 ^ VAR_7) >> 16)) >> 4) >> 2) ? 2 + (((((((VAR_6 ^ VAR_7) >> 16)) >> 4) >> 2) & 2) ? 1 : 0) : (((((((VAR_6 ^ VAR_7) >> 16)) >> 4)) & 2) ? 1 : 0)) : ((((((VAR_6 ^ VAR_7) >> 16))) >> 2) ? 2 + (((((((VAR_6 ^ VAR_7) >> 16))) >> 2) & 2) ? 1 : 0) : (((((((VAR_6 ^ VAR_7) >> 16)))) & 2) ? 1 : 0)))) : ((((VAR_6 ^ VAR_7)) >> 8) ? 8 + (((((VAR_6 ^ VAR_7)) >> 8) >> 4) ? 4 + ((((((VAR_6 ^ VAR_7)) >> 8) >> 4) >> 2) ? 2 + (((((((VAR_6 ^ VAR_7)) >> 8) >> 4) >> 2) & 2) ? 1 : 0) : (((((((VAR_6 ^ VAR_7)) >> 8) >> 4)) & 2) ? 1 : 0)) : ((((((VAR_6 ^ VAR_7)) >> 8)) >> 2) ? 2 + (((((((VAR_6 ^ VAR_7)) >> 8)) >> 2) & 2) ? 1 : 0) : (((((((VAR_6 ^ VAR_7)) >> 8))) & 2) ? 1 : 0))) : (((((VAR_6 ^ VAR_7))) >> 4) ? 4 + ((((((VAR_6 ^ VAR_7))) >> 4) >> 2) ? 2 + (((((((VAR_6 ^ VAR_7))) >> 4) >> 2) & 2) ? 1 : 0) : (((((((VAR_6 ^ VAR_7))) >> 4)) & 2) ? 1 : 0)) : ((((((VAR_6 ^ VAR_7)))) >> 2) ? 2 + (((((((VAR_6 ^ VAR_7)))) >> 2) & 2) ? 1 : 0) : (((((((VAR_6 ^ VAR_7))))) & 2) ? 1 : 0)))));





  if (VAR_8 >= VAR_0)
   break;




  VAR_9 = (enum ieee80211_radiotap_type)(VAR_5 + VAR_8);

  VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_9, VAR_3, VAR_4);
  if (VAR_10 != 0)
   return VAR_10;
 }

 return 0;
}
