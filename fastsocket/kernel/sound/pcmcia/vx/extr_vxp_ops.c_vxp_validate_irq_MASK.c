
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vxpocket {int regCDSP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_vxpocket*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vx_core *VAR_2, int VAR_3)
{
 struct snd_vxpocket *VAR_4 = (struct snd_vxpocket *)VAR_2;


 if (VAR_3)
  VAR_4->regCDSP |= VAR_1;
 else
  VAR_4->regCDSP &= ~VAR_1;
 FUNC_0(VAR_4, VAR_0, VAR_4->regCDSP);
}
