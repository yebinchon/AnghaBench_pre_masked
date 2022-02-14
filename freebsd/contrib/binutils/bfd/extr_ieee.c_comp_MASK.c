
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int address; } ;
typedef TYPE_1__ arelent ;



__attribute__((used)) static int
FUNC_0 (const void * VAR_0, const void * VAR_1)
{
  arelent *VAR_2 = *((arelent **) VAR_0);
  arelent *VAR_3 = *((arelent **) VAR_1);
  return VAR_2->address - VAR_3->address;
}
