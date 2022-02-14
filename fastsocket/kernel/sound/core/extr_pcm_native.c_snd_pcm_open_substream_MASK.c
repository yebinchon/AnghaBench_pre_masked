
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int ref_count; int hw_opened; TYPE_1__* ops; } ;
struct snd_pcm {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* open ) (struct snd_pcm_substream*) ;} ;


 int FUNC_0 (struct snd_pcm*,int,struct file*,struct snd_pcm_substream**) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;

int FUNC_6(struct snd_pcm *VAR_0, int VAR_1,
      struct file *VAR_2,
      struct snd_pcm_substream **VAR_3)
{
 struct snd_pcm_substream *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_4->ref_count > 1) {
  *VAR_3 = VAR_4;
  return 0;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0) {
  FUNC_4("snd_pcm_hw_constraints_init failed\n");
  goto error;
 }

 if ((VAR_5 = VAR_4->ops->open(VAR_4)) < 0)
  goto error;

 VAR_4->hw_opened = 1;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0) {
  FUNC_4("snd_pcm_hw_constraints_complete failed\n");
  goto error;
 }

 *VAR_3 = VAR_4;
 return 0;

 error:
 FUNC_3(VAR_4);
 return VAR_5;
}
