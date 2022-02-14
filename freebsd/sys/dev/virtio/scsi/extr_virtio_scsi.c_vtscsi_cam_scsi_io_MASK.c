
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_scsiio {scalar_t__ cdb_len; } ;
struct ccb_hdr {int flags; void* status; } ;
union ccb {struct ccb_scsiio csio; struct ccb_hdr ccb_h; } ;
struct vtscsi_softc {int vtscsi_flags; } ;
struct cam_sim {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vtscsi_softc*,int ,char*,int,union ccb*,void*) ;
 int FUNC_1 (struct vtscsi_softc*,union ccb*) ;
 int FUNC_2 (union ccb*) ;

__attribute__((used)) static void
FUNC_3(struct vtscsi_softc *VAR_7, struct cam_sim *VAR_8,
    union ccb *VAR_9)
{
 struct ccb_hdr *VAR_10;
 struct ccb_scsiio *VAR_11;
 int VAR_12;

 VAR_10 = &VAR_9->ccb_h;
 VAR_11 = &VAR_9->csio;

 if (VAR_11->cdb_len > VAR_4) {
  VAR_12 = VAR_3;
  VAR_10->status = VAR_2;
  goto done;
 }

 if ((VAR_10->flags & VAR_1) == VAR_0 &&
     (VAR_7->vtscsi_flags & VAR_6) == 0) {
  VAR_12 = VAR_3;
  VAR_10->status = VAR_2;
  goto done;
 }

 VAR_12 = FUNC_1(VAR_7, VAR_9);

done:
 if (VAR_12) {
  FUNC_0(VAR_7, VAR_5,
      "error=%d ccb=%p status=%#x\n", VAR_12, VAR_9, VAR_10->status);
  FUNC_2(VAR_9);
 }
}
