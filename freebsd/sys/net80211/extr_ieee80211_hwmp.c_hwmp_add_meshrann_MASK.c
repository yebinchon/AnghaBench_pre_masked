
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_meshrann_ie {int rann_metric; int rann_interval; int rann_seq; int rann_addr; int rann_ttl; int rann_hopcount; int rann_flags; int rann_len; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static uint8_t *
FUNC_2(uint8_t *VAR_1, const struct ieee80211_meshrann_ie *VAR_2)
{
 *VAR_1++ = VAR_0;
 *VAR_1++ = VAR_2->rann_len;
 *VAR_1++ = VAR_2->rann_flags;
 *VAR_1++ = VAR_2->rann_hopcount;
 *VAR_1++ = VAR_2->rann_ttl;
 FUNC_1(VAR_1, VAR_2->rann_addr); VAR_1 += 6;
 FUNC_0(VAR_1, VAR_2->rann_seq);
 FUNC_0(VAR_1, VAR_2->rann_interval);
 FUNC_0(VAR_1, VAR_2->rann_metric);
 return VAR_1;
}
