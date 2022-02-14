
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int type; } ;
struct snd_vxpocket {int mic_level; int regCDSP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_vxpocket*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vx_core *VAR_8, int VAR_9)
{
 struct snd_vxpocket *VAR_10 = (struct snd_vxpocket *)VAR_8;

 switch (VAR_9) {
 case 130:
  VAR_10->regCDSP |= VAR_5;
  FUNC_1(VAR_10, VAR_0, VAR_10->regCDSP);
  break;
 case 129:
  VAR_10->regCDSP &= ~VAR_5;
  if (VAR_8->type == VAR_7)
   VAR_10->regCDSP &= ~VAR_4;
  else
   VAR_10->regCDSP &= ~VAR_6;
  FUNC_1(VAR_10, VAR_0, VAR_10->regCDSP);
  break;
 case 128:
  VAR_10->regCDSP &= ~VAR_5;

  if (VAR_8->type == VAR_7) {
   VAR_10->regCDSP &= ~VAR_4;
   if (VAR_10->mic_level)
    VAR_10->regCDSP |= VAR_3;
   else
    VAR_10->regCDSP |= VAR_2;
   FUNC_1(VAR_10, VAR_0, VAR_10->regCDSP);
  } else {
   VAR_10->regCDSP |= VAR_6;
   FUNC_1(VAR_10, VAR_0, VAR_10->regCDSP);
   FUNC_1(VAR_10, VAR_1, FUNC_0(VAR_10->mic_level));
  }
  break;
 }
}
