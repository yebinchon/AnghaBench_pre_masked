
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int count; } ;
struct hda_codec {struct cmi_spec* spec; } ;
struct TYPE_2__ {int share_spdif; scalar_t__ dig_out_nid; } ;
struct cmi_spec {int * adc_nids; scalar_t__ dig_in_nid; TYPE_1__ multiout; scalar_t__ channel_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,struct snd_kcontrol*,int,int ) ;
 int FUNC_2 (struct hda_codec*,scalar_t__) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct hda_codec*,TYPE_1__*) ;
 struct snd_kcontrol* FUNC_5 (struct hda_codec*,char*) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_2)
{
 struct cmi_spec *VAR_3 = VAR_2->spec;
 struct snd_kcontrol *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_3->channel_modes) {
  VAR_6 = FUNC_0(VAR_2, VAR_1);
  if (VAR_6 < 0)
   return VAR_6;
 }
 if (VAR_3->multiout.dig_out_nid) {
  VAR_6 = FUNC_3(VAR_2,
          VAR_3->multiout.dig_out_nid,
          VAR_3->multiout.dig_out_nid);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_6 = FUNC_4(VAR_2,
          &VAR_3->multiout);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_3->multiout.share_spdif = 1;
 }
 if (VAR_3->dig_in_nid) {
  VAR_6 = FUNC_2(VAR_2, VAR_3->dig_in_nid);
  if (VAR_6 < 0)
   return VAR_6;
 }


 VAR_4 = FUNC_5(VAR_2, "Capture Source");
 for (VAR_5 = 0; VAR_4 && VAR_5 < VAR_4->count; VAR_5++) {
  VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_5, VAR_3->adc_nids[VAR_5]);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return 0;
}
