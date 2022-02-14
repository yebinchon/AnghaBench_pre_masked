
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* be_move_done ) (union ctl_io*) ;} ;
struct TYPE_5__ {int flags; TYPE_1__* ctl_private; } ;
union ctl_io {TYPE_3__ scsiio; TYPE_2__ io_hdr; } ;
struct cfumass_softc {scalar_t__ sc_current_flags; union ctl_io* sc_ctl_io; } ;
struct TYPE_4__ {struct cfumass_softc* ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cfumass_softc*,char*) ;
 int FUNC_1 (struct cfumass_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct cfumass_softc*) ;
 int FUNC_3 (struct cfumass_softc*,char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct cfumass_softc*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (union ctl_io*) ;

__attribute__((used)) static void
FUNC_8(union ctl_io *VAR_7)
{
 struct cfumass_softc *VAR_8;

 VAR_8 = VAR_7->io_hdr.ctl_private[VAR_6].ptr;

 FUNC_0(VAR_8, "go");

 FUNC_1(VAR_8);

 FUNC_4(VAR_8->sc_ctl_io == ((void*)0),
     ("sc_ctl_io is %p, should be NULL", VAR_8->sc_ctl_io));
 VAR_8->sc_ctl_io = VAR_7;

 if ((VAR_7->io_hdr.flags & VAR_5) == VAR_4) {




  if (VAR_8->sc_current_flags != VAR_0) {
   FUNC_3(VAR_8, "wrong bCBWFlags 0x%x, should be 0x%x",
       VAR_8->sc_current_flags, VAR_0);
   goto fail;
  }

  FUNC_5(VAR_8, VAR_2);
 } else {
  if (VAR_8->sc_current_flags != VAR_1) {
   FUNC_3(VAR_8, "wrong bCBWFlags 0x%x, should be 0x%x",
       VAR_8->sc_current_flags, VAR_1);
   goto fail;
  }

  FUNC_5(VAR_8, VAR_3);
 }

 FUNC_2(VAR_8);
 return;

fail:
 FUNC_6(&VAR_7->scsiio);
 VAR_7->scsiio.be_move_done(VAR_7);
 VAR_8->sc_ctl_io = ((void*)0);
}
