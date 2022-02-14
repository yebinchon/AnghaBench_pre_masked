
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*,int ,int *) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_oss_file *VAR_2)
{
 struct snd_pcm_substream *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->streams[VAR_1];
 if (VAR_3 != ((void*)0)) {
  if ((VAR_4 = FUNC_1(VAR_3)) < 0)
   return VAR_4;
  FUNC_0(VAR_3, VAR_0, ((void*)0));
 }


 return 0;
}
