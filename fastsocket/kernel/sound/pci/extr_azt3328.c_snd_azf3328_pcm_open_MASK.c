
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_azf3328 {TYPE_1__* codecs; } ;
typedef enum snd_azf3328_codec_type { ____Placeholder_snd_azf3328_codec_type } snd_azf3328_codec_type ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct snd_azf3328* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_4(struct snd_pcm_substream *VAR_3,
       enum snd_azf3328_codec_type VAR_4
)
{
 struct snd_azf3328 *VAR_5 = FUNC_3(VAR_3);
 struct snd_pcm_runtime *VAR_6 = VAR_3->runtime;

 FUNC_0();
 VAR_5->codecs[VAR_4].substream = VAR_3;


 VAR_6->hw = VAR_1;

 FUNC_2(VAR_6, 0, VAR_0,
       &VAR_2);
 FUNC_1();
 return 0;
}
