
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* status; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8;
 int VAR_9 = 0;

 if (FUNC_0(VAR_7))
  return -VAR_1;
 VAR_8 = VAR_7->runtime;

 if (VAR_8->status->state == VAR_3 ||
     VAR_8->status->state == VAR_2 ||
     VAR_8->status->state == VAR_6)
  return -VAR_0;

 FUNC_3(VAR_7);

 if (VAR_8->status->state == VAR_4)
  FUNC_1(VAR_7, 0);

 FUNC_2(VAR_7, VAR_5);

 FUNC_4(VAR_7);

 return VAR_9;
}
