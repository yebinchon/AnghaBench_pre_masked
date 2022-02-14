
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec_per_pin {int pcm_name; } ;
struct TYPE_2__ {int list; } ;
struct hdmi_spec {int num_pins; TYPE_1__ pcm_rec; } ;
struct hda_pcm_stream {int substreams; int ops; } ;
struct hda_pcm {struct hda_pcm_stream* stream; int pcm_type; int name; } ;
struct hda_codec {int num_pcms; int pcm_info; struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct hdmi_spec_per_pin* FUNC_0 (struct hdmi_spec*,int) ;
 struct hda_pcm* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_4)
{
 struct hdmi_spec *VAR_5 = VAR_4->spec;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_pins; VAR_6++) {
  struct hda_pcm *VAR_7;
  struct hda_pcm_stream *VAR_8;
  struct hdmi_spec_per_pin *VAR_9;

  VAR_9 = FUNC_0(VAR_5, VAR_6);
  FUNC_2(VAR_9->pcm_name, "HDMI %d", VAR_6);
  VAR_7 = FUNC_1(&VAR_5->pcm_rec);
  if (!VAR_7)
   return -VAR_0;
  VAR_7->name = VAR_9->pcm_name;
  VAR_7->pcm_type = VAR_1;

  VAR_8 = &VAR_7->stream[VAR_2];
  VAR_8->substreams = 1;
  VAR_8->ops = VAR_3;

 }

 VAR_4->num_pcms = VAR_5->num_pins;
 VAR_4->pcm_info = VAR_5->pcm_rec.list;

 return 0;
}
