
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * heim_isemaphore ;
typedef int heim_ipc ;
struct TYPE_5__ {int * data; scalar_t__ length; } ;
typedef TYPE_1__ heim_idata ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ,TYPE_1__*,int *,int ) ;
 int FUNC_2 (int ,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2)
{
    heim_isemaphore VAR_3;
    heim_idata VAR_4, VAR_5;
    heim_ipc VAR_6;
    int VAR_7;

    VAR_7 = FUNC_4(VAR_2, &VAR_6);
    if (VAR_7)
 FUNC_0(1, "heim_ipc_init_context: %d", VAR_7);

    VAR_4.length = 0;
    VAR_4.data = ((void*)0);

    VAR_7 = FUNC_2(VAR_6, &VAR_4, &VAR_5, ((void*)0));
    if (VAR_7)
 FUNC_0(1, "heim_ipc_call: %d", VAR_7);

    VAR_3 = FUNC_5(0);
    if (VAR_3 == ((void*)0))
 FUNC_0(1, "heim_ipc_semaphore_create");

    VAR_7 = FUNC_1(VAR_6, &VAR_4, VAR_3, VAR_1);
    if (VAR_7)
 FUNC_0(1, "heim_ipc_async: %d", VAR_7);

    FUNC_6(VAR_3, VAR_0);

    FUNC_3(VAR_6);
}
