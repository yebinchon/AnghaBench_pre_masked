
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int state_func_t ;
struct TYPE_3__ {int se_flags; struct TYPE_3__* se_next; } ;
typedef TYPE_1__ session_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static state_func_t
FUNC_0(void)
{
 session_t *VAR_3;

 for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->se_next)
  VAR_3->se_flags |= VAR_0;

 return (state_func_t) VAR_1;
}
