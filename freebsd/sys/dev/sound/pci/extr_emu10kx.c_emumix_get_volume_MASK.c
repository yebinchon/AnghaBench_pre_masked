
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_sc_info {int* mixer_volcache; } ;


 int VAR_0 ;

int
FUNC_0(struct emu_sc_info *VAR_1, int VAR_2)
{
 if ((VAR_2 < VAR_0) && (VAR_2 >= 0))
  return (VAR_1->mixer_volcache[VAR_2]);
 return (-1);
}
