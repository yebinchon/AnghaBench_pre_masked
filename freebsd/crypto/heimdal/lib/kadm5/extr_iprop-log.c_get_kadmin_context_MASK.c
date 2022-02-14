
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int kadm5_server_context ;
struct TYPE_4__ {char* realm; int mask; } ;
typedef TYPE_1__ kadm5_config_params ;
typedef int conf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,TYPE_1__*,int ,int ,void**) ;
 int FUNC_4 (int ,int,scalar_t__,char*) ;
 int FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (char const*,char***) ;
 scalar_t__ FUNC_7 (int ,char**) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static kadm5_server_context *
FUNC_9(const char *VAR_3, char *VAR_4)
{
    kadm5_config_params VAR_5;
    krb5_error_code VAR_6;
    void *VAR_7;
    char **VAR_8;

    if (VAR_3 == ((void*)0)) {
 char *VAR_9;
 FUNC_0(&VAR_9, "%d/kdc.conf", FUNC_2(VAR_2));
 if (VAR_9 == ((void*)0))
     FUNC_1(1, "out of memory");
 VAR_3 = VAR_9;
    }

    VAR_6 = FUNC_6(VAR_3, &VAR_8);
    if (VAR_6)
 FUNC_4(VAR_2, 1, VAR_6, "getting configuration files");

    VAR_6 = FUNC_7(VAR_2, VAR_8);
    FUNC_5(VAR_8);
    if (VAR_6)
 FUNC_4(VAR_2, 1, VAR_6, "reading configuration files");

    FUNC_8(&VAR_5, 0, sizeof(VAR_5));
    if(VAR_4) {
 VAR_5.mask |= VAR_1;
 VAR_5.realm = VAR_4;
    }

    VAR_6 = FUNC_3 (VAR_2,
     VAR_0,
     ((void*)0),
     VAR_0,
     &VAR_5, 0, 0,
     &VAR_7);
    if (VAR_6)
 FUNC_4 (VAR_2, 1, VAR_6, "kadm5_init_with_password_ctx");

    return (kadm5_server_context *)VAR_7;
}
