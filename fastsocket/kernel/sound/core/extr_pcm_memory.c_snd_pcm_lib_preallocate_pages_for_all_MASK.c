
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int FUNC_0 (struct snd_pcm_substream*,int,void*,size_t,size_t) ;

int FUNC_1(struct snd_pcm *VAR_0,
       int VAR_1, void *VAR_2,
       size_t VAR_3, size_t VAR_4)
{
 struct snd_pcm_substream *VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
  for (VAR_5 = VAR_0->streams[VAR_6].substream; VAR_5; VAR_5 = VAR_5->next)
   if ((VAR_7 = FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4)) < 0)
    return VAR_7;
 return 0;
}
