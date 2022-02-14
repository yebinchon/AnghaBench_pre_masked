
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ scsi_status; } ;
struct TYPE_7__ {int status; scalar_t__ io_type; int flags; TYPE_1__* ctl_private; } ;
struct TYPE_6__ {scalar_t__ task_action; } ;
union ctl_io {TYPE_4__ scsiio; TYPE_3__ io_hdr; TYPE_2__ taskio; } ;
struct cfumass_softc {int sc_current_status; int sc_queued; int * sc_ctl_io; } ;
struct TYPE_5__ {struct cfumass_softc* ptr; } ;


 int FUNC_0 (struct cfumass_softc*,char*) ;
 int FUNC_1 (struct cfumass_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct cfumass_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (struct cfumass_softc*,int ) ;
 int FUNC_5 (union ctl_io*) ;
 int FUNC_6 (union ctl_io*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(union ctl_io *VAR_12)
{
 struct cfumass_softc *VAR_13;

 VAR_13 = VAR_12->io_hdr.ctl_private[VAR_5].ptr;

 FUNC_0(VAR_13, "go");

 FUNC_3(((VAR_12->io_hdr.status & VAR_7) != VAR_8),
     ("invalid CTL status %#x", VAR_12->io_hdr.status));
 FUNC_3(VAR_13->sc_ctl_io == ((void*)0),
     ("sc_ctl_io is %p, should be NULL", VAR_13->sc_ctl_io));

 if (VAR_12->io_hdr.io_type == VAR_4 &&
     VAR_12->taskio.task_action == VAR_10) {



  FUNC_5(VAR_12);
  return;
 }





 if (((VAR_12->io_hdr.flags & VAR_1) &&
      (VAR_12->io_hdr.flags & VAR_2) == 0) ||
     (VAR_12->io_hdr.flags & VAR_3)) {
  FUNC_5(VAR_12);
  return;
 }

 if ((VAR_12->io_hdr.status & VAR_7) == VAR_9)
  VAR_13->sc_current_status = 0;
 else
  VAR_13->sc_current_status = 1;


 if ((VAR_12->io_hdr.status & VAR_7) == VAR_6 &&
     VAR_12->scsiio.scsi_status == VAR_11)
  FUNC_6(VAR_12);
 else
  FUNC_5(VAR_12);

 FUNC_1(VAR_13);
 FUNC_4(VAR_13, VAR_0);
 FUNC_2(VAR_13);

 FUNC_7(&VAR_13->sc_queued);
}
