
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_principal ;
struct TYPE_3__ {int length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;


 int FUNC_0 (int ,int *,int,char*,char*,int *) ;

const char*
FUNC_1(krb5_context VAR_0,
             krb5_principal VAR_1,
             krb5_data *VAR_2)
{
    int VAR_3 = FUNC_0(VAR_0, ((void*)0), 6,
       "password_quality",
       "min_length",
       ((void*)0));
    if(VAR_2->length < VAR_3)
 return "Password too short";
    return ((void*)0);
}
