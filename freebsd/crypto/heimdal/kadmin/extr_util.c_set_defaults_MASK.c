
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* kadm5_principal_ent_t ;
struct TYPE_4__ {int attributes; int pw_expiration; int princ_expire_time; int max_renewable_life; int max_life; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_0(kadm5_principal_ent_t VAR_6, int *VAR_7,
      kadm5_principal_ent_t VAR_8, int VAR_9)
{
    if (VAR_8
 && (VAR_9 & VAR_1)
 && !(*VAR_7 & VAR_1))
 VAR_6->max_life = VAR_8->max_life;

    if (VAR_8
 && (VAR_9 & VAR_2)
 && !(*VAR_7 & VAR_2))
 VAR_6->max_renewable_life = VAR_8->max_renewable_life;

    if (VAR_8
 && (VAR_9 & VAR_3)
 && !(*VAR_7 & VAR_3))
 VAR_6->princ_expire_time = VAR_8->princ_expire_time;

    if (VAR_8
 && (VAR_9 & VAR_4)
 && !(*VAR_7 & VAR_4))
 VAR_6->pw_expiration = VAR_8->pw_expiration;

    if (VAR_8
 && (VAR_9 & VAR_0)
 && !(*VAR_7 & VAR_0))
 VAR_6->attributes = VAR_8->attributes & ~VAR_5;
}
