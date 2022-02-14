
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial {void* async_context; int * async_handler; TYPE_1__* ops; } ;
typedef int serial_event_ftype ;
struct TYPE_2__ {int (* async ) (struct serial*,int ) ;} ;


 int FUNC_0 (struct serial*,int ) ;

void
FUNC_1 (struct serial *VAR_0,
       serial_event_ftype *VAR_1,
       void *VAR_2)
{

  if ((VAR_0->async_handler == ((void*)0))
      != (VAR_1 == ((void*)0)))
    VAR_0->ops->async (VAR_0, VAR_1 != ((void*)0));
  VAR_0->async_handler = VAR_1;
  VAR_0->async_context = VAR_2;
}
