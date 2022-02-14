
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;


 int FUNC_0 (struct snd_pcm_oss_file*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_oss_file *VAR_0)
{
 int VAR_1;
 if (!VAR_0)
  return 0;
 for (VAR_1 = 0; VAR_1 < 2; ++VAR_1) {
  struct snd_pcm_substream *VAR_2 = VAR_0->streams[VAR_1];
  if (VAR_2)
   FUNC_1(VAR_2);
 }
 FUNC_0(VAR_0);
 return 0;
}
