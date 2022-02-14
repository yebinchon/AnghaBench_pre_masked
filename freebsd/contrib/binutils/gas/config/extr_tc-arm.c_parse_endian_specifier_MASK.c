
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* error; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 void* FUNC_1 (char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3 (char **VAR_2)
{
  int VAR_3;
  char *VAR_4 = *VAR_2;

  if (FUNC_2 (VAR_4, "BE", 2))
    VAR_3 = 0;
  else if (FUNC_2 (VAR_4, "LE", 2))
    VAR_3 = 1;
  else
    {
      VAR_1.error = FUNC_1("valid endian specifiers are be or le");
      return VAR_0;
    }

  if (FUNC_0 (VAR_4[2]) || VAR_4[2] == '_')
    {
      VAR_1.error = FUNC_1("valid endian specifiers are be or le");
      return VAR_0;
    }

  *VAR_2 = VAR_4 + 2;
  return VAR_3;
}
