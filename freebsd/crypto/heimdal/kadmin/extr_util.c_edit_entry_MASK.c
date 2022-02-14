
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* kadm5_principal_ent_t ;
struct TYPE_6__ {int attributes; int pw_expiration; int princ_expire_time; int max_renewable_life; int max_life; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int *,int*,int ) ;
 scalar_t__ FUNC_1 (char*,int *,int*,int ) ;
 scalar_t__ FUNC_2 (char*,int *,int*,int ) ;
 int FUNC_3 (TYPE_1__*,int*,TYPE_1__*,int) ;

int
FUNC_4(kadm5_principal_ent_t VAR_5, int *VAR_6,
    kadm5_principal_ent_t VAR_7, int VAR_8)
{

    FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);

    if(FUNC_1 ("Max ticket life", &VAR_5->max_life, VAR_6,
      VAR_1) != 0)
 return 1;

    if(FUNC_1 ("Max renewable life", &VAR_5->max_renewable_life, VAR_6,
      VAR_2) != 0)
 return 1;

    if(FUNC_2 ("Principal expiration time", &VAR_5->princ_expire_time, VAR_6,
     VAR_3) != 0)
 return 1;

    if(FUNC_2 ("Password expiration time", &VAR_5->pw_expiration, VAR_6,
     VAR_4) != 0)
 return 1;

    if(FUNC_0 ("Attributes", &VAR_5->attributes, VAR_6,
   VAR_0) != 0)
 return 1;

    return 0;
}
