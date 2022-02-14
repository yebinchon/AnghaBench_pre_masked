
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct snd_pcm_oss_file {int dummy; } ;
struct TYPE_3__ {int rate; } ;
struct TYPE_4__ {TYPE_1__ oss; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_oss_file*,struct snd_pcm_substream**) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_oss_file *VAR_0)
{
 struct snd_pcm_substream *VAR_1;
 int VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0, &VAR_1)) < 0)
  return VAR_2;
 return FUNC_0(VAR_1->runtime)->oss.rate;
}
