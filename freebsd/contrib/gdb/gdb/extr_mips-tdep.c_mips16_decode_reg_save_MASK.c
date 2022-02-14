
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_inst ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_0 (t_inst VAR_2, unsigned long *VAR_3)
{
  if ((VAR_2 & 0xf800) == 0xd000)
    {
      int VAR_4 = VAR_1[(VAR_2 & 0x700) >> 8];
      *VAR_3 |= (1 << VAR_4);
    }
  else if ((VAR_2 & 0xff00) == 0xf900)
    {
      int VAR_5 = VAR_1[(VAR_2 & 0xe0) >> 5];
      *VAR_3 |= (1 << VAR_5);
    }
  else if ((VAR_2 & 0xff00) == 0x6200
    || (VAR_2 & 0xff00) == 0xfa00)
    *VAR_3 |= (1 << VAR_0);
}
