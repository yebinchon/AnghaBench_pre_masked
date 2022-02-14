
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * td_turnstile; int td_contested; } ;
struct TYPE_3__ {int tc_lock; int tc_turnstiles; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;

void
FUNC_2(void)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(&VAR_4[VAR_5].tc_turnstiles);
  FUNC_1(&VAR_4[VAR_5].tc_lock, "turnstile chain",
      ((void*)0), VAR_0);
 }
 FUNC_1(&VAR_2, "td_contested", ((void*)0), VAR_0);
 FUNC_0(&VAR_3);
 VAR_3 = ((void*)0);
}
