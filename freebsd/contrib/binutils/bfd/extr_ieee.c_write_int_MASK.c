
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (int VAR_1)
{
  if (VAR_1 >= 0 && VAR_1 <= 127)
    {
      FUNC_0 (VAR_1);
    }
  else
    {
      unsigned int VAR_2;



      if (VAR_1 & 0xff000000)
 VAR_2 = 4;
      else if (VAR_1 & 0x00ff0000)
 VAR_2 = 3;
      else if (VAR_1 & 0x0000ff00)
 VAR_2 = 2;
      else
 VAR_2 = 1;

      FUNC_0 ((int) VAR_0 + VAR_2);
      switch (VAR_2)
 {
 case 4:
   FUNC_0 (VAR_1 >> 24);
 case 3:
   FUNC_0 (VAR_1 >> 16);
 case 2:
   FUNC_0 (VAR_1 >> 8);
 case 1:
   FUNC_0 (VAR_1);
 }
    }
}
