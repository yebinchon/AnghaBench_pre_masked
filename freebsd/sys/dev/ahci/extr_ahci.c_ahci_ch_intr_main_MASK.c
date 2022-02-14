
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int status; int path; } ;
union ccb {TYPE_3__ ccb_h; } ;
typedef int uint32_t ;
typedef int u_int8_t ;
struct TYPE_8__ {int* rfis; } ;
struct ahci_channel {scalar_t__ numtslots; scalar_t__ numrslots; int caps; int quirks; int rslots; scalar_t__* numrslotspd; int numslots; scalar_t__* numtslotspd; int fatalerr; int r_mem; int recoverycmd; TYPE_6__* slot; union ccb* frozen; scalar_t__ fbs_enabled; TYPE_2__ dma; TYPE_1__* curr; scalar_t__ pm_present; } ;
typedef enum ahci_err_type { ____Placeholder_ahci_err_type } ahci_err_type ;
struct TYPE_12__ {TYPE_5__* ccb; } ;
struct TYPE_10__ {int target_id; } ;
struct TYPE_11__ {TYPE_4__ ccb_h; } ;
struct TYPE_7__ {scalar_t__ atapi; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 (struct ahci_channel*) ;
 int FUNC_3 (struct ahci_channel*,union ccb*) ;
 int FUNC_4 (TYPE_6__*,int) ;
 int FUNC_5 (struct ahci_channel*,int) ;
 int FUNC_6 (struct ahci_channel*,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void
FUNC_10(struct ahci_channel *VAR_34, uint32_t VAR_35)
{
 uint32_t VAR_36, VAR_37 = 0, VAR_38 = 0, VAR_39, VAR_40;
 enum ahci_err_type VAR_41;
 int VAR_42, VAR_43, VAR_44, VAR_45 = 0;


 FUNC_1(VAR_34->r_mem, VAR_17, VAR_35);

 if (VAR_34->numtslots != 0)
  VAR_36 = FUNC_0(VAR_34->r_mem, VAR_27);
 else
  VAR_36 = 0;
 if (VAR_34->numrslots != VAR_34->numtslots)
  VAR_36 |= FUNC_0(VAR_34->r_mem, VAR_7);

 if ((VAR_35 & VAR_25) &&
     (VAR_34->pm_present || VAR_34->curr[0].atapi != 0)) {
  if (VAR_34->caps & VAR_0)
   VAR_38 = FUNC_0(VAR_34->r_mem, VAR_29);
  else if (VAR_34->fbs_enabled) {
   u_int8_t *VAR_46 = VAR_34->dma.rfis + 0x58;

   for (VAR_42 = 0; VAR_42 < 16; VAR_42++) {
    if (VAR_46[1] & 0x80) {
     VAR_46[1] &= 0x7f;
         VAR_38 |= 1 << VAR_42;
        }
        VAR_46 += 256;
       }
  } else {
   u_int8_t *VAR_47 = VAR_34->dma.rfis + 0x58;

   if (VAR_47[1] & 0x80)
    VAR_38 = (1 << (VAR_47[1] & 0x0f));
  }
 }

 if (VAR_35 & (VAR_23 | VAR_24 | VAR_22 |
     VAR_21 | VAR_19 | VAR_20 | VAR_26)) {
  VAR_37 = FUNC_0(VAR_34->r_mem, VAR_28);
  if (VAR_37) {
   FUNC_1(VAR_34->r_mem, VAR_28, VAR_37);
   VAR_45 = FUNC_6(VAR_34, VAR_37);
  }
 }

 if ((VAR_35 & VAR_18) && !VAR_45)
  FUNC_2(VAR_34);

 if (VAR_35 & (VAR_22 | VAR_21 |
     VAR_19 | VAR_20 | VAR_26)) {
  if (VAR_34->quirks & VAR_30) {




   VAR_36 |= VAR_34->rslots;


   VAR_43 = FUNC_8(VAR_36) ? FUNC_7(VAR_36) - 1 : -1;
  } else {
   VAR_43 = (FUNC_0(VAR_34->r_mem, VAR_8) &
       VAR_9) >> VAR_10;
  }



  VAR_44 = -1;
  if (VAR_34->fbs_enabled) {
   uint32_t VAR_48 = FUNC_0(VAR_34->r_mem, VAR_11);
   if (VAR_48 & VAR_16) {
    VAR_44 = (VAR_48 & VAR_13)
        >> VAR_14;
   } else {
    for (VAR_42 = 0; VAR_42 < 16; VAR_42++) {
     if (VAR_34->numrslotspd[VAR_42] == 0)
      continue;
     if (VAR_44 == -1)
      VAR_44 = VAR_42;
     else if (VAR_44 != VAR_42) {
      VAR_44 = -2;
      break;
     }
    }
   }
  }
  VAR_40 = VAR_34->rslots & VAR_36;
 } else {
  VAR_43 = 0;
  VAR_40 = 0;
  VAR_44 = -1;
 }

 VAR_39 = VAR_34->rslots & ~VAR_36;
 for (VAR_42 = 0; VAR_42 < VAR_34->numslots; VAR_42++) {
  if ((VAR_39 >> VAR_42) & 1)
   FUNC_4(&VAR_34->slot[VAR_42], VAR_4);
 }

 if (VAR_40) {
  if (VAR_34->frozen) {
   union ccb *VAR_49 = VAR_34->frozen;
   VAR_34->frozen = ((void*)0);
   VAR_49->ccb_h.status = VAR_33 | VAR_32;
   if (!(VAR_49->ccb_h.status & VAR_31)) {
    FUNC_9(VAR_49->ccb_h.path, 1);
    VAR_49->ccb_h.status |= VAR_31;
   }
   FUNC_3(VAR_34, VAR_49);
  }
  for (VAR_42 = 0; VAR_42 < VAR_34->numslots; VAR_42++) {

   if (((VAR_40 >> VAR_42) & 1) == 0)
    continue;
   if (VAR_44 >= 0 &&
       VAR_34->slot[VAR_42].ccb->ccb_h.target_id != VAR_44)
    continue;
   if (VAR_35 & VAR_26) {
       if (VAR_44 != -2) {

    if (VAR_34->numtslotspd[
        VAR_34->slot[VAR_42].ccb->ccb_h.target_id] == 0) {

     if (VAR_42 == VAR_43)
      VAR_41 = VAR_6;
     else
      VAR_41 = VAR_1;
    } else {

     VAR_41 = VAR_3;
    }
       } else {
    VAR_41 = VAR_6;
    VAR_34->fatalerr = 1;
       }
   } else if (VAR_35 & VAR_21) {
    if (VAR_34->numtslots == 0 && VAR_42 != VAR_43 && VAR_44 != -2)
     VAR_41 = VAR_1;
    else
     VAR_41 = VAR_5;
   } else
    VAR_41 = VAR_2;
   FUNC_4(&VAR_34->slot[VAR_42], VAR_41);
  }




  if (VAR_34->rslots != 0 && !VAR_34->recoverycmd)
   FUNC_1(VAR_34->r_mem, VAR_11, VAR_15 | VAR_12);
 }

 if (VAR_38)
  FUNC_5(VAR_34, VAR_38);
}
