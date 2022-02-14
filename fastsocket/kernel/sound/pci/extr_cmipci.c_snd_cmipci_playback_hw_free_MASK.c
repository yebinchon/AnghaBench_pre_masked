
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct cmipci {int * channel; } ;


 int FUNC_0 (struct cmipci*) ;
 int FUNC_1 (struct cmipci*,struct snd_pcm_substream*,int ,int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct cmipci*,int *) ;
 struct cmipci* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct cmipci *VAR_1 = FUNC_4(VAR_0);
 FUNC_1(VAR_1, VAR_0, 0, 0);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1, &VAR_1->channel[0]);
 return FUNC_2(VAR_0);
}
