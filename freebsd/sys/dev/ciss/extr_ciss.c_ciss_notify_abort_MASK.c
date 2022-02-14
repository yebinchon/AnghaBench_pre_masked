
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ciss_softc {int ciss_flags; int ciss_mtx; struct ciss_request* ciss_periodic_notify; } ;
struct ciss_request {int * cr_data; struct ciss_command* cr_cc; int cr_length; } ;
struct ciss_notify_cdb {int length; int command; int opcode; } ;
struct TYPE_8__ {int cdb_length; int * cdb; scalar_t__ timeout; int direction; int attribute; int type; } ;
struct TYPE_5__ {scalar_t__ target; scalar_t__ bus; int mode; } ;
struct TYPE_6__ {TYPE_1__ physical; } ;
struct TYPE_7__ {TYPE_2__ address; } ;
struct ciss_command {TYPE_4__ cdb; TYPE_3__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ciss_notify_cdb*,int) ;
 int FUNC_1 (struct ciss_softc*,struct ciss_request**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ciss_softc*) ;
 int FUNC_4 (struct ciss_request*) ;
 int FUNC_5 (struct ciss_softc*,char*,...) ;
 int FUNC_6 (struct ciss_request*) ;
 int FUNC_7 (struct ciss_request*,int*,int*) ;
 int FUNC_8 (struct ciss_request*,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;
 int VAR_15 ;
 int * FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (struct ciss_request**,int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_15(struct ciss_softc *VAR_16)
{
    struct ciss_request *VAR_17;
    struct ciss_command *VAR_18;
    struct ciss_notify_cdb *VAR_19;
    int VAR_20, VAR_21, VAR_22;

    FUNC_10(1);

    VAR_17 = ((void*)0);
    VAR_20 = 0;


    if (!(VAR_16->ciss_flags & VAR_4))
 goto out;


    if ((VAR_20 = FUNC_1(VAR_16, &VAR_17)))
 goto out;


    if ((VAR_17->cr_data = FUNC_13(VAR_7, VAR_6, VAR_13)) == ((void*)0)) {
 FUNC_9(0, "can't get notify event request buffer");
 VAR_20 = VAR_11;
 goto out;
    }
    VAR_17->cr_length = VAR_7;


    VAR_18 = VAR_17->cr_cc;
    VAR_18->header.address.physical.mode = VAR_5;
    VAR_18->header.address.physical.bus = 0;
    VAR_18->header.address.physical.target = 0;
    VAR_18->cdb.cdb_length = sizeof(*VAR_19);
    VAR_18->cdb.type = VAR_2;
    VAR_18->cdb.attribute = VAR_0;
    VAR_18->cdb.direction = VAR_1;
    VAR_18->cdb.timeout = 0;

    VAR_19 = (struct ciss_notify_cdb *)&(VAR_18->cdb.cdb[0]);
    FUNC_0(VAR_19, sizeof(*VAR_19));
    VAR_19->opcode = VAR_8;
    VAR_19->command = VAR_3;
    VAR_19->length = FUNC_12(VAR_7);







    if ((VAR_20 = FUNC_8(VAR_17, 60 * 1000)) != 0) {
 FUNC_5(VAR_16, "Abort Notify Event command failed (%d)\n", VAR_20);
 goto out;
    }




    FUNC_7(VAR_17, &VAR_21, &VAR_22);
    switch(VAR_21) {
    case 129:
 break;
    case 130:




 VAR_20 = FUNC_3(VAR_16);
 if (VAR_20 != 0)
     goto out;
 break;

    case 128:




 if (VAR_22 == VAR_9) {
     if (VAR_16->ciss_periodic_notify != ((void*)0))
  FUNC_6(VAR_16->ciss_periodic_notify);
     VAR_20 = 0;
     goto out;
 }


    default:
 FUNC_5(VAR_16, "Abort Notify Event command failed (%s)\n",
      FUNC_2(VAR_21));
 VAR_20 = VAR_10;
 goto out;
    }
    while (VAR_16->ciss_periodic_notify != ((void*)0)) {
 VAR_20 = FUNC_14(&VAR_16->ciss_periodic_notify, &VAR_16->ciss_mtx, VAR_14, "cissNEA", VAR_15 * 5);
 if (VAR_20 == VAR_12) {
     FUNC_5(VAR_16, "Notify Event command failed to abort, adapter may wedge.\n");
     break;
 }
    }

 out:

    if (VAR_17 != ((void*)0)) {
 if (VAR_17->cr_data != ((void*)0))
     FUNC_11(VAR_17->cr_data, VAR_6);
 FUNC_6(VAR_17);
    }
    if (VAR_20 == 0)
 VAR_16->ciss_flags &= ~VAR_4;
    return(VAR_20);
}
