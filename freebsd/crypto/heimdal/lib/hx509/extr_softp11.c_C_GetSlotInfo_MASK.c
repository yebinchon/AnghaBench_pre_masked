
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hardware_slot; } ;
struct TYPE_12__ {TYPE_1__ flags; } ;
struct TYPE_10__ {int major; scalar_t__ minor; } ;
struct TYPE_9__ {int major; scalar_t__ minor; } ;
struct TYPE_11__ {TYPE_3__ firmwareVersion; TYPE_2__ hardwareVersion; int flags; scalar_t__ manufacturerID; scalar_t__ slotDescription; } ;
typedef TYPE_4__* CK_SLOT_INFO_PTR ;
typedef int CK_SLOT_ID ;
typedef int CK_RV ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,int,int) ;
 int FUNC_3 (char*,int,char,char*) ;
 TYPE_5__ VAR_4 ;
 int FUNC_4 (char*,int,int ) ;

CK_RV
FUNC_5(CK_SLOT_ID VAR_5,
       CK_SLOT_INFO_PTR VAR_6)
{
    FUNC_0();
    FUNC_4("GetSlotInfo: slot: %d : %s\n", (int)VAR_5, FUNC_1());

    FUNC_2(VAR_6, 18, sizeof(*VAR_6));

    if (VAR_5 != 1)
 return VAR_2;

    FUNC_3((char *)VAR_6->slotDescription,
    sizeof(VAR_6->slotDescription),
    ' ',
    "Heimdal hx509 SoftToken (slot)");
    FUNC_3((char *)VAR_6->manufacturerID,
    sizeof(VAR_6->manufacturerID),
    ' ',
    "Heimdal hx509 SoftToken (slot)");
    VAR_6->flags = VAR_1;
    if (VAR_4.flags.hardware_slot)
 VAR_6->flags |= VAR_0;
    VAR_6->hardwareVersion.major = 1;
    VAR_6->hardwareVersion.minor = 0;
    VAR_6->firmwareVersion.major = 1;
    VAR_6->firmwareVersion.minor = 0;

    return VAR_3;
}
