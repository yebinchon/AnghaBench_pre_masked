
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int timeout; TYPE_3__* sc; int command_phys_addr; int (* callback ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ips_command_t ;
struct TYPE_9__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(ips_command_t *VAR_6)
{
 int VAR_7;

 if(VAR_6->sc->state & VAR_5){
  FUNC_2(VAR_6, VAR_4);
  VAR_6->callback(VAR_6);
  return;
 }
 VAR_6->timeout = 10;
 for(VAR_7 = 0; FUNC_1(VAR_6->sc, VAR_1) & VAR_3;
     VAR_7++ ){
  if( VAR_7 == 20){
FUNC_5("sem bit still set, can't send a command\n");
   return;
  }
  FUNC_0(500);
 }
 FUNC_4(VAR_6->sc, VAR_2, VAR_6->command_phys_addr);
 FUNC_3(VAR_6->sc, VAR_1, VAR_0);
}
