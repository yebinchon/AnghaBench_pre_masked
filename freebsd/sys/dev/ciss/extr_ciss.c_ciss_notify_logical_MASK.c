
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ciss_softc {struct ciss_ldrive** ciss_logical; } ;
struct TYPE_15__ {int logical_drive; } ;
struct TYPE_14__ {int failure_drive; int failure_bus; int logical_drive; } ;
struct TYPE_13__ {int logical_drive; } ;
struct TYPE_12__ {int logical_drive; int new_state; int previous_state; int spare_state; } ;
struct TYPE_16__ {TYPE_7__ consistency_completed; TYPE_6__ io_error; TYPE_5__ rebuild_aborted; TYPE_4__ logical_status; } ;
struct TYPE_9__ {int bus; } ;
struct TYPE_10__ {TYPE_1__ physical; } ;
struct ciss_notify {int subclass; int detail; TYPE_8__ data; TYPE_2__ device; } ;
struct ciss_ldrive {int cl_status; int cl_update; int cl_name; TYPE_3__* cl_lstatus; } ;
struct TYPE_11__ {int status; } ;





 int FUNC_0 (struct ciss_softc*,struct ciss_ldrive*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ciss_softc*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ciss_softc*) ;
 int FUNC_5 (struct ciss_softc*,char*,int,int ,...) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct ciss_softc *VAR_0, struct ciss_notify *VAR_1)
{
    struct ciss_ldrive *VAR_2;
    int VAR_3, VAR_4, VAR_5;

    FUNC_6(2);

    VAR_4 = VAR_1->device.physical.bus;
    VAR_5 = VAR_1->data.logical_status.logical_drive;
    VAR_2 = &VAR_0->ciss_logical[VAR_4][VAR_5];

    switch (VAR_1->subclass) {
    case 129:
 switch (VAR_1->detail) {
 case 0:
     FUNC_2(VAR_0, VAR_4, VAR_5);
     FUNC_5(VAR_0, "logical drive %d (%s) changed status %s->%s, spare status 0x%b\n",
   VAR_1->data.logical_status.logical_drive, VAR_2->cl_name,
   FUNC_3(VAR_1->data.logical_status.previous_state),
   FUNC_3(VAR_1->data.logical_status.new_state),
   VAR_1->data.logical_status.spare_state,
   "\20\1configured\2rebuilding\3failed\4in use\5available\n");




     VAR_3 = FUNC_1(VAR_1->data.logical_status.previous_state);
     VAR_2->cl_status = FUNC_1(VAR_1->data.logical_status.new_state);
     if (VAR_2->cl_lstatus != ((void*)0))
  VAR_2->cl_lstatus->status = VAR_1->data.logical_status.new_state;




     if (VAR_3 != VAR_2->cl_status) {
  VAR_2->cl_update = 1;
  FUNC_4(VAR_0);
     }

     break;

 case 1:
     FUNC_2(VAR_0, VAR_4, VAR_5);
     FUNC_5(VAR_0, "logical drive %d (%s) media exchanged, ready to go online\n",
   VAR_1->data.logical_status.logical_drive, VAR_2->cl_name);
     FUNC_0(VAR_0, VAR_2);

     VAR_2->cl_update = 1;
     VAR_2->cl_status = FUNC_1(VAR_1->data.logical_status.new_state);
     FUNC_4(VAR_0);
     break;

 case 2:
 case 3:
     FUNC_5(VAR_0, "rebuild of logical drive %d (%s) failed due to %s error\n",
   VAR_1->data.rebuild_aborted.logical_drive,
   VAR_2->cl_name,
   (VAR_1->detail == 2) ? "read" : "write");
     break;
 }
 break;

    case 130:
 if (VAR_1->detail == 0) {
     FUNC_5(VAR_0, "FATAL I/O ERROR on logical drive %d (%s), SCSI port %d ID %d\n",
   VAR_1->data.io_error.logical_drive,
   VAR_2->cl_name,
   VAR_1->data.io_error.failure_bus,
   VAR_1->data.io_error.failure_drive);

 }
 break;

    case 128:
 if (VAR_1->detail == 0)
     FUNC_5(VAR_0, "logical drive %d (%s) completed consistency initialisation\n",
   VAR_1->data.consistency_completed.logical_drive,
   VAR_2->cl_name);
 break;
    }
}
