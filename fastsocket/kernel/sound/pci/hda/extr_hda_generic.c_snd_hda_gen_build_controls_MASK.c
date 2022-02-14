
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hook; int sw_kctl; } ;
struct TYPE_7__ {int share_spdif; scalar_t__ dig_out_nid; } ;
struct TYPE_5__ {int list; scalar_t__ used; } ;
struct hda_gen_spec {int autocfg; int vmaster_mute_enum; TYPE_4__ vmaster_mute; int no_analog; int vmaster_tlv; scalar_t__ dig_in_nid; TYPE_3__ multiout; TYPE_2__* pcm_rec; TYPE_1__ kctls; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
struct TYPE_6__ {int pcm_type; } ;


 int FUNC_0 (struct hda_codec*,char*,int *,int ,char*,int,int *) ;
 int FUNC_1 (struct hda_gen_spec*) ;
 int VAR_0 ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,char*,int ,int ,char*) ;
 int FUNC_4 (struct hda_codec*,TYPE_4__*,int ) ;
 int FUNC_5 (struct hda_codec*,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (struct hda_codec*,scalar_t__) ;
 int FUNC_7 (struct hda_codec*,TYPE_3__*) ;
 int FUNC_8 (struct hda_codec*,char*) ;
 int FUNC_9 (struct hda_codec*,int *) ;

int FUNC_10(struct hda_codec *VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_1->spec;
 int VAR_3;

 if (VAR_2->kctls.used) {
  VAR_3 = FUNC_2(VAR_1, VAR_2->kctls.list);
  if (VAR_3 < 0)
   return VAR_3;
 }

 if (VAR_2->multiout.dig_out_nid) {
  VAR_3 = FUNC_5(VAR_1,
        VAR_2->multiout.dig_out_nid,
        VAR_2->multiout.dig_out_nid,
        VAR_2->pcm_rec[1].pcm_type);
  if (VAR_3 < 0)
   return VAR_3;
  if (!VAR_2->no_analog) {
   VAR_3 = FUNC_7(VAR_1,
           &VAR_2->multiout);
   if (VAR_3 < 0)
    return VAR_3;
   VAR_2->multiout.share_spdif = 1;
  }
 }
 if (VAR_2->dig_in_nid) {
  VAR_3 = FUNC_6(VAR_1, VAR_2->dig_in_nid);
  if (VAR_3 < 0)
   return VAR_3;
 }


 if (!VAR_2->no_analog &&
     !FUNC_8(VAR_1, "Master Playback Volume")) {
  VAR_3 = FUNC_3(VAR_1, "Master Playback Volume",
       VAR_2->vmaster_tlv, VAR_0,
       "Playback Volume");
  if (VAR_3 < 0)
   return VAR_3;
 }
 if (!VAR_2->no_analog &&
     !FUNC_8(VAR_1, "Master Playback Switch")) {
  VAR_3 = FUNC_0(VAR_1, "Master Playback Switch",
         ((void*)0), VAR_0,
         "Playback Switch",
         1, &VAR_2->vmaster_mute.sw_kctl);
  if (VAR_3 < 0)
   return VAR_3;
  if (VAR_2->vmaster_mute.hook)
   FUNC_4(VAR_1, &VAR_2->vmaster_mute,
       VAR_2->vmaster_mute_enum);
 }

 FUNC_1(VAR_2);

 VAR_3 = FUNC_9(VAR_1, &VAR_2->autocfg);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
