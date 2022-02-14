
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* kb_name; int kb_unit; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*) ;

int
FUNC_2(char *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 if ((VAR_4 < 0) || (VAR_4 >= VAR_1))
  return (-1);

 for (VAR_5 = VAR_4; VAR_5 < VAR_1; ++VAR_5) {
  if (VAR_0[VAR_5] == ((void*)0))
   continue;
  if (!FUNC_0(VAR_0[VAR_5]))
   continue;
  if (FUNC_1("*", VAR_2) && FUNC_1(VAR_0[VAR_5]->kb_name, VAR_2))
   continue;
  if ((VAR_3 != -1) && (VAR_0[VAR_5]->kb_unit != VAR_3))
   continue;
  return (VAR_5);
 }

 return (-1);
}
