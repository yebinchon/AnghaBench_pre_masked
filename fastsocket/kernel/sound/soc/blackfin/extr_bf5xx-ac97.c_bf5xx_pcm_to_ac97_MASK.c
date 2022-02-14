
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_frame {int ac97_tag; int ac97_center; int ac97_lfe; int ac97_sr; int ac97_sl; int ac97_pcm_l; int ac97_pcm_r; } ;
typedef int __u16 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_0(struct ac97_frame *VAR_13, const __u16 *VAR_14,
  size_t VAR_15, unsigned int VAR_16)
{
 while (VAR_15--) {
  VAR_13->ac97_tag = VAR_12;
  if (VAR_16 & VAR_1) {
   VAR_13->ac97_pcm_r = *VAR_14++;
   VAR_13->ac97_tag |= VAR_9;
  }
  if (VAR_16 & VAR_2) {
   VAR_13->ac97_pcm_l = *VAR_14++;
   VAR_13->ac97_tag |= VAR_7;

  }
  VAR_13++;
 }
}
