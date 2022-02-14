
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_meshpreq_ie {int preq_flags; int preq_tcount; int preq_metric; int preq_lifetime; int preq_orig_ext_addr; int preq_origseq; int preq_origaddr; int preq_id; int preq_ttl; int preq_hopcount; int preq_len; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static uint8_t *
FUNC_5(uint8_t *VAR_2, const struct ieee80211_meshpreq_ie *VAR_3)
{
 int VAR_4;

 *VAR_2++ = VAR_0;
 *VAR_2++ = VAR_3->preq_len;
 *VAR_2++ = VAR_3->preq_flags;
 *VAR_2++ = VAR_3->preq_hopcount;
 *VAR_2++ = VAR_3->preq_ttl;
 FUNC_0(VAR_2, VAR_3->preq_id);
 FUNC_1(VAR_2, VAR_3->preq_origaddr); VAR_2 += 6;
 FUNC_0(VAR_2, VAR_3->preq_origseq);
 if (VAR_3->preq_flags & VAR_1) {
  FUNC_1(VAR_2, VAR_3->preq_orig_ext_addr);
  VAR_2 += 6;
 }
 FUNC_0(VAR_2, VAR_3->preq_lifetime);
 FUNC_0(VAR_2, VAR_3->preq_metric);
 *VAR_2++ = VAR_3->preq_tcount;
 for (VAR_4 = 0; VAR_4 < VAR_3->preq_tcount; VAR_4++) {
  *VAR_2++ = FUNC_3(VAR_4);
  FUNC_1(VAR_2, FUNC_2(VAR_4));
  VAR_2 += 6;
  FUNC_0(VAR_2, FUNC_4(VAR_4));
 }
 return VAR_2;
}
