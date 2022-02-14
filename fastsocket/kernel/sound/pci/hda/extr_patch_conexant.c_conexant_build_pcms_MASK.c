
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hda_pcm {char* name; TYPE_2__* stream; int pcm_type; } ;
struct hda_codec {int num_pcms; int vendor_id; struct hda_pcm* pcm_info; struct conexant_spec* spec; } ;
struct TYPE_7__ {scalar_t__ dig_out_nid; scalar_t__* dac_nids; int max_channels; } ;
struct conexant_spec {scalar_t__ dig_in_nid; TYPE_1__ multiout; scalar_t__* adc_nids; int num_adc_nids; TYPE_2__* capture_stream; struct hda_pcm* pcm_rec; } ;
struct TYPE_8__ {scalar_t__ nid; int substreams; int channels_max; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static int FUNC_0(struct hda_codec *VAR_8)
{
 struct conexant_spec *VAR_9 = VAR_8->spec;
 struct hda_pcm *VAR_10 = VAR_9->pcm_rec;

 VAR_8->num_pcms = 1;
 VAR_8->pcm_info = VAR_10;

 VAR_10->name = "CONEXANT Analog";
 VAR_10->stream[VAR_2] = VAR_4;
 VAR_10->stream[VAR_2].channels_max =
  VAR_9->multiout.max_channels;
 VAR_10->stream[VAR_2].nid =
  VAR_9->multiout.dac_nids[0];
 if (VAR_9->capture_stream)
  VAR_10->stream[VAR_1] = *VAR_9->capture_stream;
 else {
  if (VAR_8->vendor_id == 0x14f15051)
   VAR_10->stream[VAR_1] =
    VAR_7;
  else {
   VAR_10->stream[VAR_1] =
    VAR_3;
   VAR_10->stream[VAR_1].substreams =
    VAR_9->num_adc_nids;
  }
 }
 VAR_10->stream[VAR_1].nid = VAR_9->adc_nids[0];

 if (VAR_9->multiout.dig_out_nid) {
  VAR_10++;
  VAR_8->num_pcms++;
  VAR_10->name = "Conexant Digital";
  VAR_10->pcm_type = VAR_0;
  VAR_10->stream[VAR_2] =
   VAR_6;
  VAR_10->stream[VAR_2].nid =
   VAR_9->multiout.dig_out_nid;
  if (VAR_9->dig_in_nid) {
   VAR_10->stream[VAR_1] =
    VAR_5;
   VAR_10->stream[VAR_1].nid =
    VAR_9->dig_in_nid;
  }
 }

 return 0;
}
