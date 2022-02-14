
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_azf3328 {TYPE_1__* codecs; } ;
typedef enum snd_azf3328_codec_type { ____Placeholder_snd_azf3328_codec_type } snd_azf3328_codec_type ;
struct TYPE_2__ {int * substream; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct snd_azf3328* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_3(struct snd_pcm_substream *VAR_0,
        enum snd_azf3328_codec_type VAR_1
)
{
 struct snd_azf3328 *VAR_2 = FUNC_2(VAR_0);

 FUNC_0();
 VAR_2->codecs[VAR_1].substream = ((void*)0);
 FUNC_1();
 return 0;
}
