
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_state_t ;
struct TYPE_2__ {int * dta_state; int * dta_enabling; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static dtrace_state_t *
FUNC_3(void)
{
 dtrace_state_t *VAR_3;

 FUNC_0(FUNC_1(&VAR_1));

 if ((VAR_3 = VAR_0.dta_state) == ((void*)0)) {
  FUNC_0(VAR_0.dta_enabling == ((void*)0));
  return (((void*)0));
 }

 FUNC_0(VAR_0.dta_enabling != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 FUNC_2(VAR_0.dta_enabling);
 VAR_0.dta_enabling = ((void*)0);
 VAR_0.dta_state = ((void*)0);

 return (VAR_3);
}
