
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session_state {int dummy; } ;
typedef int CK_SESSION_HANDLE ;
typedef int CK_RV ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct session_state**) ;
 int FUNC_2 (struct session_state*) ;
 int FUNC_3 (char*) ;

CK_RV
FUNC_4(CK_SESSION_HANDLE VAR_1)
{
    struct session_state *VAR_2;

    FUNC_0();

    FUNC_3("FindObjectsFinal\n");
    FUNC_1(VAR_1, &VAR_2);
    FUNC_2(VAR_2);
    return VAR_0;
}
