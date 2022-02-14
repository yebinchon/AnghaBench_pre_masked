
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_state_t ;
typedef int dtrace_enabling_t ;
struct TYPE_2__ {int dta_beganon; int * dta_enabling; int * dta_state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5)
{
 dtrace_state_t *VAR_6 = ((void*)0);
 dtrace_enabling_t *VAR_7;

 FUNC_5(&VAR_0);
 FUNC_5(&VAR_3);
 FUNC_5(&VAR_2);

 FUNC_1();

 FUNC_6(&VAR_0);
 if (VAR_1.dta_enabling != ((void*)0)) {
  FUNC_0(VAR_4 == VAR_1.dta_enabling);

  FUNC_3(((void*)0));
  VAR_6 = VAR_1.dta_state;
  FUNC_6(&VAR_2);
  FUNC_6(&VAR_3);

  FUNC_5(&VAR_0);
  FUNC_5(&VAR_3);
  FUNC_5(&VAR_2);

  if ((VAR_7 = VAR_1.dta_enabling) != ((void*)0))
   (void) FUNC_2(VAR_7, ((void*)0));

  FUNC_6(&VAR_0);
 }

 FUNC_6(&VAR_3);
 FUNC_6(&VAR_2);

 if (VAR_6 != ((void*)0)) {



  (void) FUNC_4(VAR_6, &VAR_1.dta_beganon);
 }
}
