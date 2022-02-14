
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_frame {int ac97_pcm_r; int ac97_pcm_l; } ;
typedef int __u16 ;



void FUNC_0(const struct ac97_frame *VAR_0, __u16 *VAR_1,
  size_t VAR_2)
{
 while (VAR_2--) {
  *(VAR_1++) = VAR_0->ac97_pcm_l;
  *(VAR_1++) = VAR_0->ac97_pcm_r;
  VAR_0++;
 }
}
