
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial {scalar_t__ refcnt; struct serial* next; struct serial* name; TYPE_1__* ops; int * async_handler; } ;
struct TYPE_2__ {int (* close ) (struct serial*) ;} ;


 int FUNC_0 (char*,int *) ;
 int * VAR_0 ;
 struct serial* VAR_1 ;
 int FUNC_1 (struct serial*,int *,int *) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (struct serial*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct serial*) ;

__attribute__((used)) static void
FUNC_5 (struct serial *VAR_4, int VAR_5)
{
  struct serial *VAR_6;

  VAR_0 = ((void*)0);

  if (VAR_3)
    {
      FUNC_0 ("\nEnd of log\n", VAR_3);
      VAR_2 = 0;


      FUNC_3 (VAR_3);
      VAR_3 = ((void*)0);
    }




  if (!VAR_4)
    return;

  VAR_4->refcnt--;
  if (VAR_4->refcnt > 0)
    return;


  if (VAR_4->async_handler != ((void*)0))
    FUNC_1 (VAR_4, ((void*)0), ((void*)0));

  if (VAR_5)
    VAR_4->ops->close (VAR_4);

  if (VAR_4->name)
    FUNC_4 (VAR_4->name);

  if (VAR_1 == VAR_4)
    VAR_1 = VAR_1->next;
  else
    for (VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next)
      {
 if (VAR_6->next != VAR_4)
   continue;

 VAR_6->next = VAR_6->next->next;
 break;
      }

  FUNC_4 (VAR_4);
}
