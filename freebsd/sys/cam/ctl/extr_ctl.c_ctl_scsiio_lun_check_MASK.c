
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ctl_softc {scalar_t__ ha_link; scalar_t__ ha_mode; } ;
struct TYPE_6__ {int nexus; } ;
struct ctl_scsiio {TYPE_3__ io_hdr; } ;
struct TYPE_5__ {int eca_and_aen; } ;
struct ctl_lun {int flags; scalar_t__ res_idx; int pr_res_type; scalar_t__ pr_res_idx; TYPE_2__ MODE_CTRL; TYPE_1__* be_lun; int lun_lock; struct ctl_softc* ctl_softc; } ;
struct ctl_cmd_entry {int flags; int pattern; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ctl_lun*,scalar_t__) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 int FUNC_3 (struct ctl_scsiio*) ;
 int FUNC_4 (struct ctl_scsiio*) ;
 int FUNC_5 (struct ctl_scsiio*) ;
 int FUNC_6 (struct ctl_scsiio*) ;
 int FUNC_7 (struct ctl_scsiio*) ;
 int FUNC_8 (struct ctl_scsiio*) ;
 int FUNC_9 (struct ctl_scsiio*) ;
 int FUNC_10 (struct ctl_scsiio*) ;
 int FUNC_11 (struct ctl_scsiio*,int,int ,int,int,int ) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int
FUNC_13(struct ctl_lun *VAR_26,
    const struct ctl_cmd_entry *VAR_27, struct ctl_scsiio *VAR_28)
{
 struct ctl_softc *VAR_29 = VAR_26->ctl_softc;
 int VAR_30;
 uint32_t VAR_31;

 VAR_30 = 0;

 FUNC_12(&VAR_26->lun_lock, VAR_19);





 if ((VAR_26->flags & VAR_14) == 0) {
  if (VAR_29->ha_link == VAR_6 &&
      (VAR_27->flags & VAR_5) == 0) {
   FUNC_9(VAR_28);
   VAR_30 = 1;
   goto bailout;
  }
  if ((VAR_26->flags & VAR_13) == 0 &&
      (VAR_27->flags & VAR_5) == 0) {
   FUNC_8(VAR_28);
   VAR_30 = 1;
   goto bailout;
  }
  if (VAR_29->ha_mode == VAR_7 &&
      (VAR_27->flags & VAR_4) == 0) {
   FUNC_6(VAR_28);
   VAR_30 = 1;
   goto bailout;
  }


  if (VAR_29->ha_mode == VAR_8)
   goto bailout;
 }

 if (VAR_27->pattern & VAR_12) {
  if (VAR_26->be_lun &&
      VAR_26->be_lun->flags & VAR_10) {
   FUNC_2(VAR_28);
   VAR_30 = 1;
   goto bailout;
  }
  if ((VAR_26->MODE_CTRL.eca_and_aen & VAR_20) != 0) {
   FUNC_11(VAR_28, 1,
                     VAR_25,
               0x27, 0x02, VAR_24);
   VAR_30 = 1;
   goto bailout;
  }
 }






 VAR_31 = FUNC_0(&VAR_28->io_hdr.nexus);
 if ((VAR_26->flags & VAR_17)
  && ((VAR_27->flags & VAR_2) == 0)) {
  if (VAR_26->res_idx != VAR_31) {
   FUNC_10(VAR_28);
   VAR_30 = 1;
   goto bailout;
  }
 }

 if ((VAR_26->flags & VAR_15) == 0 ||
     (VAR_27->flags & VAR_0)) {
                                             ;
 } else if ((VAR_27->flags & VAR_1) &&
     (VAR_26->pr_res_type == VAR_21 ||
      VAR_26->pr_res_type == VAR_23 ||
      VAR_26->pr_res_type == VAR_22)) {
                                                        ;
 } else {





  if (FUNC_1(VAR_26, VAR_31) == 0 ||
      (VAR_31 != VAR_26->pr_res_idx && VAR_26->pr_res_type < 4)) {
   FUNC_10(VAR_28);
   VAR_30 = 1;
   goto bailout;
  }
 }

 if ((VAR_27->flags & VAR_3) == 0) {
  if (VAR_26->flags & VAR_9)
   FUNC_3(VAR_28);
  else if (VAR_26->flags & VAR_11) {
   if (VAR_26->flags & VAR_16)
    FUNC_5(VAR_28);
   else
    FUNC_4(VAR_28);
  } else if (VAR_26->flags & VAR_18)
   FUNC_7(VAR_28);
  else
   goto bailout;
  VAR_30 = 1;
  goto bailout;
 }

bailout:
 return (VAR_30);
}
