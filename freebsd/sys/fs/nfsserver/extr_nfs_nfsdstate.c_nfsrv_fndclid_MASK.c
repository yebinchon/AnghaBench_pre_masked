
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ qval; } ;
typedef TYPE_1__ nfsquad_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(nfsquad_t *VAR_1, nfsquad_t VAR_2, int VAR_3)
{
 int VAR_4;


 if (VAR_3 > VAR_0)
  return (1);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_1[VAR_4].qval == VAR_2.qval)
   return (1);
 return (0);
}
