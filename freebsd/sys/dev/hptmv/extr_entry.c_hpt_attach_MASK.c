
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct cam_sim* callback_arg; int callback; int event_enable; } ;
struct TYPE_4__ {int priority; int index; } ;
struct TYPE_6__ {int func_code; TYPE_1__ pinfo; } ;
union ccb {TYPE_2__ csa; TYPE_3__ ccb_h; int path; int lock; int hpt_dev; int hpt_intr; int * hpt_irq; } ;
struct cam_sim {int dummy; } ;
struct cam_devq {int dummy; } ;
typedef int device_t ;
typedef union ccb IAL_ADAPTER_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,int*,int) ;
 scalar_t__ FUNC_3 (int ,int *,int,int *,int ,union ccb*,int *) ;
 int FUNC_4 (union ccb*,int) ;
 struct cam_sim* FUNC_5 (int ,int ,int ,union ccb*,int ,int *,int,int,struct cam_devq*) ;
 int FUNC_6 (struct cam_sim*,int ) ;
 int FUNC_7 (struct cam_sim*) ;
 struct cam_devq* FUNC_8 (int) ;
 int FUNC_9 (struct cam_devq*) ;
 union ccb* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int ,int ) ;
 int FUNC_13 (union ccb*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (union ccb*) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (union ccb*) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (struct cam_sim*,int ,int ) ;
 scalar_t__ FUNC_23 (int *,int *,int ,int ,int ) ;
 int FUNC_24 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int
FUNC_25(device_t VAR_24)
{
 IAL_ADAPTER_T * VAR_25 = FUNC_10(VAR_24);
 int VAR_26;
 union ccb *VAR_27;
 struct cam_devq *VAR_28;
 struct cam_sim *VAR_29;

 FUNC_12(VAR_24, "%s Version %s \n", VAR_6, VAR_7);

 VAR_25->hpt_dev = VAR_24;

 VAR_26 = FUNC_15(VAR_25);
 if (VAR_26)
  return VAR_26;

 VAR_26 = 0;
 if ((VAR_25->hpt_irq = FUNC_2(VAR_25->hpt_dev, VAR_17, &VAR_26, VAR_16 | VAR_15)) == ((void*)0))
 {
  FUNC_14(("can't allocate interrupt\n"));
  return(VAR_9);
 }

 if (FUNC_3(VAR_25->hpt_dev, VAR_25->hpt_irq,
    VAR_11 | VAR_10,
    ((void*)0), VAR_22, VAR_25, &VAR_25->hpt_intr))
 {
  FUNC_14(("can't set up interrupt\n"));
  FUNC_13(VAR_25, VAR_12);
  return(VAR_9);
 }


 if((VAR_27 = (union ccb *)FUNC_17(sizeof(*VAR_27), VAR_12, VAR_13)) != (union ccb*)((void*)0))
 {
  FUNC_4(VAR_27, sizeof(*VAR_27));
  VAR_27->ccb_h.pinfo.priority = 1;
  VAR_27->ccb_h.pinfo.index = VAR_5;
 }
 else
 {
  return VAR_8;
 }



 if((VAR_28 = FUNC_8(8 )) == ((void*)0))
 {
  FUNC_0(("ENXIO\n"));
  return VAR_8;
 }




 VAR_29 = FUNC_5(VAR_20, VAR_23, FUNC_1(VAR_14),
   VAR_25, FUNC_11(VAR_25->hpt_dev),
   &VAR_25->lock, 1, 8, VAR_28);
 if (VAR_29 == ((void*)0)) {
  FUNC_9(VAR_28);
  return VAR_8;
 }

 FUNC_18(&VAR_25->lock);
 if (FUNC_22(VAR_29, VAR_24, 0) != VAR_3)
 {
  FUNC_6(VAR_29, VAR_18);
  FUNC_19(&VAR_25->lock);
  VAR_29 = ((void*)0);
  return VAR_9;
 }

 if(FUNC_23(&VAR_25->path, ((void*)0),
   FUNC_7(VAR_29), VAR_4,
   VAR_1) != VAR_2)
 {
  FUNC_21(FUNC_7(VAR_29));
  FUNC_6(VAR_29, VAR_18);
  FUNC_19(&VAR_25->lock);
  VAR_29 = ((void*)0);
  return VAR_9;
 }
 FUNC_19(&VAR_25->lock);

 FUNC_24(&(VAR_27->ccb_h), VAR_25->path, 5);
 VAR_27->ccb_h.func_code = VAR_19;
 VAR_27->csa.event_enable = VAR_0;
 VAR_27->csa.callback = VAR_21;
 VAR_27->csa.callback_arg = VAR_29;
 FUNC_20((union ccb *)VAR_27);
 FUNC_13(VAR_27, VAR_12);

 if (FUNC_11(VAR_24) == 0) {

  FUNC_16();
 }

 return 0;
}
