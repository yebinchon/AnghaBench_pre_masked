
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static unsigned int
FUNC_0 (void)
{
  if (VAR_1 && !VAR_2
      && !VAR_3)
    {
      int VAR_5;
      for (VAR_5 = 2; VAR_5 >= 0; --VAR_5)
        if (!VAR_4[VAR_5])
   return VAR_5;
    }

  return VAR_0;
}
