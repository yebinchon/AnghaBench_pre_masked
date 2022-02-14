
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int channels_max; int formats; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct intel8x0 {scalar_t__ smp20bit; scalar_t__ dra; scalar_t__ multi4; scalar_t__ multi6; scalar_t__ multi8; int * ichd; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_substream*,int *) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int,int) ;
 struct intel8x0* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6)
{
 struct intel8x0 *VAR_7 = FUNC_4(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, &VAR_7->ichd[VAR_0]);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_7->multi8) {
  VAR_8->hw.channels_max = 8;
  FUNC_2(VAR_8, 0,
      VAR_2,
      &VAR_5);
 } else if (VAR_7->multi6) {
  VAR_8->hw.channels_max = 6;
  FUNC_2(VAR_8, 0, VAR_2,
        &VAR_4);
 } else if (VAR_7->multi4) {
  VAR_8->hw.channels_max = 4;
  FUNC_2(VAR_8, 0, VAR_2,
        &VAR_3);
 }
 if (VAR_7->dra) {
  FUNC_0(VAR_8);
 }
 if (VAR_7->smp20bit) {
  VAR_8->hw.formats |= VAR_1;
  FUNC_3(VAR_8, 0, 32, 20);
 }
 return 0;
}
