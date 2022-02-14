
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_5__ {scalar_t__ rcm; } ;
typedef TYPE_1__ SCR ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int *,size_t*) ;
 size_t FUNC_1 (TYPE_1__*,int ,scalar_t__) ;

size_t
FUNC_2(SCR *VAR_0, recno_t VAR_1, int VAR_2)
{
 size_t VAR_3;


 if (VAR_2) {
  if (FUNC_0(VAR_0, VAR_1, 0, ((void*)0), &VAR_3) || VAR_3 == 0)
   return (0);
  return (VAR_3 - 1);
 }


 if (VAR_0->rcm == 0)
  return (0);

 return (FUNC_1(VAR_0, VAR_1, VAR_0->rcm));
}
