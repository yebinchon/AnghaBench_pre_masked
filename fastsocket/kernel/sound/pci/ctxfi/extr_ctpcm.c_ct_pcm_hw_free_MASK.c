
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct ct_atc_pcm {int dummy; } ;
struct ct_atc {int (* pcm_release_resources ) (struct ct_atc*,struct ct_atc_pcm*) ;} ;
struct TYPE_2__ {struct ct_atc_pcm* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 struct ct_atc* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct ct_atc*,struct ct_atc_pcm*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct ct_atc *VAR_1 = FUNC_1(VAR_0);
 struct ct_atc_pcm *VAR_2 = VAR_0->runtime->private_data;


 VAR_1->pcm_release_resources(VAR_1, VAR_2);

 return FUNC_0(VAR_0);
}
