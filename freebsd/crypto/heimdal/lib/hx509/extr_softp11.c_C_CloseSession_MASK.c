
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session_state {int dummy; } ;
typedef int CK_SESSION_HANDLE ;
typedef scalar_t__ CK_RV ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct session_state*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,struct session_state**) ;

CK_RV
FUNC_5(CK_SESSION_HANDLE VAR_1)
{
    struct session_state *VAR_2;
    FUNC_0();
    FUNC_3("CloseSession\n");

    if (FUNC_4(VAR_1, &VAR_2) != VAR_0)
 FUNC_1("closed session not open");
    else
 FUNC_2(VAR_2);

    return VAR_0;
}
