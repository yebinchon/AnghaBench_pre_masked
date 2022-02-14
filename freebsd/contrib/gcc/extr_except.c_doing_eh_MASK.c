
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;

int
FUNC_1 (int VAR_1)
{
  if (! VAR_0)
    {
      static int VAR_2 = 0;
      if (! VAR_2 && VAR_1)
 {
   FUNC_0 ("exception handling disabled, use -fexceptions to enable");
   VAR_2 = 1;
 }
      return 0;
    }
  return 1;
}
