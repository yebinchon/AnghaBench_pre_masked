
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_event {int ie_phase; scalar_t__* ie_active; int ie_lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct intr_event *VAR_1)
{
 int VAR_2;

 FUNC_5(&VAR_1->ie_lock, VAR_0);
 VAR_2 = VAR_1->ie_phase;





 FUNC_0(VAR_1->ie_active[!VAR_2] == 0, ("idle phase has activity"));
 FUNC_1(&VAR_1->ie_phase, !VAR_2);
 FUNC_3();






 while (VAR_1->ie_active[VAR_2] > 0)
  FUNC_4();
 FUNC_2();
}
