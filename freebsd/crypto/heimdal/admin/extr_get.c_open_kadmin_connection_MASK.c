
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_4__ {char* admin_server; int * realm; int mask; int kadmind_port; } ;
typedef TYPE_1__ kadm5_config_params ;
typedef int conf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,char*,int *,int ,TYPE_1__*,int ,int ,void**) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int * FUNC_6 (char const*) ;

__attribute__((used)) static void*
FUNC_7(char *VAR_5,
         const char *VAR_6,
         char *VAR_7,
         int VAR_8)
{
    static kadm5_config_params VAR_9;
    krb5_error_code VAR_10;
    void *VAR_11;
    FUNC_5(&VAR_9, 0, sizeof(VAR_9));

    if(VAR_6) {
 VAR_9.realm = FUNC_6(VAR_6);
 if (VAR_9.realm == ((void*)0)) {
     FUNC_3(VAR_4, 0, "malloc: out of memory");
     return ((void*)0);
 }
 VAR_9.mask |= VAR_3;
    }

    if (VAR_7) {
 VAR_9.admin_server = VAR_7;
 VAR_9.mask |= VAR_1;
    }

    if (VAR_8) {
 VAR_9.kadmind_port = FUNC_1(VAR_8);
 VAR_9.mask |= VAR_2;
    }




    VAR_10 = FUNC_2(VAR_4,
           VAR_5,
           ((void*)0),
           VAR_0,
           &VAR_9, 0, 0,
           &VAR_11);
    FUNC_0(VAR_9.realm);
    if(VAR_10) {
 FUNC_4(VAR_4, VAR_10, "kadm5_init_with_password");
 return ((void*)0);
    }
    return VAR_11;
}
