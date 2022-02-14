
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ciss_softc {scalar_t__ ciss_heartbeat; int ciss_heart_attack; int ciss_flags; int ciss_periodic; TYPE_1__* ciss_cfg; } ;
struct ciss_request {int cr_complete; struct ciss_command* cr_cc; } ;
struct TYPE_4__ {int cdb_length; int * cdb; scalar_t__ timeout; int direction; int attribute; int type; } ;
struct ciss_command {TYPE_2__ cdb; } ;
struct TYPE_3__ {scalar_t__ heartbeat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,void (*) (void*),struct ciss_softc*) ;
 int FUNC_1 (struct ciss_softc*) ;
 int FUNC_2 (struct ciss_softc*,struct ciss_request**) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct ciss_softc*) ;
 int FUNC_4 (struct ciss_softc*,char*) ;
 int FUNC_5 (struct ciss_request*) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_8(void *VAR_9)
{
    struct ciss_softc *VAR_10;
    struct ciss_request *VAR_11 = ((void*)0);
    struct ciss_command *VAR_12 = ((void*)0);
    int VAR_13 = 0;

    FUNC_7(1);

    VAR_10 = (struct ciss_softc *)VAR_9;




    if (VAR_10->ciss_cfg->heartbeat == VAR_10->ciss_heartbeat) {
 VAR_10->ciss_heart_attack++;
 FUNC_6(0, "adapter heart attack in progress 0x%x/%d",
       VAR_10->ciss_heartbeat, VAR_10->ciss_heart_attack);
 if (VAR_10->ciss_heart_attack == 3) {
     FUNC_4(VAR_10, "ADAPTER HEARTBEAT FAILED\n");
     FUNC_1(VAR_10);
     return;
 }
    } else {
 VAR_10->ciss_heartbeat = VAR_10->ciss_cfg->heartbeat;
 VAR_10->ciss_heart_attack = 0;
 FUNC_6(3, "new heartbeat 0x%x", VAR_10->ciss_heartbeat);
    }




    if (VAR_7 != 0 && (VAR_13 = FUNC_2(VAR_10, &VAR_11)) == 0) {
 VAR_12 = VAR_11->cr_cc;
 VAR_11->cr_complete = VAR_6;
 VAR_12->cdb.cdb_length = 1;
 VAR_12->cdb.type = VAR_2;
 VAR_12->cdb.attribute = VAR_0;
 VAR_12->cdb.direction = VAR_1;
 VAR_12->cdb.timeout = 0;
 VAR_12->cdb.cdb[0] = VAR_5;

 if ((VAR_13 = FUNC_5(VAR_11)) != 0) {
     FUNC_4(VAR_10, "SENDING NOP MESSAGE FAILED\n");
 }
    }





    if (!(VAR_10->ciss_flags & VAR_3)) {
 FUNC_6(0, "(re)starting Event Notify chain");
 FUNC_3(VAR_10);
    }




    FUNC_0(&VAR_10->ciss_periodic, VAR_4 * VAR_8, FUNC_8, VAR_10);
}
