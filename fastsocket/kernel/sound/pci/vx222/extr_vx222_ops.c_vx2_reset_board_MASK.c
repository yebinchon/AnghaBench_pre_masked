
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vx222 {int regCDSP; scalar_t__ regCFG; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct vx_core *VAR_2, int VAR_3)
{
 struct snd_vx222 *VAR_4 = (struct snd_vx222 *)VAR_2;


 VAR_4->regCDSP = VAR_0 | VAR_1 ;
 VAR_4->regCFG = 0;
}
