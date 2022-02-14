
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trad_frame_saved_reg {scalar_t__ realreg; int addr; } ;



int
FUNC_0 (struct trad_frame_saved_reg VAR_0[], int VAR_1)
{
  return (VAR_0[VAR_1].realreg >= 0
   && VAR_0[VAR_1].addr != -1);
}
