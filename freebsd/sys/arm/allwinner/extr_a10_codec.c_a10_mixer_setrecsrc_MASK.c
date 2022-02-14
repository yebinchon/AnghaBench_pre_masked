
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_mixer {int dummy; } ;
struct a10codec_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct a10codec_info*,int ) ;
 int FUNC_1 (struct a10codec_info*,int ,int) ;



 struct a10codec_info* FUNC_2 (struct snd_mixer*) ;

__attribute__((used)) static uint32_t
FUNC_3(struct snd_mixer *VAR_3, uint32_t VAR_4)
{
 struct a10codec_info *VAR_5 = FUNC_2(VAR_3);
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2);

 switch (VAR_4) {
 case 130:
  VAR_6 &= ~VAR_0;
  VAR_6 |= (133 << VAR_1);
  break;
 case 128:
  VAR_6 &= ~VAR_0;
  VAR_6 |= (132 << VAR_1);
  break;
 case 129:
  VAR_6 &= ~VAR_0;
  VAR_6 |= (131 << VAR_1);
  break;
 default:
  break;
 }

 FUNC_1(VAR_5, VAR_2, VAR_6);

 switch ((VAR_6 & VAR_0) >> VAR_1) {
 case 133:
  return (130);
 case 132:
  return (128);
 case 131:
  return (129);
 default:
  return (0);
 }
}
