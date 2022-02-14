
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_context ;
typedef TYPE_1__* kadm5_principal_ent_t ;
struct TYPE_3__ {int attributes; int pw_expiration; int princ_expire_time; int max_renewable_life; int max_life; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,int *,int*,int ) ;
 scalar_t__ FUNC_2 (char const*,int *,int*,int ) ;
 scalar_t__ FUNC_3 (char const*,int *,int*,int ) ;

int
FUNC_4(krb5_context VAR_5,
   kadm5_principal_ent_t VAR_6,
   int *VAR_7,
   const char *VAR_8,
   const char *VAR_9,
   const char *VAR_10,
   const char *VAR_11,
   const char *VAR_12)
{
    if (VAR_8 != ((void*)0)) {
 if (FUNC_2 (VAR_8, &VAR_6->max_life,
     VAR_7, VAR_1)) {
     FUNC_0 (VAR_5, "unable to parse `%s'", VAR_8);
     return 1;
 }
    }
    if (VAR_9 != ((void*)0)) {
 if (FUNC_2 (VAR_9, &VAR_6->max_renewable_life,
     VAR_7, VAR_2)) {
     FUNC_0 (VAR_5, "unable to parse `%s'", VAR_9);
     return 1;
 }
    }

    if (VAR_10) {
 if (FUNC_3 (VAR_10, &VAR_6->princ_expire_time,
   VAR_7, VAR_3)) {
     FUNC_0 (VAR_5, "unable to parse `%s'", VAR_10);
     return 1;
 }
    }
    if (VAR_11) {
 if (FUNC_3 (VAR_11, &VAR_6->pw_expiration,
    VAR_7, VAR_4)) {
     FUNC_0 (VAR_5, "unable to parse `%s'", VAR_11);
     return 1;
 }
    }
    if (VAR_12 != ((void*)0)) {
 if (FUNC_1 (VAR_12, &VAR_6->attributes,
         VAR_7, VAR_0)) {
     FUNC_0 (VAR_5, "unable to parse `%s'", VAR_12);
     return 1;
 }
    }
    return 0;
}
