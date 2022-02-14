
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_ice1712 {int * capture_pro_substream; int pro_rate_default; } ;


 scalar_t__ VAR_0 ;
 struct snd_ice1712* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_ice1712*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_0(VAR_1);

 if (VAR_0)
  FUNC_1(VAR_2, VAR_2->pro_rate_default, 0);
 VAR_2->capture_pro_substream = ((void*)0);
 return 0;
}
