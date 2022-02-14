
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct aaci_runtime {int pcm_open; TYPE_2__* pcm; } ;
struct TYPE_5__ {TYPE_1__* r; } ;
struct TYPE_4__ {int slots; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *,struct snd_pcm_substream*,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1,
         struct aaci_runtime *VAR_2,
         struct snd_pcm_hw_params *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1);
 if (VAR_2->pcm_open) {
  FUNC_5(VAR_2->pcm);
  VAR_2->pcm_open = 0;
 }

 VAR_4 = FUNC_1(((void*)0), VAR_1,
         FUNC_2(VAR_3));
 if (VAR_4 < 0)
  goto out;

 if (VAR_1->stream == VAR_0)
  VAR_4 = FUNC_6(VAR_2->pcm, FUNC_4(VAR_3),
     FUNC_3(VAR_3),
     VAR_2->pcm->r[0].slots);
 else
  VAR_4 = FUNC_6(VAR_2->pcm, FUNC_4(VAR_3),
     FUNC_3(VAR_3),
     VAR_2->pcm->r[0].slots);

 if (VAR_4)
  goto out;

 VAR_2->pcm_open = 1;

 out:
 return VAR_4;
}
