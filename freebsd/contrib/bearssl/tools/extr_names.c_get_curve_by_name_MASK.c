
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; scalar_t__* sid; scalar_t__ name; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*) ;

int
FUNC_1(const char *VAR_1)
{
 size_t VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2 ++) {
  for (VAR_3 = 0; VAR_0[VAR_2].sid[VAR_3]; VAR_3 ++) {
   if (FUNC_0(VAR_0[VAR_2].sid[VAR_3], VAR_1)) {
    return VAR_0[VAR_2].id;
   }
  }
 }
 return -1;
}
