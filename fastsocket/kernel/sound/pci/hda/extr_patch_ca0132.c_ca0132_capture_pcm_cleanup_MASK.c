
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int nid; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dsp_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_pcm_stream *VAR_1,
   struct hda_codec *VAR_2,
   struct snd_pcm_substream *VAR_3)
{
 struct ca0132_spec *VAR_4 = VAR_2->spec;

 if (VAR_4->dsp_state == VAR_0)
  return 0;

 FUNC_0(VAR_2, VAR_1->nid);
 return 0;
}
