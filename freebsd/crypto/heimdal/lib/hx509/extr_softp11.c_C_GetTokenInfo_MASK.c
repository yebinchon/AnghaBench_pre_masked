
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ login_done; } ;
struct TYPE_12__ {int open_sessions; TYPE_1__ flags; } ;
struct TYPE_10__ {int major; scalar_t__ minor; } ;
struct TYPE_9__ {int major; scalar_t__ minor; } ;
struct TYPE_11__ {int flags; int ulMaxPinLen; int ulTotalPublicMemory; int ulFreePublicMemory; int ulTotalPrivateMemory; int ulFreePrivateMemory; TYPE_3__ firmwareVersion; TYPE_2__ hardwareVersion; scalar_t__ ulMinPinLen; int ulRwSessionCount; void* ulMaxRwSessionCount; int ulSessionCount; void* ulMaxSessionCount; scalar_t__ serialNumber; scalar_t__ model; scalar_t__ manufacturerID; scalar_t__ label; } ;
typedef TYPE_4__* CK_TOKEN_INFO_PTR ;
typedef int CK_SLOT_ID ;
typedef int CK_RV ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 void* VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,int,int) ;
 int FUNC_3 (char*,int,char,char*) ;
 TYPE_5__ VAR_5 ;
 int FUNC_4 (char*,int ) ;

CK_RV
FUNC_5(CK_SLOT_ID VAR_6,
        CK_TOKEN_INFO_PTR VAR_7)
{
    FUNC_0();
    FUNC_4("GetTokenInfo: %s\n", FUNC_1());

    FUNC_2(VAR_7, 19, sizeof(*VAR_7));

    FUNC_3((char *)VAR_7->label,
    sizeof(VAR_7->label),
    ' ',
    "Heimdal hx509 SoftToken (token)");
    FUNC_3((char *)VAR_7->manufacturerID,
    sizeof(VAR_7->manufacturerID),
    ' ',
    "Heimdal hx509 SoftToken (token)");
    FUNC_3((char *)VAR_7->model,
    sizeof(VAR_7->model),
    ' ',
    "Heimdal hx509 SoftToken (token)");
    FUNC_3((char *)VAR_7->serialNumber,
    sizeof(VAR_7->serialNumber),
    ' ',
    "4711");
    VAR_7->flags =
 VAR_1 |
 VAR_2;

    if (VAR_5.flags.login_done == 0)
 VAR_7->flags |= VAR_0;




    VAR_7->ulMaxSessionCount = VAR_4;
    VAR_7->ulSessionCount = VAR_5.open_sessions;
    VAR_7->ulMaxRwSessionCount = VAR_4;
    VAR_7->ulRwSessionCount = VAR_5.open_sessions;
    VAR_7->ulMaxPinLen = 1024;
    VAR_7->ulMinPinLen = 0;
    VAR_7->ulTotalPublicMemory = 4711;
    VAR_7->ulFreePublicMemory = 4712;
    VAR_7->ulTotalPrivateMemory = 4713;
    VAR_7->ulFreePrivateMemory = 4714;
    VAR_7->hardwareVersion.major = 2;
    VAR_7->hardwareVersion.minor = 0;
    VAR_7->firmwareVersion.major = 2;
    VAR_7->firmwareVersion.minor = 0;

    return VAR_3;
}
