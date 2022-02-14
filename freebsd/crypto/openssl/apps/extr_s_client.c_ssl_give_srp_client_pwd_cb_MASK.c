
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* password; char* prompt_info; } ;
struct TYPE_4__ {scalar_t__ srppassin; } ;
typedef int SSL ;
typedef TYPE_1__ SRP_ARG ;
typedef TYPE_2__ PW_CB_DATA ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_2 (scalar_t__,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,scalar_t__,int ,TYPE_2__*) ;

__attribute__((used)) static char *FUNC_4(SSL *VAR_2, void *VAR_3)
{
    SRP_ARG *VAR_4 = (SRP_ARG *)VAR_3;
    char *VAR_5 = FUNC_2(VAR_0 + 1, "SRP password buffer");
    PW_CB_DATA VAR_6;
    int VAR_7;

    VAR_6.password = (char *)VAR_4->srppassin;
    VAR_6.prompt_info = "SRP user";
    if ((VAR_7 = FUNC_3(VAR_5, VAR_0, 0, &VAR_6)) < 0) {
        FUNC_0(VAR_1, "Can't read Password\n");
        FUNC_1(VAR_5);
        return ((void*)0);
    }
    *(VAR_5 + VAR_7) = '\0';

    return VAR_5;
}
