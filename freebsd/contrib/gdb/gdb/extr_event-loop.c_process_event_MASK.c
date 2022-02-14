
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; struct TYPE_4__* next_event; int (* proc ) (int) ;} ;
typedef TYPE_1__ gdb_event ;
typedef int (* event_handler_func ) (int) ;
struct TYPE_5__ {TYPE_1__* last_event; TYPE_1__* first_event; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4 (void)
{
  gdb_event *VAR_1, *VAR_2;
  event_handler_func *VAR_3;
  int VAR_4;





  if (FUNC_0 ())
    {
      FUNC_1 ();
      return 1;
    }




  for (VAR_1 = VAR_0.first_event; VAR_1 != ((void*)0);
       VAR_1 = VAR_1->next_event)
    {


      VAR_3 = &VAR_1->proc;
      VAR_4 = VAR_1->fd;
      if (VAR_0.first_event == VAR_1)
 {
   VAR_0.first_event = VAR_1->next_event;
   if (VAR_1->next_event == ((void*)0))
     VAR_0.last_event = ((void*)0);
 }
      else
 {
   VAR_2 = VAR_0.first_event;
   while (VAR_2->next_event != VAR_1)
     VAR_2 = VAR_2->next_event;

   VAR_2->next_event = VAR_1->next_event;
   if (VAR_1->next_event == ((void*)0))
     VAR_0.last_event = VAR_2;
 }
      FUNC_3 (VAR_1);


      (*VAR_3) (VAR_4);
      return 1;
    }


  return 0;
}
