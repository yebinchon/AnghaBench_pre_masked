
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_pcm_hw_params {int dummy; } ;
struct oxygen {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct oxygen*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_4,
      struct snd_pcm_hw_params *VAR_5)
{
 u16 VAR_6;

 VAR_6 = VAR_1 | VAR_2;
 if (FUNC_0(VAR_5) > 48000)
  VAR_6 |= VAR_0;
 FUNC_1(VAR_4, VAR_3, VAR_6);
}
