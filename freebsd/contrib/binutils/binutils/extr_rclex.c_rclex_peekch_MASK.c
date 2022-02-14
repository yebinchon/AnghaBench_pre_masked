
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int
FUNC_1 (void)
{
  int VAR_3;

  if ((VAR_3 = VAR_0) == -1)
    {
      if ((VAR_3 = FUNC_0 ()) != -1)
 {
   VAR_0 = VAR_3;
   if (VAR_2 > 0)
     VAR_1[--VAR_2] = 0;
 }
    }
  return VAR_3;
}
