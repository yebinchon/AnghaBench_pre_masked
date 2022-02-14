
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int fasync; } ;
struct snd_pcm_file {struct snd_pcm_substream* substream; } ;
struct file {struct snd_pcm_file* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int,struct file*,int,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(int VAR_1, struct file * VAR_2, int VAR_3)
{
 struct snd_pcm_file * VAR_4;
 struct snd_pcm_substream *VAR_5;
 struct snd_pcm_runtime *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_2();
 VAR_4 = VAR_2->private_data;
 VAR_5 = VAR_4->substream;
 if (FUNC_0(VAR_5))
  goto out;
 VAR_6 = VAR_5->runtime;
 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_6->fasync);
out:
 FUNC_3();
 return VAR_7;
}
