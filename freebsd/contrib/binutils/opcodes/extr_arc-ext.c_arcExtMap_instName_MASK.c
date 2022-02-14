
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** instructions; } ;
struct TYPE_3__ {int flags; char const* name; } ;


 TYPE_2__ VAR_0 ;

const char *
FUNC_0(int VAR_1, int VAR_2, int *VAR_3)
{
    if (VAR_1 == 3)
      {

 if (VAR_2 < 0x09 || VAR_2 == 0x3f)
   return 0;
 else
   VAR_1 = 0x1f - 0x10 + VAR_2 - 0x09 + 1;
      }
    else
      if (VAR_1 < 0x10)
 return 0;
    else
      VAR_1 -= 0x10;
    if (!VAR_0.instructions[VAR_1])
      return 0;
    *VAR_3 = VAR_0.instructions[VAR_1]->flags;
    return VAR_0.instructions[VAR_1]->name;
}
