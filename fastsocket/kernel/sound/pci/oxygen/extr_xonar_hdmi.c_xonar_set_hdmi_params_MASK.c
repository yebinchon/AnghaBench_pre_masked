
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_hdmi {int* params; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct oxygen*,int,int,int*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;

void FUNC_4(struct oxygen *VAR_5, struct xonar_hdmi *VAR_6,
      struct snd_pcm_hw_params *VAR_7)
{
 VAR_6->params[0] = 0;
 switch (FUNC_3(VAR_7)) {
 case 44100:
  VAR_6->params[1] = VAR_1;
  break;
 case 48000:
  VAR_6->params[1] = VAR_2;
  break;
 default:
  VAR_6->params[1] = VAR_3;
  break;
 case 192000:
  VAR_6->params[1] = VAR_0;
  break;
 }
 VAR_6->params[2] = FUNC_1(VAR_7) / 2 - 1;
 if (FUNC_2(VAR_7) == VAR_4)
  VAR_6->params[3] = 0;
 else
  VAR_6->params[3] = 0xc0;
 VAR_6->params[4] = 1;
 FUNC_0(VAR_5, 0x54, 5, VAR_6->params);
}
