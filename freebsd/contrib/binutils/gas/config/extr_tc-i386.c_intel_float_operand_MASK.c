
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (const char *VAR_0)
{




  if (VAR_0[0] != 'f')
    return 0;

  switch (VAR_0[1])
    {



    case 'i':
      return 2 ;
    case 'l':
      if (VAR_0[2] == 'd' && (VAR_0[3] == 'c' || VAR_0[3] == 'e'))
 return 3;
      break;
    case 'n':
      if (VAR_0[2] != 'o' )
 return 3;
      break;
    case 'r':
      if (VAR_0[2] == 's')
 return 3;
      break;
    case 's':
      if (VAR_0[2] == 'a')
 return 3;
      if (VAR_0[2] == 't')
 {
   switch (VAR_0[3])
     {
     case 'c':
     case 'd':
     case 'e':
     case 's':
       return 3;
     }
 }
      break;
    case 'x':
      if (VAR_0[2] == 'r' || VAR_0[2] == 's')
 return 0;
      break;
    }

  return 1;
}
