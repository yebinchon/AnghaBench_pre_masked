
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3 (char *VAR_0)
{
  int VAR_1 = 0;
  for (; *VAR_0 == '['; VAR_0++)
    VAR_1 += 2;
  switch (VAR_0[0])
    {
    case 'L':

      return FUNC_2 (VAR_0) - 2 + VAR_1;
    default:
      return FUNC_2 (FUNC_0 (FUNC_1 (VAR_0[0]))) + VAR_1;
    }
}
