
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int max_cmds; int state; int timer; int dev; scalar_t__ (* ips_adapter_reinit ) (TYPE_1__*,int) ;TYPE_2__* commandarray; int queue_mtx; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_8__ {int (* callback ) (TYPE_2__*) ;int timeout; } ;
typedef TYPE_2__ ips_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,void (*) (void*),TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_5)
{
 ips_softc_t *VAR_6 = VAR_5;
 int VAR_7, VAR_8 = 0;
 ips_command_t *VAR_9;

 FUNC_3(&VAR_6->queue_mtx, VAR_3);
 VAR_9 = &VAR_6->commandarray[0];
 for(VAR_7 = 0; VAR_7 < VAR_6->max_cmds; VAR_7++){
  if(!VAR_9[VAR_7].timeout){
   continue;
  }
  VAR_9[VAR_7].timeout--;
  if(!VAR_9[VAR_7].timeout){
   if(!(VAR_6->state & VAR_2)){
    VAR_6->state |= VAR_2;
    FUNC_1(VAR_6->dev, "WARNING: command timeout. Adapter is in toaster mode, resetting to known state\n");
   }
   FUNC_2(&VAR_9[VAR_7], VAR_0);
   VAR_9[VAR_7].callback(&VAR_9[VAR_7]);

  } else
   VAR_8 = 1;
 }
 if(!VAR_8 && (VAR_6->state & VAR_2)){
  if(VAR_6->ips_adapter_reinit(VAR_6, 1)){
   FUNC_1(VAR_6->dev, "AIEE! adapter reset failed, giving up and going home! Have a nice day.\n");
   VAR_6->state |= VAR_1;
   VAR_6->state &= ~VAR_2;



  } else
   VAR_6->state &= ~VAR_2;
 }
 if (VAR_6->state != VAR_1)
  FUNC_0(&VAR_6->timer, 10 * VAR_4, FUNC_6, VAR_6);
}
