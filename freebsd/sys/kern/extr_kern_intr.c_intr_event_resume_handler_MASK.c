
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_handler {int ih_flags; int ih_name; struct intr_event* ih_event; } ;
struct intr_event {int ie_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct intr_handler*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(void *VAR_2)
{
 struct intr_handler *VAR_3 = (struct intr_handler *)VAR_2;
 struct intr_event *VAR_4;

 if (VAR_3 == ((void*)0))
  return (VAR_0);
 VAR_4 = VAR_3->ih_event;
 FUNC_0(VAR_4 != ((void*)0),
     ("interrupt handler \"%s\" has a NULL interrupt event",
     VAR_3->ih_name));





 FUNC_2(&VAR_4->ie_lock);
 VAR_3->ih_flags &= ~VAR_1;
 FUNC_1(VAR_3);
 FUNC_3(&VAR_4->ie_lock);
 return (0);
}
