
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vx222 {int regCDSP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_vx222*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct vx_core *VAR_5, int VAR_6)
{
 struct snd_vx222 *VAR_7 = (struct snd_vx222 *)VAR_5;


 if (VAR_6) {

  FUNC_0(VAR_7, VAR_1, VAR_3|VAR_4);
  VAR_7->regCDSP |= VAR_2;
 } else {

  FUNC_0(VAR_7, VAR_1, VAR_3&~VAR_4);
  VAR_7->regCDSP &= ~VAR_2;
 }
 FUNC_0(VAR_7, VAR_0, VAR_7->regCDSP);
}
