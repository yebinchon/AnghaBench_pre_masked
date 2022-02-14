
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int entry; char* name; } ;
typedef TYPE_1__ trap_entry ;


 char* VAR_0 ;
 int VAR_1 ;
 TYPE_1__ const* VAR_2 ;

__attribute__((used)) static char *
FUNC_0 (unsigned int VAR_3)
{
  const trap_entry *VAR_4;

  for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_1; VAR_4++)
    if (VAR_4->entry == VAR_3)
      return VAR_4->name;

  return VAR_0;
}
