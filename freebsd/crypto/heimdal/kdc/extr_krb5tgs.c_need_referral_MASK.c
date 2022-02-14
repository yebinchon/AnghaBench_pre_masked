
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_realm ;
typedef TYPE_3__* krb5_principal ;
typedef int krb5_kdc_configuration ;
typedef int krb5_context ;
typedef int krb5_boolean ;
struct TYPE_10__ {int canonicalize; } ;
struct TYPE_7__ {int len; char** val; } ;
struct TYPE_8__ {scalar_t__ name_type; TYPE_1__ name_string; } ;
struct TYPE_9__ {TYPE_2__ name; } ;
typedef TYPE_4__ KDCOptions ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*,int,int **) ;
 int FUNC_1 (int ,int *,int ,char*,char const*) ;

__attribute__((used)) static krb5_boolean
FUNC_2(krb5_context VAR_2, krb5_kdc_configuration *VAR_3,
       const KDCOptions * const VAR_4, krb5_principal VAR_5,
       krb5_realm **VAR_6)
{
    const char *VAR_7;

    if(!VAR_4->canonicalize && VAR_5->name.name_type != VAR_1)
 return VAR_0;

    if (VAR_5->name.name_string.len == 1)
 VAR_7 = VAR_5->name.name_string.val[0];
    else if (VAR_5->name.name_string.len > 1)
 VAR_7 = VAR_5->name.name_string.val[1];
    else
 return VAR_0;

    FUNC_1(VAR_2, VAR_3, 0, "Searching referral for %s", VAR_7);

    return FUNC_0(VAR_2, VAR_7, VAR_0, VAR_6) == 0;
}
