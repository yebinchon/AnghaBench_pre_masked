
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_3__ {int StatusCode; int TargetAssistFlags; int QueueTag; int ReplyWord; int RelativeOffset; int DataLength; int SGL; int LUN; } ;
typedef TYPE_1__* PTR_MSG_TARGET_ASSIST_REQUEST ;
typedef int MSG_REQUEST_HEADER ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(PTR_MSG_TARGET_ASSIST_REQUEST VAR_0)
{

 FUNC_2((MSG_REQUEST_HEADER *)VAR_0);
 FUNC_3("\tStatusCode    0x%02x\n", VAR_0->StatusCode);
 FUNC_3("\tTargetAssist  0x%02x\n", VAR_0->TargetAssistFlags);
 FUNC_3("\tQueueTag      0x%04x\n", VAR_0->QueueTag);
 FUNC_3("\tReplyWord     0x%08x\n", VAR_0->ReplyWord);
 FUNC_3("\tLun           0x%jx\n", (uintmax_t)FUNC_0(VAR_0->LUN));
 FUNC_3("\tRelativeOff   0x%08x\n", VAR_0->RelativeOffset);
 FUNC_3("\tDataLength    0x%08x\n", VAR_0->DataLength);
 FUNC_1(VAR_0->SGL, 0);
}
