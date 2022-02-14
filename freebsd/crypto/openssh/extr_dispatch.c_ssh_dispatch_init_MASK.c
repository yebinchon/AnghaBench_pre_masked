
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ssh {int ** dispatch; } ;
typedef int dispatch_fn ;


 size_t VAR_0 ;

void
FUNC_0(struct ssh *VAR_1, dispatch_fn *VAR_2)
{
 u_int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->dispatch[VAR_3] = VAR_2;
}
