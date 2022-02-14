
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int var; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (int ,int ,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_hw_params *VAR_0, struct snd_pcm_hw_rule *VAR_1)
{
 static unsigned int VAR_2[] = {
  1<<0, 1<<1, 1<<2, 1<<3, 1<<4, 1<<5, 1<<6, 1<<7,
  1<<8, 1<<9, 1<<10, 1<<11, 1<<12, 1<<13, 1<<14, 1<<15,
  1<<16, 1<<17, 1<<18, 1<<19, 1<<20, 1<<21, 1<<22, 1<<23,
  1<<24, 1<<25, 1<<26, 1<<27, 1<<28, 1<<29, 1<<30
 };
 return FUNC_2(FUNC_1(VAR_0, VAR_1->var),
     FUNC_0(VAR_2), VAR_2, 0);
}
