
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hardware {int rates; int rate_min; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(unsigned int VAR_5,
        struct snd_pcm_hardware *VAR_6)
{
 if (VAR_5 == VAR_0) {
  VAR_6->rates = VAR_2 |
      VAR_3 |
      VAR_4 |
      VAR_1;
  VAR_6->rate_min = 44100;
 }
}
