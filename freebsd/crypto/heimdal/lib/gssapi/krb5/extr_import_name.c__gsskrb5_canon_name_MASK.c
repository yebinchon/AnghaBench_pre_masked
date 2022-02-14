
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_3__* krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_4__* krb5_const_principal ;
typedef int gss_name_t ;
struct TYPE_16__ {int realm; } ;
struct TYPE_13__ {int len; char** val; } ;
struct TYPE_14__ {TYPE_1__ name_string; } ;
struct TYPE_15__ {TYPE_2__ name; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*,TYPE_3__**) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,int ) ;
 int FUNC_3 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (int ,char*,char*,int ,TYPE_3__**) ;

OM_uint32
FUNC_5(OM_uint32 *VAR_4, krb5_context VAR_5,
      int VAR_6, krb5_const_principal VAR_7, gss_name_t VAR_8,
      krb5_principal *VAR_9)
{
    krb5_principal VAR_10 = (krb5_principal)VAR_8;
    krb5_error_code VAR_11;
    char *VAR_12 = ((void*)0), *VAR_13;

    *VAR_4 = 0;


    if (FUNC_1(VAR_5, VAR_10) != VAR_3) {
 VAR_11 = FUNC_0(VAR_5, VAR_10, VAR_9);
    } else if (!VAR_6) {
 VAR_11 = FUNC_0(VAR_5, VAR_10, VAR_9);
 if (VAR_11)
     goto out;
 FUNC_3(VAR_5, *VAR_9, VAR_2);
 if (VAR_7)
     VAR_11 = FUNC_2(VAR_5, *VAR_9, VAR_7->realm);
    } else {
 if (VAR_10->name.name_string.len == 0)
     return VAR_0;
 else if (VAR_10->name.name_string.len > 1)
     VAR_12 = VAR_10->name.name_string.val[1];

 VAR_13 = VAR_10->name.name_string.val[0];

 VAR_11 = FUNC_4(VAR_5,
          VAR_12,
          VAR_13,
          VAR_2,
          VAR_9);
    }

 out:
    if (VAR_11) {
 *VAR_4 = VAR_11;
 return VAR_1;
    }

    return 0;
}
