
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vx222 {int regCFG; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct snd_vx222*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vx_core *VAR_2, int VAR_3)
{
 struct snd_vx222 *VAR_4 = (struct snd_vx222 *)VAR_2;

 switch (VAR_3) {
 case 128:
  VAR_4->regCFG |= VAR_1;
  break;
 default:
  VAR_4->regCFG &= ~VAR_1;
  break;
 }
 FUNC_0(VAR_4, VAR_0, VAR_4->regCFG);
}
