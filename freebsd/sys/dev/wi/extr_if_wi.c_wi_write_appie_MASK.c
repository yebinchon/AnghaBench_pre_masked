
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct wi_softc {int dummy; } ;
struct ieee80211_appie {int ie_len; int ie_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct wi_softc*,int,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct wi_softc *VAR_1, int VAR_2, const struct ieee80211_appie *VAR_3)
{

 char VAR_4[sizeof(uint16_t) + 40];

 if (VAR_3->ie_len > 40)
  return VAR_0;

 *(uint16_t *) VAR_4 = FUNC_0(VAR_3->ie_len);
 FUNC_1(VAR_4 + sizeof(uint16_t), VAR_3->ie_data, VAR_3->ie_len);
 return FUNC_2(VAR_1, VAR_2, VAR_4, VAR_3->ie_len + sizeof(uint16_t));
}
