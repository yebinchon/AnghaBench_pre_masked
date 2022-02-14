
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vx222 {int regCDSP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_vx222*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct vx_core *VAR_3)
{
 struct snd_vx222 *VAR_4 = (struct snd_vx222 *)VAR_3;


 FUNC_1(VAR_4, VAR_0, VAR_4->regCDSP & ~VAR_1);

 FUNC_0(VAR_2);

 VAR_4->regCDSP |= VAR_1;

 FUNC_1(VAR_4, VAR_0, VAR_4->regCDSP);
}
