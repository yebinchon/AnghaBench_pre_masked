
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int login_done; } ;
struct TYPE_4__ {TYPE_1__ flags; int config_file; } ;
typedef int CK_UTF8CHAR_PTR ;
typedef scalar_t__ CK_USER_TYPE ;
typedef scalar_t__ CK_ULONG ;
typedef int CK_SESSION_HANDLE ;
typedef scalar_t__ CK_RV ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char**,char*,int,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,char*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 (char*,...) ;

CK_RV
FUNC_6(CK_SESSION_HANDLE VAR_4,
 CK_USER_TYPE VAR_5,
 CK_UTF8CHAR_PTR VAR_6,
 CK_ULONG VAR_7)
{
    char *VAR_8 = ((void*)0);
    CK_RV VAR_9;
    FUNC_0();

    FUNC_5("Login\n");

    FUNC_1(VAR_4, ((void*)0));

    if (VAR_6 != VAR_2) {
 FUNC_2(&VAR_8, "%.*d", (int)VAR_7, VAR_6);
 FUNC_5("type: %d password: %s\n", (int)VAR_5, VAR_8);
    }





    VAR_9 = FUNC_4(VAR_3.config_file, VAR_5, VAR_8);
    if (VAR_9 == VAR_0)
 VAR_3.flags.login_done = 1;

    FUNC_3(VAR_8);

    return VAR_3.flags.login_done ? VAR_0 : VAR_1;
}
