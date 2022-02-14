
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* error; } ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_1 (char **VAR_2)
{
  int VAR_3 = 0;
  int VAR_4 = 0;
  char *VAR_5 = *VAR_2;

  for (;;)
    switch (*VAR_5++)
      {
      case '\0': case ',':
 goto done;

      case 'a': case 'A': VAR_4 = 1; VAR_3 |= 0x4; break;
      case 'i': case 'I': VAR_4 = 1; VAR_3 |= 0x2; break;
      case 'f': case 'F': VAR_4 = 1; VAR_3 |= 0x1; break;

      default:
 VAR_1.error = FUNC_0("unrecognized CPS flag");
 return VAR_0;
      }

 done:
  if (VAR_4 == 0)
    {
      VAR_1.error = FUNC_0("missing CPS flags");
      return VAR_0;
    }

  *VAR_2 = VAR_5 - 1;
  return VAR_3;
}
