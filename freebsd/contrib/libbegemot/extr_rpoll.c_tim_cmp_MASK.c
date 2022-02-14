
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ when; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_1, const void *VAR_2)
{
 int VAR_3 = *(const int *)VAR_1;
 int VAR_4 = *(const int *)VAR_2;

 return VAR_0[VAR_3].when < VAR_0[VAR_4].when ? -1
      : VAR_0[VAR_3].when > VAR_0[VAR_4].when ? +1
      : 0;
}
