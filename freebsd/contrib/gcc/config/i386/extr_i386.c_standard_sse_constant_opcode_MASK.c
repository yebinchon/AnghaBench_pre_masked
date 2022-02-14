
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

const char *
FUNC_3 (rtx VAR_2, rtx VAR_3)
{
  switch (FUNC_2 (VAR_3))
    {
    case 1:
      if (FUNC_1 (VAR_2) == VAR_1)
        return "xorps\t%0, %0";
      else if (FUNC_1 (VAR_2) == VAR_0)
        return "xorpd\t%0, %0";
      else
        return "pxor\t%0, %0";
    case 2:
      return "pcmpeqd\t%0, %0";
    }
  FUNC_0 ();
}
