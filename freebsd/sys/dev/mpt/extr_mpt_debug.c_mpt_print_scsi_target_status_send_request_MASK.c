
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_8__ {int StatusCode; int StatusFlags; int QueueTag; int ReplyWord; int StatusDataSGE; int LUN; } ;
struct TYPE_6__ {int Simple; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_2__ SGE_IO_UNION ;
typedef TYPE_3__ MSG_TARGET_STATUS_SEND_REQUEST ;
typedef int MSG_REQUEST_HEADER ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(MSG_TARGET_STATUS_SEND_REQUEST *VAR_0)
{
 SGE_IO_UNION VAR_1;

 FUNC_2((MSG_REQUEST_HEADER *)VAR_0);
 FUNC_3("\tStatusCode    0x%02x\n", VAR_0->StatusCode);
 FUNC_3("\tStatusFlags   0x%02x\n", VAR_0->StatusFlags);
 FUNC_3("\tQueueTag      0x%04x\n", VAR_0->QueueTag);
 FUNC_3("\tReplyWord     0x%08x\n", VAR_0->ReplyWord);
 FUNC_3("\tLun           0x%jx\n", (uintmax_t)FUNC_0(VAR_0->LUN));
 VAR_1.u.Simple = VAR_0->StatusDataSGE;
 FUNC_1(&VAR_1, 0);
}
