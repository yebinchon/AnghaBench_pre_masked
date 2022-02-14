
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct snd_bt87x {int current_line; int line_bytes; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (struct snd_pcm_runtime*,int) ;
 struct snd_bt87x* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_bt87x *VAR_1 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;

 return (snd_pcm_uframes_t)FUNC_0(VAR_2, VAR_1->current_line * VAR_1->line_bytes);
}
