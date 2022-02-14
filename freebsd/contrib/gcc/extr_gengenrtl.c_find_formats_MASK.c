
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* format; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 char** VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  unsigned int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      const char **VAR_4;

      if (FUNC_0 (VAR_1[VAR_3].format))
 continue;

      for (VAR_4 = VAR_2; *VAR_4; VAR_4++)
 if (! FUNC_1 (*VAR_4, VAR_1[VAR_3].format))
   break;

      if (*VAR_4 == 0)
 *VAR_4 = VAR_1[VAR_3].format;
    }
}
