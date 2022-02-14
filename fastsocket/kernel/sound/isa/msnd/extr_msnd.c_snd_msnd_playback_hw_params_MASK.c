
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_msnd {int play_sample_rate; int play_channels; int play_sample_size; void* mappedbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ) ;
 struct snd_msnd* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int ,void*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_5,
     struct snd_pcm_hw_params *VAR_6)
{
 int VAR_7;
 struct snd_msnd *VAR_8 = FUNC_4(VAR_5);
 void *VAR_9 = VAR_8->mappedbase + VAR_0;

 VAR_8->play_sample_size = FUNC_3(FUNC_1(VAR_6));
 VAR_8->play_channels = FUNC_0(VAR_6);
 VAR_8->play_sample_rate = FUNC_2(VAR_6);

 for (VAR_7 = 0; VAR_7 < 3; ++VAR_7, VAR_9 += VAR_1) {
  FUNC_5(VAR_8->play_sample_size, VAR_9 + VAR_4);
  FUNC_5(VAR_8->play_channels, VAR_9 + VAR_2);
  FUNC_5(VAR_8->play_sample_rate, VAR_9 + VAR_3);
 }




 return 0;
}
