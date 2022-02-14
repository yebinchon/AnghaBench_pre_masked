
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_at73c213 {TYPE_1__* ssc; } ;
struct TYPE_2__ {int regs; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_substream*,int ) ;
 struct snd_at73c213* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_2,
     struct snd_pcm_hw_params *VAR_3)
{
 struct snd_at73c213 *VAR_4 = FUNC_4(VAR_2);
 int VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_5(VAR_4->ssc->regs, VAR_0);
 VAR_6 = FUNC_0(VAR_1, VAR_5 - 1, VAR_6);
 FUNC_6(VAR_4->ssc->regs, VAR_0, VAR_6);

 return FUNC_3(VAR_2,
     FUNC_1(VAR_3));
}
