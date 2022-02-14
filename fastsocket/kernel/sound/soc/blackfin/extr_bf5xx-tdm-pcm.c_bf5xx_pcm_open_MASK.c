
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int * private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_substream*,int *) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 int VAR_6 = 0;

 FUNC_2(VAR_4, &VAR_2);

 VAR_6 = FUNC_1(VAR_5,
  VAR_1);
 if (VAR_6 < 0)
  goto out;

 if (VAR_3 != ((void*)0))
  VAR_5->private_data = VAR_3;
 else {
  FUNC_0("sport_handle is NULL\n");
  VAR_6 = -VAR_0;
 }
out:
 return VAR_6;
}
