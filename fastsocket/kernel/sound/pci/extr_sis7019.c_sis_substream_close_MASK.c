
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voice {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct voice* private_data; } ;
struct sis7019 {int dummy; } ;


 int FUNC_0 (struct sis7019*,struct voice*) ;
 struct sis7019* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct sis7019 *VAR_1 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct voice *VAR_3 = VAR_2->private_data;

 FUNC_0(VAR_1, VAR_3);
 return 0;
}
