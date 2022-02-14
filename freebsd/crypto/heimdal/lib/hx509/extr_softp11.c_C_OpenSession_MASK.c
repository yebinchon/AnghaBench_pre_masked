
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t open_sessions; TYPE_1__* state; int notify; int application; } ;
struct TYPE_3__ {scalar_t__ session_handle; } ;
typedef int CK_VOID_PTR ;
typedef scalar_t__ CK_SLOT_ID ;
typedef scalar_t__* CK_SESSION_HANDLE_PTR ;
typedef scalar_t__ CK_SESSION_HANDLE ;
typedef int CK_RV ;
typedef int CK_NOTIFY ;
typedef int CK_FLAGS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 size_t VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 (char*,int) ;

CK_RV
FUNC_4(CK_SLOT_ID VAR_5,
       CK_FLAGS VAR_6,
       CK_VOID_PTR VAR_7,
       CK_NOTIFY VAR_8,
       CK_SESSION_HANDLE_PTR VAR_9)
{
    size_t VAR_10;
    FUNC_0();
    FUNC_3("OpenSession: slot: %d\n", (int)VAR_5);

    if (VAR_4.open_sessions == VAR_3)
 return VAR_1;

    VAR_4.application = VAR_7;
    VAR_4.notify = VAR_8;

    for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
 if (VAR_4.state[VAR_10].session_handle == VAR_2)
     break;
    if (VAR_10 == VAR_3)
 FUNC_1();

    VAR_4.open_sessions++;

    VAR_4.state[VAR_10].session_handle =
 (CK_SESSION_HANDLE)(FUNC_2() & 0xfffff);
    *VAR_9 = VAR_4.state[VAR_10].session_handle;

    return VAR_0;
}
