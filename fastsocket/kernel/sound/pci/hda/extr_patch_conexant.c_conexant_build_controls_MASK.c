
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct conexant_spec* spec; } ;
struct TYPE_2__ {int share_spdif; scalar_t__ dig_out_nid; } ;
struct conexant_spec {unsigned int num_mixers; scalar_t__ input_mux; scalar_t__ vmaster_nid; scalar_t__ dig_in_nid; TYPE_1__ multiout; int * mixers; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,char*,unsigned int*,int ,char*) ;
 int FUNC_3 (struct hda_codec*,scalar_t__) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct hda_codec*,TYPE_1__*) ;
 int FUNC_6 (struct hda_codec*,char*) ;
 int FUNC_7 (struct hda_codec*,scalar_t__,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_3)
{
 struct conexant_spec *VAR_4 = VAR_3->spec;
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_mixers; VAR_5++) {
  VAR_6 = FUNC_1(VAR_3, VAR_4->mixers[VAR_5]);
  if (VAR_6 < 0)
   return VAR_6;
 }
 if (VAR_4->multiout.dig_out_nid) {
  VAR_6 = FUNC_4(VAR_3,
          VAR_4->multiout.dig_out_nid,
          VAR_4->multiout.dig_out_nid);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_6 = FUNC_5(VAR_3,
          &VAR_4->multiout);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_4->multiout.share_spdif = 1;
 }
 if (VAR_4->dig_in_nid) {
  VAR_6 = FUNC_3(VAR_3,VAR_4->dig_in_nid);
  if (VAR_6 < 0)
   return VAR_6;
 }


 if (VAR_4->vmaster_nid &&
     !FUNC_6(VAR_3, "Master Playback Volume")) {
  unsigned int VAR_7[4];
  FUNC_7(VAR_3, VAR_4->vmaster_nid,
     VAR_0, VAR_7);
  VAR_6 = FUNC_2(VAR_3, "Master Playback Volume",
       VAR_7, VAR_2,
       "Playback Volume");
  if (VAR_6 < 0)
   return VAR_6;
 }
 if (VAR_4->vmaster_nid &&
     !FUNC_6(VAR_3, "Master Playback Switch")) {
  VAR_6 = FUNC_2(VAR_3, "Master Playback Switch",
       ((void*)0), VAR_2,
       "Playback Switch");
  if (VAR_6 < 0)
   return VAR_6;
 }

 if (VAR_4->input_mux) {
  VAR_6 = FUNC_1(VAR_3, VAR_1);
  if (VAR_6 < 0)
   return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
