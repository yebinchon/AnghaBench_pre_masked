
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int * name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 TYPE_1__* VAR_1 ;

int
FUNC_1(const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].name != ((void*)0); VAR_3++) {
  if (FUNC_0(VAR_1[VAR_3].name, VAR_2) == 0)
   return (VAR_1[VAR_3].type);
 }
 return (VAR_0);
}
