
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_handler {int ih_name; struct intr_event* ih_event; } ;
struct intr_event {void* ie_source; } ;


 int FUNC_0 (int ,char*) ;

void *
FUNC_1(void *VAR_0)
{
 struct intr_handler *VAR_1;
 struct intr_event *VAR_2;

 VAR_1 = (struct intr_handler *)VAR_0;
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_2 = VAR_1->ih_event;
 FUNC_0(VAR_2 != ((void*)0),
     ("interrupt handler \"%s\" has a NULL interrupt event",
     VAR_1->ih_name));
 return (VAR_2->ie_source);
}
