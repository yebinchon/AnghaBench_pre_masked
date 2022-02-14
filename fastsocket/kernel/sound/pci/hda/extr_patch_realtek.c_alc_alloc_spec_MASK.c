
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int single_adc_amp; int spdif_status_reset; struct alc_spec* spec; } ;
struct TYPE_2__ {int own_eapd_ctl; int mixer_nid; } ;
struct alc_spec {TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct alc_spec*) ;
 struct alc_spec* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_2, hda_nid_t VAR_3)
{
 struct alc_spec *VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;
 VAR_2->spec = VAR_4;
 FUNC_3(&VAR_4->gen);
 VAR_4->gen.mixer_nid = VAR_3;
 VAR_4->gen.own_eapd_ctl = 1;
 VAR_2->single_adc_amp = 1;

 VAR_2->spdif_status_reset = 1;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4);
  return VAR_5;
 }
 return 0;
}
