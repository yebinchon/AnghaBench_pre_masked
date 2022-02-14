
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vxpocket {int regCDSP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_vxpocket*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vx_core *VAR_3, int VAR_4)
{
 struct snd_vxpocket *VAR_5 = (struct snd_vxpocket *)VAR_3;

 if (VAR_4 == VAR_1)
  VAR_5->regCDSP &= ~VAR_2;
 else
  VAR_5->regCDSP |= VAR_2;
 FUNC_0(VAR_5, VAR_0, VAR_5->regCDSP);
}
