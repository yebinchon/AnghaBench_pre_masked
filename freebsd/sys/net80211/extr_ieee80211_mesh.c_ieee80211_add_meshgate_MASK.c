
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_meshgann_ie {int gann_interval; int gann_seq; int gann_addr; int gann_ttl; int gann_hopcount; int gann_flags; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

uint8_t *
FUNC_3(uint8_t *VAR_2, struct ieee80211_meshgann_ie *VAR_3)
{
 *VAR_2++ = VAR_0;
 *VAR_2++ = VAR_1;
 *VAR_2++ = VAR_3->gann_flags;
 *VAR_2++ = VAR_3->gann_hopcount;
 *VAR_2++ = VAR_3->gann_ttl;
 FUNC_2(VAR_2, VAR_3->gann_addr);
 VAR_2 += 6;
 FUNC_1(VAR_2, VAR_3->gann_seq);
 FUNC_0(VAR_2, VAR_3->gann_interval);
 return VAR_2;
}
