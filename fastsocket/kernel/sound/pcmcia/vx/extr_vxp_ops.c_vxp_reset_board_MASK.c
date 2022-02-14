
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vxpocket {scalar_t__ regDIALOG; scalar_t__ regCDSP; } ;



__attribute__((used)) static void FUNC_0(struct vx_core *VAR_0, int VAR_1)
{
 struct snd_vxpocket *VAR_2 = (struct snd_vxpocket *)VAR_0;

 VAR_2->regCDSP = 0;
 VAR_2->regDIALOG = 0;
}
