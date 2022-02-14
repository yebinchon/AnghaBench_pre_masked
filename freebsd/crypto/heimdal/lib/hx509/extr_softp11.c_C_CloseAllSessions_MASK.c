
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ session_handle; } ;
struct TYPE_3__ {TYPE_2__* state; } ;
typedef int CK_SLOT_ID ;
typedef int CK_RV ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*) ;

CK_RV
FUNC_3(CK_SLOT_ID VAR_4)
{
    size_t VAR_5;
    FUNC_0();

    FUNC_2("CloseAllSessions\n");

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 if (VAR_3.state[VAR_5].session_handle != VAR_1)
     FUNC_1(&VAR_3.state[VAR_5]);

    return VAR_0;
}
