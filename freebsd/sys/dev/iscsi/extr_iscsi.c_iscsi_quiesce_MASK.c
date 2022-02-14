
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sc_lock; int sc_sessions; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(void)
{
 FUNC_1(&VAR_1->sc_lock);
 if (!FUNC_0(&VAR_1->sc_sessions)) {
  FUNC_2(&VAR_1->sc_lock);
  return (VAR_0);
 }
 FUNC_2(&VAR_1->sc_lock);
 return (0);
}
