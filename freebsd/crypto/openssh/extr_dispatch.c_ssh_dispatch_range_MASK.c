
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ssh {int ** dispatch; } ;
typedef int dispatch_fn ;


 size_t VAR_0 ;

void
FUNC_0(struct ssh *VAR_1, u_int VAR_2, u_int VAR_3, dispatch_fn *VAR_4)
{
 u_int VAR_5;

 for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5++) {
  if (VAR_5 >= VAR_0)
   break;
  VAR_1->dispatch[VAR_5] = VAR_4;
 }
}
