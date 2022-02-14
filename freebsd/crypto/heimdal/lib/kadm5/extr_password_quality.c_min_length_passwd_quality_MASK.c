
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int krb5_principal ;
struct TYPE_3__ {scalar_t__ length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;


 scalar_t__ FUNC_0 (int ,int *,int,char*,char*,int *) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_2 (krb5_context VAR_0,
      krb5_principal VAR_1,
      krb5_data *VAR_2,
      const char *VAR_3,
      char *VAR_4,
      size_t VAR_5)
{
    uint32_t VAR_6 = FUNC_0(VAR_0, ((void*)0), 6,
            "password_quality",
            "min_length",
            ((void*)0));

    if (VAR_2->length < VAR_6) {
 FUNC_1(VAR_4, "Password too short", VAR_5);
 return 1;
    } else
 return 0;
}
