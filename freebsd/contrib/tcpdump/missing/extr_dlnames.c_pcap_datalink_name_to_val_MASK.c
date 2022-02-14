
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dlt; int * name; } ;


 scalar_t__ FUNC_0 (int *,char const*) ;
 TYPE_1__* VAR_0 ;

int
FUNC_1(const char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].name != ((void*)0); VAR_2++) {
  if (FUNC_0(VAR_0[VAR_2].name + sizeof("DLT_") - 1,
      VAR_1) == 0)
   return (VAR_0[VAR_2].dlt);
 }
 return (-1);
}
