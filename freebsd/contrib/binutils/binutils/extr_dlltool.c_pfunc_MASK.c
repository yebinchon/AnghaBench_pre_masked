
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ordinal; } ;
typedef TYPE_1__ export_type ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  export_type *VAR_2 = *(export_type **) VAR_0;
  export_type *VAR_3 = *(export_type **) VAR_1;
  if (VAR_2->ordinal == VAR_3->ordinal)
    return 0;


  if (VAR_2->ordinal == -1)
    return 1;
  if (VAR_3->ordinal == -1)
    return -1;
  return (VAR_2->ordinal - VAR_3->ordinal);
}
