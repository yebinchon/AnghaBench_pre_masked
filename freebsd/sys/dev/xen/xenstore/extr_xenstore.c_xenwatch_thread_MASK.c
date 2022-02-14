
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct xs_stored_msg* vec; int vec_size; TYPE_4__* handle; } ;
struct TYPE_6__ {TYPE_1__ watch; } ;
struct xs_stored_msg {TYPE_2__ u; } ;
struct TYPE_8__ {int (* callback ) (TYPE_4__*,char const**,int ) ;} ;
struct TYPE_7__ {int xenwatch_mutex; int watch_events_lock; int watch_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct xs_stored_msg* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct xs_stored_msg*,int ) ;
 int FUNC_3 (struct xs_stored_msg*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*,char const**,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static void
FUNC_10(void *VAR_6)
{
 struct xs_stored_msg *VAR_7;

 for (;;) {

  FUNC_4(&VAR_5.watch_events_lock);
  while (FUNC_0(&VAR_5.watch_events))
   FUNC_5(&VAR_5.watch_events,
       &VAR_5.watch_events_lock,
       VAR_2 | VAR_1, "waitev", VAR_3/10);

  FUNC_6(&VAR_5.watch_events_lock);
  FUNC_8(&VAR_5.xenwatch_mutex);

  FUNC_4(&VAR_5.watch_events_lock);
  VAR_7 = FUNC_1(&VAR_5.watch_events);
  if (VAR_7)
   FUNC_2(&VAR_5.watch_events, VAR_7, VAR_4);
  FUNC_6(&VAR_5.watch_events_lock);

  if (VAR_7 != ((void*)0)) {






   if (VAR_7->u.watch.handle->callback != ((void*)0))
    VAR_7->u.watch.handle->callback(
     VAR_7->u.watch.handle,
     (const char **)VAR_7->u.watch.vec,
     VAR_7->u.watch.vec_size);
   FUNC_3(VAR_7->u.watch.vec, VAR_0);
   FUNC_3(VAR_7, VAR_0);
  }

  FUNC_9(&VAR_5.xenwatch_mutex);
 }
}
