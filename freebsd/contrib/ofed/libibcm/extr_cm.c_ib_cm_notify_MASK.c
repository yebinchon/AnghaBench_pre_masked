
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_ucm_notify {int event; int id; } ;
struct ib_cm_id {TYPE_1__* device; int handle; } ;
typedef enum ibv_event_type { ____Placeholder_ibv_event_type } ibv_event_type ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (void*,struct ib_ucm_notify*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ib_cm_id*) ;
 int FUNC_3 (int ,void*,int) ;

int FUNC_4(struct ib_cm_id *VAR_5, enum ibv_event_type VAR_6)
{
 struct ib_ucm_notify *VAR_7;
 void *VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_4 == 4) {
  if (VAR_6 == VAR_2)
   return FUNC_2(VAR_5);
  else
   return FUNC_1(VAR_0);
 }

 FUNC_0(VAR_8, VAR_7, VAR_3, VAR_10);
 VAR_7->id = VAR_5->handle;
 VAR_7->event = VAR_6;

 VAR_9 = FUNC_3(VAR_5->device->fd, VAR_8, VAR_10);
 if (VAR_9 != VAR_10)
  return (VAR_9 >= 0) ? FUNC_1(VAR_1) : -1;

 return 0;
}
