
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint32_t ;
typedef int ispsoftc_t ;
struct TYPE_10__ {int status; int path; } ;
struct TYPE_11__ {scalar_t__ scsi_status; TYPE_1__ ccb_h; } ;
typedef TYPE_2__ XS_T ;
struct TYPE_12__ {int wdog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_7__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,union ccb*) ;
 int FUNC_8 (union ccb*) ;
 int FUNC_9 (int ,int) ;

void
FUNC_10(XS_T *VAR_9)
{
 ispsoftc_t *VAR_10 = FUNC_2(VAR_9);
 uint32_t VAR_11;

 if (FUNC_3(VAR_9))
  FUNC_4(VAR_9, VAR_3);

 if ((VAR_9->ccb_h.status & VAR_6) == VAR_3 && (VAR_9->scsi_status != VAR_8)) {
  VAR_9->ccb_h.status &= ~VAR_6;
  if ((VAR_9->scsi_status == VAR_7) && (VAR_9->ccb_h.status & VAR_1) == 0) {
   VAR_9->ccb_h.status |= VAR_0;
  } else {
   VAR_9->ccb_h.status |= VAR_4;
  }
 }

 VAR_9->ccb_h.status &= ~VAR_5;
 VAR_11 = VAR_9->ccb_h.status & VAR_6;
 if (VAR_11 != VAR_3 &&
     (VAR_9->ccb_h.status & VAR_2) == 0) {
  VAR_9->ccb_h.status |= VAR_2;
  FUNC_9(VAR_9->ccb_h.path, 1);
 }

 if (FUNC_0(VAR_9)) {
  if (FUNC_5(&FUNC_1(VAR_9)->wdog))
   FUNC_6(&FUNC_1(VAR_9)->wdog);
  FUNC_7(VAR_10, (union ccb *) VAR_9);
 }
 FUNC_8((union ccb *) VAR_9);
}
