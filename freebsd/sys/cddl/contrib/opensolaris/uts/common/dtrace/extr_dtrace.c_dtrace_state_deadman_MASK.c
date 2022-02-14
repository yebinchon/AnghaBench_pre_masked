
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ hrtime_t ;
struct TYPE_4__ {scalar_t__ dts_laststatus; int dts_deadman; scalar_t__ dts_alive; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_5__ {TYPE_1__* dta_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,void (*) (void*),TYPE_1__*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(void *VAR_6)
{
 dtrace_state_t *VAR_7 = VAR_6;
 hrtime_t VAR_8;

 FUNC_4();

 FUNC_1();

 VAR_8 = FUNC_2();

 if (VAR_7 != VAR_2.dta_state &&
     VAR_8 - VAR_7->dts_laststatus >= VAR_4)
  return;
 VAR_7->dts_alive = VAR_0;
 FUNC_3();
 VAR_7->dts_alive = VAR_8;

 FUNC_0(&VAR_7->dts_deadman, VAR_5 * VAR_3 / VAR_1,
     FUNC_5, VAR_7);
}
