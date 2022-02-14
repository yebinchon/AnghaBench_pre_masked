
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_user_command {scalar_t__ DataTransferLength; scalar_t__ RequestSenseLength; int CommandStatus; int RequestSenseBuffer; int DataTransferBuffer; int CommandMailbox; } ;
struct mly_softc {int mly_lock; } ;
struct mly_command {scalar_t__ mc_length; int mc_flags; scalar_t__ mc_sense; scalar_t__ mc_resid; int * mc_data; int mc_status; int * mc_packet; int * mc_complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mly_softc*) ;
 int FUNC_1 (struct mly_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct mly_softc*,struct mly_command**) ;
 int FUNC_10 (struct mly_command*) ;
 int FUNC_11 (struct mly_command*) ;
 int FUNC_12 (struct mly_command*,int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_13(struct mly_softc *VAR_7, struct mly_user_command *VAR_8)
{
    struct mly_command *VAR_9;
    int VAR_10;


    FUNC_0(VAR_7);
    if (FUNC_9(VAR_7, &VAR_9)) {
 FUNC_1(VAR_7);
 return (VAR_0);
    }
    FUNC_1(VAR_7);


    VAR_9->mc_length = (VAR_8->DataTransferLength >= 0) ? VAR_8->DataTransferLength : -VAR_8->DataTransferLength;
    if (VAR_9->mc_length > 0) {
 if ((VAR_9->mc_data = FUNC_7(VAR_9->mc_length, VAR_4, VAR_5)) == ((void*)0)) {
     VAR_10 = VAR_0;
     goto out;
 }
    }
    if (VAR_8->DataTransferLength > 0) {
 VAR_9->mc_flags |= VAR_2;
 FUNC_3(VAR_9->mc_data, VAR_9->mc_length);
    }
    if (VAR_8->DataTransferLength < 0) {
 VAR_9->mc_flags |= VAR_3;
 if ((VAR_10 = FUNC_4(VAR_8->DataTransferBuffer, VAR_9->mc_data, VAR_9->mc_length)) != 0)
     goto out;
    }


    FUNC_2(&VAR_8->CommandMailbox, VAR_9->mc_packet, sizeof(VAR_8->CommandMailbox));


    VAR_9->mc_complete = ((void*)0);


    FUNC_0(VAR_7);
    if ((VAR_10 = FUNC_11(VAR_9)) != 0) {
 FUNC_1(VAR_7);
 goto out;
    }
    while (!(VAR_9->mc_flags & VAR_1))
 FUNC_12(VAR_9, &VAR_7->mly_lock, VAR_6, "mlyioctl", 0);
    FUNC_1(VAR_7);


    if (VAR_8->DataTransferLength > 0)
 if ((VAR_10 = FUNC_5(VAR_9->mc_data, VAR_8->DataTransferBuffer, VAR_9->mc_length)) != 0)
     goto out;


    if ((VAR_8->RequestSenseLength > 0) && (VAR_9->mc_sense > 0)) {
 if ((VAR_10 = FUNC_5(VAR_9->mc_packet, VAR_8->RequestSenseBuffer,
        FUNC_8(VAR_8->RequestSenseLength, VAR_9->mc_sense))) != 0)
     goto out;
    }


    VAR_8->DataTransferLength = VAR_9->mc_resid;
    VAR_8->RequestSenseLength = FUNC_8(VAR_8->RequestSenseLength, VAR_9->mc_sense);
    VAR_8->CommandStatus = VAR_9->mc_status;
    VAR_10 = 0;

 out:
    if (VAR_9->mc_data != ((void*)0))
 FUNC_6(VAR_9->mc_data, VAR_4);
    FUNC_0(VAR_7);
    FUNC_10(VAR_9);
    FUNC_1(VAR_7);
    return(VAR_10);
}
