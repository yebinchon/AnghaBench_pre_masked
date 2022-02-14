
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ccb_state; int * ccb_bp; } ;
union ccb {TYPE_1__ ccb_h; int csio; } ;
typedef int u_int8_t ;
struct scsi_mode_header_6 {int dummy; } ;
struct scsi_mode_blk_desc {int dummy; } ;
struct page_element_address_assignment {int dummy; } ;
struct ch_softc {int state; int quirks; } ;
struct cam_periph {scalar_t__ softc; } ;


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
 int FUNC_0 (void*,int) ;
 int VAR_11 ;
 void* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,int ,int ,int ,int ,int ,int *,int,int ,int ) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (union ccb*) ;

__attribute__((used)) static void
FUNC_6(struct cam_periph *VAR_12, union ccb *VAR_13)
{
 struct ch_softc *VAR_14;

 VAR_14 = (struct ch_softc *)VAR_12->softc;

 switch (VAR_14->state) {
 case 129:
 {
  FUNC_5(VAR_13);
  break;
 }
 case 128:
 {
  int VAR_15;
  void *VAR_16;





  VAR_15 = sizeof(struct scsi_mode_header_6) +
      sizeof(struct scsi_mode_blk_desc) +
     sizeof(struct page_element_address_assignment);

  VAR_16 = FUNC_1(VAR_15, VAR_7, VAR_6);

  if (VAR_16 == ((void*)0)) {
   FUNC_2("chstart: couldn't malloc mode sense data\n");
   break;
  }
  FUNC_0(VAR_16, VAR_15);




  FUNC_3(&VAR_13->csio,
                  1,
                 VAR_11,
                     VAR_5,
              (VAR_14->quirks & VAR_2) ?
     VAR_4 : VAR_10,
             VAR_8,
               VAR_1,
                    (u_int8_t *)VAR_16,
                    VAR_15,
                    VAR_9,
                  VAR_3);

  VAR_13->ccb_h.ccb_bp = ((void*)0);
  VAR_13->ccb_h.ccb_state = VAR_0;
  FUNC_4(VAR_13);
  break;
 }
 }
}
