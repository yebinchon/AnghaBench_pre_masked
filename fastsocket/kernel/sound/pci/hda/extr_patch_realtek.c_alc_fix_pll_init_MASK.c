
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {unsigned int pll_coef_idx; unsigned int pll_coef_bit; int pll_nid; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0, hda_nid_t VAR_1,
        unsigned int VAR_2, unsigned int VAR_3)
{
 struct alc_spec *VAR_4 = VAR_0->spec;
 VAR_4->pll_nid = VAR_1;
 VAR_4->pll_coef_idx = VAR_2;
 VAR_4->pll_coef_bit = VAR_3;
 FUNC_0(VAR_0);
}
