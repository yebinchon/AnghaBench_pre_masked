
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct ad198x_spec {int multiout; } ;


 int FUNC_0 (struct hda_codec*,int *,unsigned int,unsigned int,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct hda_pcm_stream *VAR_0,
        struct hda_codec *VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3,
        struct snd_pcm_substream *VAR_4)
{
 struct ad198x_spec *VAR_5 = VAR_1->spec;
 return FUNC_0(VAR_1, &VAR_5->multiout, VAR_2,
          VAR_3, VAR_4);
}
