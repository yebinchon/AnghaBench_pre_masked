
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct mvs_intr_arg {int cause; int arg; } ;
struct mvs_channel {scalar_t__ numtslots; scalar_t__ numdslots; int quirks; scalar_t__ numpslots; scalar_t__* numrslotspd; int rslots; int fatalerr; int r_mem; TYPE_3__* slot; scalar_t__ fbs_enabled; int curr_mode; } ;
typedef enum mvs_err_type { ____Placeholder_mvs_err_type } mvs_err_type ;
typedef int device_t ;
struct TYPE_6__ {TYPE_2__* ccb; } ;
struct TYPE_4__ {int target_id; } ;
struct TYPE_5__ {TYPE_1__ ccb_h; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
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
 struct mvs_channel* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(void *VAR_23)
{
 struct mvs_intr_arg *VAR_24 = (struct mvs_intr_arg *)VAR_23;
 device_t VAR_25 = (device_t)VAR_24->arg;
 struct mvs_channel *VAR_26 = FUNC_4(VAR_25);
 uint32_t VAR_27, VAR_28 = 0, VAR_29 = 0;
 enum mvs_err_type VAR_30;
 int VAR_31, VAR_32, VAR_33 = -1, VAR_34 = 0;
 int VAR_35 = (VAR_26->numtslots != 0 || VAR_26->numdslots != 0);


 if ((VAR_24->cause & 2) && VAR_35)
  FUNC_7(VAR_25);

 if (VAR_24->cause & 1) {
  VAR_27 = FUNC_0(VAR_26->r_mem, VAR_0);
  if (VAR_27 & VAR_6) {
   VAR_28 = FUNC_0(VAR_26->r_mem, VAR_21);
   FUNC_1(VAR_26->r_mem, VAR_21, VAR_28);
  }

  if (VAR_27 & VAR_4)
   VAR_34 = 1;

  if (VAR_27 & VAR_5) {

   if (VAR_26->quirks & VAR_15)
    VAR_34 = 1;

   else if (VAR_26->quirks & VAR_16)
    VAR_29 = VAR_18;
   else
    VAR_29 = FUNC_0(VAR_26->r_mem, VAR_19);
  }
  if (VAR_34)
   VAR_26->curr_mode = VAR_8;
  FUNC_1(VAR_26->r_mem, VAR_0, ~VAR_27);

  if (VAR_27 & (0xfc1e9000 | VAR_3)) {
   VAR_33 = -1;
   if (VAR_26->numpslots != 0) {
    VAR_32 = 0;
   } else {
    if (VAR_26->quirks & VAR_17)
     VAR_32 = FUNC_3(FUNC_0(VAR_26->r_mem, VAR_7));
    else
     VAR_32 = FUNC_2(FUNC_0(VAR_26->r_mem, VAR_7));

    if (VAR_26->fbs_enabled) {

     for (VAR_31 = 0; VAR_31 < 16; VAR_31++) {
      if (VAR_26->numrslotspd[VAR_31] == 0)
       continue;
      if (VAR_33 == -1)
       VAR_33 = VAR_31;
      else if (VAR_33 != VAR_31) {
       VAR_33 = -2;
       break;
      }
     }



     if (VAR_33 == -2 && !VAR_34) {
      uint16_t VAR_36 = FUNC_0(VAR_26->r_mem, VAR_20) >> 16;
      VAR_33 = FUNC_5(VAR_36) - 1;
      if (VAR_33 != (FUNC_6(VAR_36) - 1))
       VAR_33 = -2;
     }
    }
   }
   FUNC_12(VAR_25);
   for (VAR_31 = 0; VAR_31 < VAR_14; VAR_31++) {

    if (((VAR_26->rslots >> VAR_31) & 1) == 0)
     continue;
    if (VAR_33 >= 0 &&
        VAR_26->slot[VAR_31].ccb->ccb_h.target_id != VAR_33)
     continue;
    if (VAR_27 & VAR_3) {
        if (VAR_33 != -2) {
     if (VAR_26->numtslots == 0) {

      if (VAR_31 == VAR_32)
       VAR_30 = VAR_13;
      else
       VAR_30 = VAR_9;
     } else {

      VAR_30 = VAR_11;
     }
        } else {
     VAR_30 = VAR_13;
     VAR_26->fatalerr = 1;
        }
    } else if (VAR_27 & 0xfc1e9000) {
     if (VAR_26->numtslots == 0 &&
         VAR_31 != VAR_32 && VAR_33 != -2)
      VAR_30 = VAR_9;
     else
      VAR_30 = VAR_12;
    } else
     VAR_30 = VAR_10;
    FUNC_8(&VAR_26->slot[VAR_31], VAR_30);
   }
  }

  if (VAR_29 & VAR_18)
   FUNC_10(VAR_25);
  if (VAR_29)
   FUNC_1(VAR_26->r_mem, VAR_19, ~VAR_29);

  if ((VAR_27 & (VAR_2 | VAR_1)) ||
      (VAR_28 & VAR_22))
   FUNC_11(VAR_25, VAR_28);
 }

 if ((VAR_24->cause & 2) && !VAR_35)
  FUNC_9(VAR_25, VAR_24->cause & 4);
}
