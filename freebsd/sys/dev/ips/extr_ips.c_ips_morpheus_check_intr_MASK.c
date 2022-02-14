
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_11__ {TYPE_4__* commandarray; int dev; } ;
typedef TYPE_3__ ips_softc_t ;
struct TYPE_10__ {int value; } ;
struct TYPE_12__ {int (* callback ) (TYPE_4__*) ;scalar_t__ timeout; TYPE_2__ status; } ;
typedef TYPE_4__ ips_command_t ;
struct TYPE_9__ {int command_id; } ;
struct TYPE_13__ {int value; TYPE_1__ fields; } ;
typedef TYPE_5__ ips_cmd_status_t ;


 int FUNC_0 (int,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int) ;
 void* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static __inline int FUNC_4(ips_softc_t *VAR_3)
{
 int VAR_4;
 ips_cmd_status_t VAR_5;
 ips_command_t *VAR_6;
 int VAR_7 = 0;
 u_int32_t VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_1);
 FUNC_1(9, "interrupt registers out:%x\n", VAR_8);
 if(!(VAR_8 & VAR_0)){
  FUNC_0(2,VAR_3->dev, "got a non-command irq\n");
  return (0);
 }
 while((VAR_5.value = FUNC_2(VAR_3, VAR_2)) != 0xffffffff){
  VAR_4 = VAR_5.fields.command_id;
  VAR_6 = &VAR_3->commandarray[VAR_4];
  VAR_6->status.value = VAR_5.value;
  VAR_6->timeout = 0;
  VAR_6->callback(VAR_6);

  VAR_7 = 1;
 }
        return (VAR_7);
}
