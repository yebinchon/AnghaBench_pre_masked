
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct TYPE_2__ {int subdivision; int params; scalar_t__ fragshift; } ;
struct snd_pcm_runtime2 {TYPE_1__ oss; } ;


 int VAR_0 ;
 struct snd_pcm_runtime2* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_pcm_runtime2 *VAR_3;

 if (VAR_1 == ((void*)0))
  return 0;
 VAR_3 = FUNC_0(VAR_1->runtime);
 if (VAR_2 == 0) {
  VAR_2 = VAR_3->oss.subdivision;
  if (VAR_2 == 0)
   VAR_2 = 1;
  return VAR_2;
 }
 if (VAR_3->oss.subdivision || VAR_3->oss.fragshift)
  return -VAR_0;
 if (VAR_2 != 1 && VAR_2 != 2 && VAR_2 != 4 &&
     VAR_2 != 8 && VAR_2 != 16)
  return -VAR_0;
 VAR_3->oss.subdivision = VAR_2;
 VAR_3->oss.params = 1;
 return VAR_2;
}
