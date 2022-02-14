
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vxpocket {int regCDSP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_vxpocket*,int ) ;
 int FUNC_2 (struct snd_vxpocket*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vx_core *VAR_2)
{
 struct snd_vxpocket *VAR_3 = (struct snd_vxpocket *)VAR_2;


 FUNC_2(VAR_3, VAR_0, VAR_3->regCDSP | VAR_1);
 FUNC_1(VAR_3, VAR_0);
 FUNC_0(10);

 VAR_3->regCDSP &= ~VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_3->regCDSP);
 FUNC_1(VAR_3, VAR_0);
 FUNC_0(1);
}
