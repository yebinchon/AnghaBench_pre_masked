
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* krb5_principal ;
struct TYPE_12__ {scalar_t__ i; } ;
typedef TYPE_3__ krb5_kdc_flags ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_10__ {scalar_t__ initial; } ;
struct TYPE_11__ {TYPE_1__ b; } ;
struct TYPE_13__ {TYPE_2__ flags; void* server; void* client; } ;
typedef TYPE_4__ krb5_creds ;
typedef int krb5_context ;
typedef int * krb5_ccache ;
typedef int in ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int ,int *,void**) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ,void*) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_3__,int *,TYPE_4__*,TYPE_4__**) ;
 scalar_t__ FUNC_6 (int ,void**,int *,char const*,char*,int *) ;
 char* FUNC_7 (int ,void*,int) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_10(krb5_context VAR_1,
      krb5_ccache *VAR_2,
      krb5_principal *VAR_3)
{
    krb5_error_code VAR_4;
    const char *VAR_5, *VAR_6;
    krb5_principal VAR_7, VAR_8;

    VAR_4 = FUNC_1(VAR_1, VAR_2);
    if(VAR_4) {
 *VAR_2 = ((void*)0);
 return VAR_4;
    }

    VAR_4 = FUNC_2(VAR_1, *VAR_2, &VAR_7);
    if(VAR_4) {
 FUNC_0(VAR_1, *VAR_2);
 *VAR_2 = ((void*)0);
 return VAR_4;
    }

    VAR_4 = FUNC_6(VAR_1, &VAR_8, ((void*)0),
         "kadmin", "admin", ((void*)0));
    if (VAR_4) {
 FUNC_0(VAR_1, *VAR_2);
 *VAR_2 = ((void*)0);
 FUNC_4(VAR_1, VAR_7);
 return VAR_4;
    }

    {
 krb5_creds VAR_9, *VAR_10;
 krb5_kdc_flags VAR_11;

 VAR_11.i = 0;
 FUNC_8(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.client = VAR_7;
 VAR_9.server = VAR_8;


 VAR_4 = FUNC_5(VAR_1, VAR_0, VAR_11,
           *VAR_2, &VAR_9, &VAR_10);
 FUNC_4(VAR_1, VAR_8);
 if (VAR_4 == 0) {
     if (VAR_10->flags.b.initial) {
  *VAR_3 = VAR_7;
  FUNC_3(VAR_1, VAR_10);
  return 0;
     }
     FUNC_3(VAR_1, VAR_10);
 }
    }
    FUNC_0(VAR_1, *VAR_2);
    *VAR_2 = ((void*)0);

    VAR_5 = FUNC_7(VAR_1, VAR_7, 0);
    VAR_6 = FUNC_7(VAR_1, VAR_7, 1);
    if(VAR_6 == ((void*)0) || FUNC_9(VAR_6, "admin") != 0) {
 VAR_4 = FUNC_6(VAR_1, &VAR_8, ((void*)0), VAR_5, "admin", ((void*)0));
 FUNC_4(VAR_1, VAR_7);
 if(VAR_4 != 0)
     return VAR_4;

 *VAR_3 = VAR_8;
 return 0;
    }

    *VAR_3 = VAR_7;

    return 0;
}
