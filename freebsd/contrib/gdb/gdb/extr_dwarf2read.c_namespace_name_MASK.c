
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct die_info {int dummy; } ;


 struct die_info* FUNC_0 (struct die_info*,struct dwarf2_cu*) ;
 char* FUNC_1 (struct die_info*,struct dwarf2_cu*) ;

__attribute__((used)) static const char *
FUNC_2 (struct die_info *VAR_0, int *VAR_1, struct dwarf2_cu *VAR_2)
{
  struct die_info *VAR_3;
  const char *VAR_4 = ((void*)0);



  for (VAR_3 = VAR_0;
       VAR_3 != ((void*)0);
       VAR_3 = FUNC_0 (VAR_0, VAR_2))
    {
      VAR_4 = FUNC_1 (VAR_3, VAR_2);
      if (VAR_4 != ((void*)0))
 break;
    }



  *VAR_1 = (VAR_4 == ((void*)0));
  if (*VAR_1)
    VAR_4 = "(anonymous namespace)";

  return VAR_4;
}
