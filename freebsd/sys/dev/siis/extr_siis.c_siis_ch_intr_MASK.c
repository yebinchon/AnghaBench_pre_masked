
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uint32_t ;
struct siis_channel {int rslots; int recovery; int* numtslots; TYPE_4__* slot; int r_mem; int recoverycmd; union ccb* frozen; int numrslots; int sim; int mtx; } ;
typedef enum siis_err_type { ____Placeholder_siis_err_type } siis_err_type ;
typedef int device_t ;
struct TYPE_8__ {TYPE_3__* ccb; } ;
struct TYPE_6__ {int target_id; } ;
struct TYPE_7__ {TYPE_2__ ccb_h; } ;


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
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 struct siis_channel* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_34)
{
 device_t VAR_35 = (device_t)VAR_34;
 struct siis_channel *VAR_36 = FUNC_2(VAR_35);
 uint32_t VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42 = 0;
 enum siis_err_type VAR_43;
 int VAR_44, VAR_45, VAR_46, VAR_47;

 FUNC_3(&VAR_36->mtx, VAR_4);

 VAR_38 = FUNC_0(VAR_36->r_mem, VAR_32);
 VAR_41 = VAR_36->rslots & ~VAR_38;

 for (VAR_44 = 0; VAR_44 < VAR_11; VAR_44++) {
  if ((VAR_41 >> VAR_44) & 1)
   FUNC_4(&VAR_36->slot[VAR_44], VAR_8);
 }

 if ((VAR_38 & VAR_33) == 0)
  return;

 VAR_37 = FUNC_0(VAR_36->r_mem, VAR_27) &
     (0xFFFF & ~VAR_28);
 FUNC_1(VAR_36->r_mem, VAR_27, VAR_37);

 if (VAR_37 & VAR_30)
  FUNC_6(VAR_35);

 if (VAR_37 & VAR_31)
  FUNC_5(VAR_35);

 if (VAR_37 & VAR_29) {
  VAR_40 = FUNC_0(VAR_36->r_mem, VAR_12);
  VAR_39 = FUNC_0(VAR_36->r_mem, VAR_22);
  VAR_45 = (VAR_39 & VAR_25) >> VAR_26;
  VAR_46 = (VAR_39 & VAR_23) >> VAR_24;
  VAR_42 = VAR_36->rslots & VAR_38;




  if (!VAR_36->recoverycmd && !VAR_36->recovery) {
   FUNC_9(VAR_36->sim, VAR_36->numrslots);
   VAR_36->recovery = 1;
  }
  if (VAR_36->frozen) {
   union ccb *VAR_48 = VAR_36->frozen;
   VAR_36->frozen = ((void*)0);
   VAR_48->ccb_h.status &= ~VAR_3;
   VAR_48->ccb_h.status |= VAR_2 | VAR_1;
   if (!(VAR_48->ccb_h.status & VAR_0)) {
    FUNC_8(VAR_48->ccb_h.path, 1);
    VAR_48->ccb_h.status |= VAR_0;
   }
   FUNC_7(VAR_48);
  }
  if (VAR_40 == VAR_14 ||
      VAR_40 == VAR_17 ||
      VAR_40 == VAR_13) {
   VAR_47 = VAR_36->numtslots[VAR_46];
   for (VAR_44 = 0; VAR_44 < VAR_11; VAR_44++) {

    if (((VAR_36->rslots >> VAR_44) & 1) == 0)
     continue;
    if (VAR_36->slot[VAR_44].ccb->ccb_h.target_id != VAR_46)
     continue;
    if (VAR_47 == 0) {

     if (VAR_44 == VAR_45)
      VAR_43 = VAR_10;
     else
      VAR_43 = VAR_5;
    } else {

     VAR_43 = VAR_7;
    }
    FUNC_4(&VAR_36->slot[VAR_44], VAR_43);
   }




   if (VAR_36->rslots != 0 && !VAR_36->recoverycmd)
    FUNC_1(VAR_36->r_mem, VAR_20, VAR_21);
  } else {
   if (VAR_40 == VAR_18 ||
       VAR_40 == VAR_15 ||
       VAR_40 == VAR_16 ||
       VAR_40 == VAR_19) {
    VAR_43 = VAR_9;
   } else
    VAR_43 = VAR_6;
   for (VAR_44 = 0; VAR_44 < VAR_11; VAR_44++) {

    if (((VAR_36->rslots >> VAR_44) & 1) == 0)
     continue;
    FUNC_4(&VAR_36->slot[VAR_44], VAR_43);
   }
  }
 }
}
