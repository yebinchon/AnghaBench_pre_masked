
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_meshperr_ie {int perr_ndests; int perr_ttl; int perr_len; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static uint8_t *
FUNC_8(uint8_t *VAR_2, const struct ieee80211_meshperr_ie *VAR_3)
{
 int VAR_4;

 *VAR_2++ = VAR_0;
 *VAR_2++ = VAR_3->perr_len;
 *VAR_2++ = VAR_3->perr_ttl;
 *VAR_2++ = VAR_3->perr_ndests;
 for (VAR_4 = 0; VAR_4 < VAR_3->perr_ndests; VAR_4++) {
  *VAR_2++ = FUNC_4(VAR_4);
  FUNC_2(VAR_2, FUNC_3(VAR_4));
  VAR_2 += 6;
  FUNC_1(VAR_2, FUNC_6(VAR_4));
  if (FUNC_4(VAR_4) & VAR_1) {
   FUNC_2(VAR_2, FUNC_7(VAR_4));
   VAR_2 += 6;
  }
  FUNC_0(VAR_2, FUNC_5(VAR_4));
 }
 return VAR_2;
}
