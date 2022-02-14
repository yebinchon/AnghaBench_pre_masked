
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ciss_softc {int ciss_flags; struct ciss_request* ciss_periodic_notify; } ;
struct ciss_request {int * cr_data; struct ciss_command* cr_cc; int cr_length; int cr_tag; int cr_complete; } ;
struct ciss_notify_cdb {int new_only; int length; scalar_t__ seek_to_oldest; scalar_t__ ordered; scalar_t__ synchronous; scalar_t__ timeout; int command; int opcode; } ;
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
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ciss_softc*,struct ciss_request**) ;
 int VAR_12 ;
 int FUNC_2 (struct ciss_request*) ;
 int FUNC_3 (struct ciss_request*) ;
 int FUNC_4 (struct ciss_request*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(struct ciss_softc *VAR_13)
{
    struct ciss_request *VAR_14;
    struct ciss_command *VAR_15;
    struct ciss_notify_cdb *VAR_16;
    int VAR_17;

    FUNC_6(1);

    VAR_14 = VAR_13->ciss_periodic_notify;


    if (VAR_14 == ((void*)0)) {
 if ((VAR_17 = FUNC_1(VAR_13, &VAR_14)) != 0) {
     FUNC_5(0, "can't get notify event request");
     goto out;
 }
 VAR_13->ciss_periodic_notify = VAR_14;
 VAR_14->cr_complete = VAR_12;
 FUNC_5(1, "acquired request %d", VAR_14->cr_tag);
    }






    if (VAR_14->cr_data == ((void*)0)) {
 if ((VAR_14->cr_data = FUNC_9(VAR_8, VAR_7, VAR_11)) == ((void*)0)) {
     FUNC_5(0, "can't get notify event request buffer");
     VAR_17 = VAR_10;
     goto out;
 }
 VAR_14->cr_length = VAR_8;
    }


    FUNC_2(VAR_14);


    VAR_15 = VAR_14->cr_cc;
    VAR_15->header.address.physical.mode = VAR_6;
    VAR_15->header.address.physical.bus = 0;
    VAR_15->header.address.physical.target = 0;

    VAR_15->cdb.cdb_length = sizeof(*VAR_16);
    VAR_15->cdb.type = VAR_2;
    VAR_15->cdb.attribute = VAR_0;
    VAR_15->cdb.direction = VAR_1;
    VAR_15->cdb.timeout = 0;

    VAR_16 = (struct ciss_notify_cdb *)&(VAR_15->cdb.cdb[0]);
    FUNC_0(VAR_14->cr_data, VAR_8);
    VAR_16->opcode = VAR_9;
    VAR_16->command = VAR_3;
    VAR_16->timeout = 0;
    VAR_16->synchronous = 0;
    VAR_16->ordered = 0;
    VAR_16->seek_to_oldest = 0;
    if ((VAR_13->ciss_flags & VAR_5) == 0)
 VAR_16->new_only = 1;
    else
 VAR_16->new_only = 0;
    VAR_16->length = FUNC_8(VAR_8);


    VAR_17 = FUNC_4(VAR_14);

 out:
    if (VAR_17) {
 if (VAR_14 != ((void*)0)) {
     if (VAR_14->cr_data != ((void*)0))
  FUNC_7(VAR_14->cr_data, VAR_7);
     FUNC_3(VAR_14);
 }
 VAR_13->ciss_periodic_notify = ((void*)0);
 FUNC_5(0, "can't submit notify event request");
 VAR_13->ciss_flags &= ~VAR_4;
    } else {
 FUNC_5(1, "notify event submitted");
 VAR_13->ciss_flags |= VAR_4;
    }
}
