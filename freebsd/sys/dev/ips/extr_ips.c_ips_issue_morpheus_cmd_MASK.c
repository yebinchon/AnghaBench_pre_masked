
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int timeout; int command_phys_addr; TYPE_3__* sc; int (* callback ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ips_command_t ;
struct TYPE_7__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(ips_command_t *VAR_3)
{

 if(VAR_3->sc->state & VAR_1){
  FUNC_0(VAR_3, VAR_0);
  VAR_3->callback(VAR_3);
  return;
 }
 VAR_3->timeout = 10;
 FUNC_1(VAR_3->sc, VAR_2, VAR_3->command_phys_addr);
}
