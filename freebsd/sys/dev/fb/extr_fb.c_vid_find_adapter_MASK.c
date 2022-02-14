
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* va_name; int va_unit; } ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;

int
FUNC_1(char *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  if (VAR_0[VAR_4] == ((void*)0))
   continue;
  if (FUNC_0("*", VAR_2) && FUNC_0(VAR_0[VAR_4]->va_name, VAR_2))
   continue;
  if ((VAR_3 != -1) && (VAR_0[VAR_4]->va_unit != VAR_3))
   continue;
  return VAR_4;
 }
 return -1;
}
