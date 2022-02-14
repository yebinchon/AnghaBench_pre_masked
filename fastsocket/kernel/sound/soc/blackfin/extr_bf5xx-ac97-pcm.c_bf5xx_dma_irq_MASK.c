
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {int once; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; struct sport_device* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct snd_pcm_substream *VAR_2 = VAR_1;
 FUNC_1(VAR_2);
}
