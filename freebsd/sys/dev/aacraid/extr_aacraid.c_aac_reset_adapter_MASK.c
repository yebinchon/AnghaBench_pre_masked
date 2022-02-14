
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct aac_softc {int aac_state; int aac_support_opt2; int doorbell_mask; int aac_max_msix; int msi_enabled; int flags; int aac_io_lock; int aac_dev; } ;
struct aac_pause_command {int Timeout; int Min; int NoRescan; int Type; int Command; } ;
struct aac_fib {int * data; } ;
struct aac_command {int (* cm_complete ) (struct aac_command*) ;int cm_flags; } ;


 int FUNC_0 (struct aac_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct aac_softc*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (struct aac_softc*,struct aac_fib**) ;
 scalar_t__ FUNC_4 (struct aac_softc*,int *) ;
 scalar_t__ FUNC_5 (struct aac_softc*) ;
 struct aac_command* FUNC_6 (struct aac_softc*) ;
 struct aac_command* FUNC_7 (struct aac_softc*) ;
 int FUNC_8 (struct aac_softc*) ;
 int FUNC_9 (struct aac_softc*) ;
 int FUNC_10 (struct aac_softc*,int ,int ,struct aac_fib*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct aac_softc*) ;
 int FUNC_13 (struct aac_softc*,int ,int ,int ,int ,int ,int*,int*) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (struct aac_softc*,char*,char*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct aac_command*) ;
 int FUNC_20 (struct aac_command*) ;
 int FUNC_21 (struct aac_command*) ;

__attribute__((used)) static int
FUNC_22(struct aac_softc *VAR_21)
{
 struct aac_command *VAR_22;
 struct aac_fib *VAR_23;
 struct aac_pause_command *VAR_24;
 u_int32_t VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30;

 FUNC_15(VAR_21, VAR_18, "");
 FUNC_16(&VAR_21->aac_io_lock, VAR_19);

 if (VAR_21->aac_state & VAR_11) {
  FUNC_14(VAR_21->aac_dev, "aac_reset_adapter() already in progress\n");
  return (VAR_16);
 }
 VAR_21->aac_state |= VAR_11;


 FUNC_0(VAR_21, VAR_1);





 while ((VAR_22 = FUNC_6(VAR_21)) != ((void*)0)) {
  VAR_22->cm_flags |= VAR_0;


  if (VAR_22->cm_complete != ((void*)0)) {
   VAR_22->cm_complete(VAR_22);
  } else {



   FUNC_21(VAR_22);
  }
 }


 while ((VAR_22 = FUNC_7(VAR_21)) != ((void*)0)) {
  VAR_22->cm_flags |= VAR_0;


  if (VAR_22->cm_complete != ((void*)0)) {
   VAR_22->cm_complete(VAR_22);
  } else {



   FUNC_21(VAR_22);
  }
 }


 if (FUNC_4(VAR_21, ((void*)0)) == 0) {
  FUNC_18(&VAR_21->aac_io_lock);
  (void) FUNC_11(VAR_21->aac_dev);
  FUNC_17(&VAR_21->aac_io_lock);
 }


 if (VAR_21->aac_support_opt2 & VAR_13) {
  FUNC_1(VAR_21, VAR_7, VAR_8);




  VAR_27 = 5 * 10000;
  while (VAR_27) {
   FUNC_2(100);
   VAR_27--;
  }
 } else {
  VAR_29 = FUNC_13(VAR_21, VAR_6,
   0, 0, 0, 0, &VAR_25, &VAR_26);
  if (VAR_29 && !VAR_21->doorbell_mask) {

   if ((FUNC_13(VAR_21, VAR_5, 0,0,0,0,
       &VAR_25, ((void*)0))) != 0) {
    if (VAR_25 == VAR_9) {
     FUNC_14(VAR_21->aac_dev,
         "IOP_RESET not supported\n");
    } else {

     FUNC_14(VAR_21->aac_dev,
         "IOP_RESET failed\n");
    }


    FUNC_3(VAR_21, &VAR_23);
    VAR_24 = (struct aac_pause_command *)&VAR_23->data[0];
    VAR_24->Command = VAR_20;
    VAR_24->Type = VAR_14;
    VAR_24->Timeout = 1;
    VAR_24->Min = 1;
    VAR_24->NoRescan = 1;

    (void) FUNC_10(VAR_21, VAR_15, 0,
        VAR_23, sizeof (struct aac_pause_command));
    FUNC_9(VAR_21);

    goto finish;
   }
  } else if (VAR_21->doorbell_mask) {
   VAR_29 = 0;
   VAR_26 = VAR_21->doorbell_mask;
  }
  if (!VAR_29 &&
      (VAR_21->aac_support_opt2 & VAR_12)) {
   FUNC_1(VAR_21, VAR_10, VAR_26);





   VAR_27 = 5 * 10000;
   while (VAR_27) {
    FUNC_2(100);
    VAR_27--;
   }
  }
 }




 VAR_28 = VAR_21->aac_max_msix;
 VAR_30 = VAR_21->msi_enabled;
 VAR_21->msi_enabled = VAR_17;
 if (FUNC_5(VAR_21) != 0)
  goto finish;
 if (!(VAR_21->flags & VAR_4)) {
  VAR_21->aac_max_msix = VAR_28;
  if (VAR_30) {
   VAR_21->msi_enabled = VAR_30;
   FUNC_0(VAR_21, VAR_3);
  }
  FUNC_18(&VAR_21->aac_io_lock);
  FUNC_8(VAR_21);
  FUNC_17(&VAR_21->aac_io_lock);
 }

finish:
 VAR_21->aac_state &= ~VAR_11;
 FUNC_0(VAR_21, VAR_2);
 FUNC_12(VAR_21);
 return (0);
}
