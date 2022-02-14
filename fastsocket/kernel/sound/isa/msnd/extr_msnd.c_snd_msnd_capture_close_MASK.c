
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_msnd {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct snd_msnd*) ;
 struct snd_msnd* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_msnd *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2);
 FUNC_0(VAR_0, &VAR_2->flags);
 return 0;
}
