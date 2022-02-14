
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int buf ;
struct TYPE_7__ {int unused_service; TYPE_3__** services; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
struct TYPE_6__ {scalar_t__ callback; } ;
struct TYPE_8__ {TYPE_4__* instance; TYPE_1__ base; } ;
typedef TYPE_3__ VCHIQ_SERVICE_T ;
typedef TYPE_4__* VCHIQ_INSTANCE_T ;
struct TYPE_9__ {int mark; int pid; int completion_insert; int completion_remove; scalar_t__ connected; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,char*,unsigned int,int,char*,int,int) ;
 int FUNC_1 (void*,char*,int) ;
 TYPE_2__* FUNC_2 () ;

void
FUNC_3(void *VAR_2)
{
 VCHIQ_STATE_T *VAR_3 = FUNC_2();
 char VAR_4[80];
 int VAR_5;
 int VAR_6;




 for (VAR_6 = 0; VAR_6 < VAR_3->unused_service; VAR_6++) {
  VCHIQ_SERVICE_T *VAR_7 = VAR_3->services[VAR_6];
  VCHIQ_INSTANCE_T VAR_8;

  if (VAR_7 && (VAR_7->base.callback == VAR_1)) {
   VAR_8 = VAR_7->instance;
   if (VAR_8)
    VAR_8->mark = 0;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->unused_service; VAR_6++) {
  VCHIQ_SERVICE_T *VAR_9 = VAR_3->services[VAR_6];
  VCHIQ_INSTANCE_T VAR_10;

  if (VAR_9 && (VAR_9->base.callback == VAR_1)) {
   VAR_10 = VAR_9->instance;
   if (VAR_10 && !VAR_10->mark) {
    VAR_5 = FUNC_0(VAR_4, sizeof(VAR_4),
     "Instance %x: pid %d,%s completions "
      "%d/%d",
     (unsigned int)VAR_10, VAR_10->pid,
     VAR_10->connected ? " connected, " :
      "",
     VAR_10->completion_insert -
      VAR_10->completion_remove,
     VAR_0);

    FUNC_1(VAR_2, VAR_4, VAR_5 + 1);

    VAR_10->mark = 1;
   }
  }
 }
}
