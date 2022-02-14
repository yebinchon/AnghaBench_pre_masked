
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char* ptr; } ;
typedef TYPE_1__ sb ;



int
FUNC_0 (int VAR_0, sb *VAR_1)
{
  while (VAR_0 < VAR_1->len
  && (VAR_1->ptr[VAR_0] == ' '
      || VAR_1->ptr[VAR_0] == '\t'))
    VAR_0++;

  if (VAR_0 < VAR_1->len
      && VAR_1->ptr[VAR_0] == ',')
    VAR_0++;

  while (VAR_0 < VAR_1->len
  && (VAR_1->ptr[VAR_0] == ' '
      || VAR_1->ptr[VAR_0] == '\t'))
    VAR_0++;

  return VAR_0;
}
