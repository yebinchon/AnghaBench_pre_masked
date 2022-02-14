
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct aaci* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;
struct aaci {int ac97; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 struct aaci *VAR_6 = VAR_4->private_data;

 FUNC_1(VAR_4);


 FUNC_0(VAR_6->ac97, VAR_0, 0x0001);
 FUNC_0(VAR_6->ac97, VAR_1, VAR_5->rate);
 FUNC_0(VAR_6->ac97, VAR_2, VAR_5->rate);


 FUNC_0(VAR_6->ac97, VAR_3, 0x0404);

 return 0;
}
