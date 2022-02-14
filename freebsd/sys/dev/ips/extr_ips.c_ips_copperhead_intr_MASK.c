
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int queue_mtx; TYPE_5__* commandarray; } ;
typedef TYPE_3__ ips_softc_t ;
struct TYPE_8__ {int command_id; } ;
struct TYPE_11__ {int value; TYPE_1__ fields; } ;
typedef TYPE_4__ ips_cmd_status_t ;
struct TYPE_9__ {int value; } ;
struct TYPE_12__ {int (* callback ) (TYPE_5__*) ;scalar_t__ timeout; TYPE_2__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*) ;

void FUNC_6(void *VAR_2)
{
        ips_softc_t *VAR_3 = (ips_softc_t *)VAR_2;
 int VAR_4;
 ips_cmd_status_t VAR_5;

 FUNC_3(&VAR_3->queue_mtx);
 while(FUNC_2(VAR_3, VAR_0) & VAR_1){
  VAR_5.value = FUNC_1(VAR_3);
  VAR_4 = VAR_5.fields.command_id;
  VAR_3->commandarray[VAR_4].status.value = VAR_5.value;
  VAR_3->commandarray[VAR_4].timeout = 0;
  VAR_3->commandarray[VAR_4].callback(&(VAR_3->commandarray[VAR_4]));
  FUNC_0(9, "ips: got command %d\n", VAR_4);
 }
 FUNC_4(&VAR_3->queue_mtx);
        return;
}
