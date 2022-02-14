
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum g_part_alias { ____Placeholder_g_part_alias } g_part_alias ;
struct TYPE_2__ {int alias; char const* lexeme; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

const char *
FUNC_0(enum g_part_alias VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3].alias != VAR_2)
   continue;
  return (VAR_1[VAR_3].lexeme);
 }

 return (((void*)0));
}
