
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ccb_state; int status; int path; } ;
struct TYPE_3__ {scalar_t__ cdb_bytes; } ;
struct ccb_scsiio {TYPE_1__ cdb_io; scalar_t__ data_ptr; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_scsiio csio; } ;
struct scsi_mode_sense_6 {int byte2; } ;
struct scsi_mode_header_6 {int dummy; } ;
struct page_element_address_assignment {int ndte; int fdtea; int niee; int fieea; int nse; int fsea; int nmte; int mtea; } ;
struct ch_softc {int* sc_counts; int state; int quirks; void** sc_firsts; void* sc_picker; } ;
struct cam_periph {int flags; int path; scalar_t__ softc; } ;
typedef int announce_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;

 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_0 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct cam_periph*) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (union ccb*,int ,int) ;
 scalar_t__ FUNC_5 (struct scsi_mode_header_6*) ;
 int FUNC_6 (struct scsi_mode_header_6*,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct ccb_scsiio*) ;
 int FUNC_9 (char*,int,char*,int,char*,int,char*,int,char*,int,char*) ;
 int FUNC_10 (union ccb*) ;
 int FUNC_11 (struct cam_periph*,char*) ;
 int FUNC_12 (struct cam_periph*,int ,int ) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (union ccb*) ;

__attribute__((used)) static void
FUNC_15(struct cam_periph *VAR_18, union ccb *VAR_19)
{
 struct ch_softc *VAR_20;
 struct ccb_scsiio *VAR_21;

 VAR_20 = (struct ch_softc *)VAR_18->softc;
 VAR_21 = &VAR_19->csio;

 switch(VAR_19->ccb_h.ccb_state) {
 case 128:
 {
  struct scsi_mode_header_6 *VAR_22;
  struct page_element_address_assignment *VAR_23;
  char VAR_24[80];


  VAR_22 = (struct scsi_mode_header_6 *)VAR_21->data_ptr;

  VAR_23 = (struct page_element_address_assignment *)
   FUNC_5(VAR_22);

  if ((VAR_19->ccb_h.status & VAR_5) == VAR_2){

   VAR_20->sc_firsts[VAR_8] = FUNC_7(VAR_23->mtea);
   VAR_20->sc_counts[VAR_8] = FUNC_7(VAR_23->nmte);
   VAR_20->sc_firsts[VAR_9] = FUNC_7(VAR_23->fsea);
   VAR_20->sc_counts[VAR_9] = FUNC_7(VAR_23->nse);
   VAR_20->sc_firsts[VAR_7] = FUNC_7(VAR_23->fieea);
   VAR_20->sc_counts[VAR_7] = FUNC_7(VAR_23->niee);
   VAR_20->sc_firsts[VAR_6] = FUNC_7(VAR_23->fdtea);
   VAR_20->sc_counts[VAR_6] = FUNC_7(VAR_23->ndte);
   VAR_20->sc_picker = VAR_20->sc_firsts[VAR_8];


   FUNC_9(VAR_24, sizeof(VAR_24),
    "%d slot%s, %d drive%s, "
    "%d picker%s, %d portal%s",
        VAR_20->sc_counts[VAR_9],
    (VAR_20->sc_counts[VAR_9]) == 1 ? "" : "s",
        VAR_20->sc_counts[VAR_6],
    (VAR_20->sc_counts[VAR_6]) == 1 ? "" : "s",
        VAR_20->sc_counts[VAR_8],
    (VAR_20->sc_counts[VAR_8]) == 1 ? "" : "s",
        VAR_20->sc_counts[VAR_7],
    (VAR_20->sc_counts[VAR_7]) == 1 ? "" : "s");

   if (VAR_24[0] != '\0') {
    FUNC_11(VAR_18, VAR_24);
    FUNC_12(VAR_18, VAR_20->quirks,
        VAR_10);
   }
  } else {
   int VAR_25;

   VAR_25 = FUNC_4(VAR_19, VAR_3,
     VAR_16 | VAR_15);




   if (VAR_25 == VAR_13) {




    return;
   } else if (VAR_25 != 0) {
    struct scsi_mode_sense_6 *VAR_26;
    int VAR_27, VAR_28;

    VAR_26 = (struct scsi_mode_sense_6 *)
     VAR_19->csio.cdb_io.cdb_bytes;
    VAR_27 = (VAR_19->ccb_h.status &
        VAR_0) != 0;
    if ((VAR_26->byte2 & VAR_17) != 0 &&
        (VAR_18->flags & VAR_1) == 0) {
     VAR_26->byte2 &= ~VAR_17;
     FUNC_10(VAR_19);
     VAR_20->quirks |= VAR_11;
     VAR_28 = 1;
    } else
     VAR_28 = 0;


    if (VAR_27)
     FUNC_3(VAR_19->ccb_h.path,
                       0,
                    0,
                  0,
                        0);

    if (VAR_28)
     return;

    if ((VAR_19->ccb_h.status & VAR_5)
        == VAR_4)
     FUNC_8(&VAR_19->csio);
    else {
     FUNC_13(VAR_18->path,
         "got CAM status %#x\n",
         VAR_19->ccb_h.status);
    }
    FUNC_13(VAR_18->path, "fatal error, failed "
        "to attach to device\n");

    FUNC_1(VAR_18);

   }
  }
  VAR_20->state = VAR_12;
  FUNC_6(VAR_22, VAR_14);
  FUNC_14(VAR_19);
  FUNC_2(VAR_18);
  return;
 }
 default:
  break;
 }
 FUNC_14(VAR_19);
}
