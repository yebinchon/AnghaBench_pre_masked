
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct vtscsi_softc {int vtscsi_flags; } ;
struct vtscsi_request {int vsr_flags; int vsr_callout; union ccb* vsr_ccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vtscsi_softc*) ;
 int FUNC_1 (struct vtscsi_softc*) ;
 int FUNC_2 (struct vtscsi_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct vtscsi_softc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vtscsi_softc*,int ,char*,struct vtscsi_request*,union ccb*) ;
 int FUNC_7 (struct vtscsi_softc*,struct vtscsi_request*) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(struct vtscsi_softc *VAR_5, struct vtscsi_request *VAR_6)
{
 union ccb *VAR_7;
 int VAR_8;

 VAR_7 = VAR_6->vsr_ccb;

 FUNC_6(VAR_5, VAR_4, "req=%p ccb=%p\n", VAR_6, VAR_7);
 VAR_8 = (VAR_5->vtscsi_flags & VAR_2) != 0;
 if (VAR_8 != 0)
  FUNC_1(VAR_5);
 else
  FUNC_2(VAR_5);

 if (VAR_6->vsr_flags & VAR_3) {
  if (VAR_8 != 0)
   FUNC_4(&VAR_6->vsr_callout);
  else
   FUNC_5(&VAR_6->vsr_callout);
 }

 if (VAR_7 != ((void*)0)) {
  if (VAR_8 != 0) {
   FUNC_0(VAR_5);
   VAR_7->ccb_h.status = VAR_0;
  } else
   VAR_7->ccb_h.status = VAR_1;
  FUNC_8(VAR_7);
  if (VAR_8 != 0)
   FUNC_3(VAR_5);
 }

 FUNC_7(VAR_5, VAR_6);
}
