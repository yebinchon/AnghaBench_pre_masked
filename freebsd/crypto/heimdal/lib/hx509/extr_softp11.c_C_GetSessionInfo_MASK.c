
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ login_done; } ;
struct TYPE_8__ {TYPE_1__ flags; } ;
struct TYPE_7__ {int slotID; scalar_t__ ulDeviceError; int flags; int state; } ;
typedef TYPE_2__* CK_SESSION_INFO_PTR ;
typedef int CK_SESSION_HANDLE ;
typedef int CK_RV ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (char*) ;

CK_RV
FUNC_4(CK_SESSION_HANDLE VAR_5,
   CK_SESSION_INFO_PTR VAR_6)
{
    FUNC_3("GetSessionInfo\n");
    FUNC_0();

    FUNC_1(VAR_5, ((void*)0));

    FUNC_2(VAR_6, 20, sizeof(*VAR_6));

    VAR_6->slotID = 1;
    if (VAR_4.flags.login_done)
 VAR_6->state = VAR_3;
    else
 VAR_6->state = VAR_2;
    VAR_6->flags = VAR_0;
    VAR_6->ulDeviceError = 0;

    return VAR_1;
}
