
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int size; unsigned int* rep; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool
FUNC_1 (unsigned int VAR_1, unsigned int VAR_2)
{
  FUNC_0 (VAR_1 < VAR_0->size && VAR_2 < VAR_0->size);
  if (VAR_1 != VAR_2 && VAR_0->rep[VAR_2] != VAR_1)
    {
      VAR_0->rep[VAR_2] = VAR_1;
      return 1;
    }
  return 0;
}
