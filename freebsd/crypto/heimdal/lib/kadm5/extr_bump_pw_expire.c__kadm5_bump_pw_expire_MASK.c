
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_5__ {int context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef int kadm5_ret_t ;
struct TYPE_6__ {scalar_t__* pw_end; } ;
typedef TYPE_2__ hdb_entry ;


 scalar_t__ FUNC_0 (int ,int *,int,char*,char*,int *) ;
 scalar_t__ FUNC_1 (int *) ;

kadm5_ret_t
FUNC_2(kadm5_server_context *VAR_0,
        hdb_entry *VAR_1)
{
    if (VAR_1->pw_end != ((void*)0)) {
 time_t VAR_2;

 VAR_2 = FUNC_0(VAR_0->context,
         ((void*)0),
         365 * 24 * 60 * 60,
         "kadmin",
         "password_lifetime",
         ((void*)0));

 *(VAR_1->pw_end) = FUNC_1(((void*)0)) + VAR_2;
    }
    return 0;
}
