
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_3)
{
  int VAR_4;
  int VAR_5;
  VAR_5 = FUNC_1 (VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
      int VAR_6;
      if (!FUNC_0 (VAR_3, VAR_1[VAR_4].name))
 return VAR_4;
      VAR_6 = FUNC_1 (VAR_1[VAR_4].name);
      if (VAR_5 == VAR_6 + 4 && VAR_3[0] == '_' && VAR_3[1] == '_'
   && VAR_3[VAR_5 - 1] == '_' && VAR_3[VAR_5 - 2] == '_'
   && !FUNC_2 (VAR_3 + 2, VAR_1[VAR_4].name, VAR_6))
 return VAR_4;
    }
  return VAR_0;
}
