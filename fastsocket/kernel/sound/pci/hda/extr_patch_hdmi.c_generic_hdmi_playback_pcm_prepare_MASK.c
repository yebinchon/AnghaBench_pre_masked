
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct hdmi_spec {int dummy; } ;
struct hda_pcm_stream {int nid; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_4__ {int pin_nid; } ;
struct TYPE_3__ {int channels; } ;


 int FUNC_0 (struct hda_codec*,int ) ;
 TYPE_2__* FUNC_1 (struct hdmi_spec*,int) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int,int,struct snd_pcm_substream*) ;
 int FUNC_4 (struct hda_codec*,int ,int ,unsigned int,unsigned int) ;
 int FUNC_5 (struct hdmi_spec*,struct hda_pcm_stream*) ;

__attribute__((used)) static int FUNC_6(struct hda_pcm_stream *VAR_0,
        struct hda_codec *VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3,
        struct snd_pcm_substream *VAR_4)
{
 hda_nid_t VAR_5 = VAR_0->nid;
 struct hdmi_spec *VAR_6 = VAR_1->spec;
 int VAR_7 = FUNC_5(VAR_6, VAR_0);
 hda_nid_t VAR_8 = FUNC_1(VAR_6, VAR_7)->pin_nid;
 bool VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_5);

 FUNC_2(VAR_1, VAR_5, VAR_4->runtime->channels);

 FUNC_3(VAR_1, VAR_7, VAR_9, VAR_4);

 return FUNC_4(VAR_1, VAR_5, VAR_8, VAR_2, VAR_3);
}
