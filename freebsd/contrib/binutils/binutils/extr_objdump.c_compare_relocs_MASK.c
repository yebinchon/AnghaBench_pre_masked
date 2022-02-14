
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ address; } ;
typedef TYPE_1__ arelent ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const arelent *VAR_2 = * (const arelent **) VAR_0;
  const arelent *VAR_3 = * (const arelent **) VAR_1;

  if (VAR_2->address > VAR_3->address)
    return 1;
  else if (VAR_2->address < VAR_3->address)
    return -1;



  if (VAR_2 > VAR_3)
    return 1;
  else if (VAR_2 < VAR_3)
    return -1;
  else
    return 0;
}
