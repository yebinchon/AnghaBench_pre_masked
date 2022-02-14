
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {unsigned int pll_coef_idx; int pll_coef_bit; int pll_nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3)
{
 struct alc_spec *VAR_4 = VAR_3->spec;
 unsigned int VAR_5;

 if (!VAR_4->pll_nid)
  return;
 FUNC_1(VAR_3, VAR_4->pll_nid, 0, VAR_1,
       VAR_4->pll_coef_idx);
 VAR_5 = FUNC_0(VAR_3, VAR_4->pll_nid, 0,
     VAR_0, 0);
 FUNC_1(VAR_3, VAR_4->pll_nid, 0, VAR_1,
       VAR_4->pll_coef_idx);
 FUNC_1(VAR_3, VAR_4->pll_nid, 0, VAR_2,
       VAR_5 & ~(1 << VAR_4->pll_coef_bit));
}
