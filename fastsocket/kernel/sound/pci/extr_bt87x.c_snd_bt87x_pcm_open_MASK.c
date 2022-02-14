
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct snd_bt87x {int opened; struct snd_pcm_substream* substream; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct snd_bt87x*,struct snd_pcm_runtime*) ;
 int FUNC_3 (struct snd_bt87x*,struct snd_pcm_runtime*) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ) ;
 struct snd_bt87x* FUNC_5 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3)
{
 struct snd_bt87x *VAR_4 = FUNC_5(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 int VAR_6;

 if (FUNC_6(0, &VAR_4->opened))
  return -VAR_1;

 if (VAR_3->pcm->device == VAR_0)
  VAR_6 = FUNC_3(VAR_4, VAR_5);
 else
  VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (VAR_6 < 0)
  goto _error;

 VAR_6 = FUNC_4(VAR_5, VAR_2);
 if (VAR_6 < 0)
  goto _error;

 VAR_4->substream = VAR_3;
 return 0;

_error:
 FUNC_0(0, &VAR_4->opened);
 FUNC_1();
 return VAR_6;
}
