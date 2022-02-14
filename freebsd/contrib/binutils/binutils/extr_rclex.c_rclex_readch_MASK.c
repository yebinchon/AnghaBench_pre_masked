
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3 (void)
{
  int VAR_2 = -1;

  if ((VAR_2 = VAR_1) != -1)
    VAR_1 = -1;
  else
    {
      char VAR_3;
      do
        {
   if (! VAR_0 || FUNC_0 (VAR_0)
       || FUNC_1 (&VAR_3, 1, 1,VAR_0) != 1)
     break;
   VAR_2 = ((int) VAR_3) & 0xff;
        }
      while (VAR_2 == 0 || VAR_2 == '\r');
  }
  FUNC_2 (VAR_2);
  return VAR_2;
}
