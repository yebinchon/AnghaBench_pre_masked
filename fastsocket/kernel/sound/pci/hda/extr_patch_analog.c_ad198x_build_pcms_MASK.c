
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hda_pcm {char* name; TYPE_2__* stream; int pcm_type; } ;
struct hda_codec {int num_pcms; int spdif_status_reset; struct hda_pcm* pcm_info; struct ad198x_spec* spec; } ;
struct TYPE_6__ {scalar_t__ dig_out_nid; scalar_t__* dac_nids; int max_channels; } ;
struct ad198x_spec {scalar_t__ dig_in_nid; TYPE_1__ multiout; scalar_t__* adc_nids; int num_adc_nids; struct hda_pcm* pcm_rec; } ;
struct TYPE_7__ {scalar_t__ nid; int substreams; int channels_max; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static int FUNC_0(struct hda_codec *VAR_7)
{
 struct ad198x_spec *VAR_8 = VAR_7->spec;
 struct hda_pcm *VAR_9 = VAR_8->pcm_rec;

 VAR_7->num_pcms = 1;
 VAR_7->pcm_info = VAR_9;

 VAR_9->name = "AD198x Analog";
 VAR_9->stream[VAR_2] = VAR_4;
 VAR_9->stream[VAR_2].channels_max = VAR_8->multiout.max_channels;
 VAR_9->stream[VAR_2].nid = VAR_8->multiout.dac_nids[0];
 VAR_9->stream[VAR_1] = VAR_3;
 VAR_9->stream[VAR_1].substreams = VAR_8->num_adc_nids;
 VAR_9->stream[VAR_1].nid = VAR_8->adc_nids[0];

 if (VAR_8->multiout.dig_out_nid) {
  VAR_9++;
  VAR_7->num_pcms++;
  VAR_7->spdif_status_reset = 1;
  VAR_9->name = "AD198x Digital";
  VAR_9->pcm_type = VAR_0;
  VAR_9->stream[VAR_2] = VAR_6;
  VAR_9->stream[VAR_2].nid = VAR_8->multiout.dig_out_nid;
  if (VAR_8->dig_in_nid) {
   VAR_9->stream[VAR_1] = VAR_5;
   VAR_9->stream[VAR_1].nid = VAR_8->dig_in_nid;
  }
 }

 return 0;
}
