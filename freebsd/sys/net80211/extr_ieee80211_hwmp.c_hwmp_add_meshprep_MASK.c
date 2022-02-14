
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_meshprep_ie {int prep_flags; int prep_origseq; int prep_origaddr; int prep_metric; int prep_lifetime; int prep_target_ext_addr; int prep_targetseq; int prep_targetaddr; int prep_ttl; int prep_hopcount; int prep_len; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint8_t *
FUNC_2(uint8_t *VAR_2, const struct ieee80211_meshprep_ie *VAR_3)
{
 *VAR_2++ = VAR_0;
 *VAR_2++ = VAR_3->prep_len;
 *VAR_2++ = VAR_3->prep_flags;
 *VAR_2++ = VAR_3->prep_hopcount;
 *VAR_2++ = VAR_3->prep_ttl;
 FUNC_1(VAR_2, VAR_3->prep_targetaddr); VAR_2 += 6;
 FUNC_0(VAR_2, VAR_3->prep_targetseq);
 if (VAR_3->prep_flags & VAR_1) {
  FUNC_1(VAR_2, VAR_3->prep_target_ext_addr);
  VAR_2 += 6;
 }
 FUNC_0(VAR_2, VAR_3->prep_lifetime);
 FUNC_0(VAR_2, VAR_3->prep_metric);
 FUNC_1(VAR_2, VAR_3->prep_origaddr); VAR_2 += 6;
 FUNC_0(VAR_2, VAR_3->prep_origseq);
 return VAR_2;
}
