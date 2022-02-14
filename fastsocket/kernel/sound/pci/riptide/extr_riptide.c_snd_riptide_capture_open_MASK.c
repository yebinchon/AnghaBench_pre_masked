
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_riptide {struct snd_pcm_substream* capture_substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct pcmhw* private_data; int hw; } ;
struct pcmhw {int* intdec; int state; int source; int id; int paths; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pcmhw* FUNC_0 (int,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 struct snd_riptide* FUNC_2 (struct snd_pcm_substream*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_7)
{
 struct snd_riptide *VAR_8 = FUNC_2(VAR_7);
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 struct pcmhw *VAR_10;

 VAR_8->capture_substream = VAR_7;
 VAR_9->hw = VAR_6;
 VAR_10 = FUNC_0(sizeof(struct pcmhw), VAR_1);
 VAR_10->paths = VAR_5;
 VAR_10->id = VAR_2;
 VAR_10->source = VAR_0;
 VAR_10->intdec[0] = 0xff;
 VAR_10->intdec[1] = 0xff;
 VAR_10->state = VAR_4;
 VAR_9->private_data = VAR_10;
 return FUNC_1(VAR_9,
          VAR_3);
}
