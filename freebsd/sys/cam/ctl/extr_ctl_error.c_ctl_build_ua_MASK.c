
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int u_int ;
struct scsi_sense_data {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ main; } ;
struct ctl_lun {int** pending_ua; TYPE_2__ MODE_LBP; int lun_lock; TYPE_3__* ctl_softc; } ;
typedef int scsi_sense_data_type ;
typedef int ctl_ua_type ;
struct TYPE_6__ {int ctl_lock; } ;


 size_t VAR_0 ;
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
 int FUNC_0 (struct ctl_lun*,int,int) ;
 int FUNC_1 (TYPE_3__*,size_t,int) ;
 int FUNC_2 (struct scsi_sense_data*,int *,struct ctl_lun*,int ,int,int ,int,int,int ,int,int *,int ) ;
 int FUNC_3 (struct ctl_lun*,int,int*,int*,int*,int **) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*,int ) ;
 int* FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

ctl_ua_type
FUNC_10(struct ctl_lun *VAR_14, uint32_t VAR_15,
    struct scsi_sense_data *VAR_16, u_int *VAR_17,
    scsi_sense_data_type VAR_18)
{
 ctl_ua_type *VAR_19;
 ctl_ua_type VAR_20, VAR_21;
 uint8_t *VAR_22;
 int VAR_23, VAR_24;
 uint32_t VAR_25, VAR_26;

 FUNC_7(&VAR_14->lun_lock, VAR_6);
 FUNC_7(&VAR_14->ctl_softc->ctl_lock, VAR_5);
 VAR_25 = VAR_15 / VAR_0;
 if ((VAR_19 = VAR_14->pending_ua[VAR_25]) == ((void*)0)) {
  FUNC_9(&VAR_14->lun_lock);
  VAR_19 = FUNC_6(sizeof(ctl_ua_type) * VAR_0,
      VAR_7, VAR_8);
  FUNC_8(&VAR_14->lun_lock);
  if (VAR_14->pending_ua[VAR_25] == ((void*)0)) {
   VAR_14->pending_ua[VAR_25] = VAR_19;
   for (VAR_26 = 0; VAR_26 < VAR_0; VAR_26++)
    VAR_19[VAR_26] = VAR_3;
  } else {
   FUNC_5(VAR_19, VAR_7);
   VAR_19 = VAR_14->pending_ua[VAR_25];
  }
 }
 VAR_26 = VAR_15 % VAR_0;
 if (VAR_19[VAR_26] == VAR_2)
  return (VAR_2);

 VAR_20 = (1 << (FUNC_4(VAR_19[VAR_26]) - 1));
 VAR_21 = VAR_20;
 VAR_22 = ((void*)0);
 FUNC_3(VAR_14, VAR_20, &VAR_23, &VAR_24, &VAR_21, &VAR_22);

 FUNC_2(VAR_16, VAR_17, VAR_14, VAR_18, 1,
                   VAR_13, VAR_23, VAR_24,
     ((VAR_22 != ((void*)0)) ? VAR_10 : VAR_12), 8, VAR_22,
     VAR_11);


 VAR_19[VAR_26] &= ~VAR_21;

 if (VAR_20 == VAR_1) {
  FUNC_9(&VAR_14->lun_lock);
  FUNC_8(&VAR_14->ctl_softc->ctl_lock);
  FUNC_1(VAR_14->ctl_softc, VAR_15, VAR_20);
  FUNC_9(&VAR_14->ctl_softc->ctl_lock);
  FUNC_8(&VAR_14->lun_lock);
 } else if (VAR_20 == VAR_4 &&
     (VAR_14->MODE_LBP.main.flags & VAR_9) != 0) {
  FUNC_0(VAR_14, -1, VAR_20);
 }

 return (VAR_20);
}
