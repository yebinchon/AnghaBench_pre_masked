
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hda_pcm {char* name; TYPE_2__* stream; int pcm_type; } ;
struct hda_codec {int num_pcms; struct hda_pcm* pcm_info; struct cmi_spec* spec; } ;
struct TYPE_6__ {scalar_t__ dig_out_nid; } ;
struct cmi_spec {scalar_t__ dig_in_nid; TYPE_1__ multiout; struct hda_pcm* pcm_rec; } ;
struct TYPE_7__ {scalar_t__ nid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static int FUNC_0(struct hda_codec *VAR_7)
{
 struct cmi_spec *VAR_8 = VAR_7->spec;
 struct hda_pcm *VAR_9 = VAR_8->pcm_rec;

 VAR_7->num_pcms = 1;
 VAR_7->pcm_info = VAR_9;

 VAR_9->name = "CMI9880";
 VAR_9->stream[VAR_2] = VAR_4;
 VAR_9->stream[VAR_1] = VAR_3;

 if (VAR_8->multiout.dig_out_nid || VAR_8->dig_in_nid) {
  VAR_7->num_pcms++;
  VAR_9++;
  VAR_9->name = "CMI9880 Digital";
  VAR_9->pcm_type = VAR_0;
  if (VAR_8->multiout.dig_out_nid) {
   VAR_9->stream[VAR_2] = VAR_6;
   VAR_9->stream[VAR_2].nid = VAR_8->multiout.dig_out_nid;
  }
  if (VAR_8->dig_in_nid) {
   VAR_9->stream[VAR_1] = VAR_5;
   VAR_9->stream[VAR_1].nid = VAR_8->dig_in_nid;
  }
 }

 return 0;
}
