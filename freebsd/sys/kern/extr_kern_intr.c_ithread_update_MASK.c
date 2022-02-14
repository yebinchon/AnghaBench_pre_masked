
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct thread {int td_name; } ;
struct intr_thread {struct thread* it_thread; struct intr_event* it_event; } ;
struct intr_event {int ie_fullname; int ie_handlers; int ie_lock; } ;
struct TYPE_2__ {int ih_pri; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (struct thread*) ;

__attribute__((used)) static void
FUNC_8(struct intr_thread *VAR_2)
{
 struct intr_event *VAR_3;
 struct thread *VAR_4;
 u_char VAR_5;

 VAR_3 = VAR_2->it_event;
 VAR_4 = VAR_2->it_thread;
 FUNC_2(&VAR_3->ie_lock, VAR_0);


 if (FUNC_0(&VAR_3->ie_handlers))
  VAR_5 = VAR_1;
 else
  VAR_5 = FUNC_1(&VAR_3->ie_handlers)->ih_pri;


 FUNC_5(VAR_4->td_name, VAR_3->ie_fullname, sizeof(VAR_4->td_name));



 FUNC_6(VAR_4);
 FUNC_4(VAR_4, VAR_5);
 FUNC_7(VAR_4);
}
