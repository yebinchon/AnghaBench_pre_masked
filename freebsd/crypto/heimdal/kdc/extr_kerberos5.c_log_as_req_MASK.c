
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rk_strpool {int dummy; } ;
typedef int krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
typedef char* krb5_enctype ;
typedef int krb5_context ;
typedef int fixedstr ;
struct TYPE_4__ {size_t len; char** val; } ;
struct TYPE_5__ {int kdc_options; TYPE_1__ etype; } ;
typedef TYPE_2__ KDC_REQ_BODY ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,char*,char**) ;
 char* FUNC_5 (struct rk_strpool*) ;
 struct rk_strpool* FUNC_6 (struct rk_strpool*,char*,...) ;
 int FUNC_7 (int ,int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(krb5_context VAR_0,
    krb5_kdc_configuration *VAR_1,
    krb5_enctype VAR_2,
    krb5_enctype VAR_3,
    const KDC_REQ_BODY *VAR_4)
{
    krb5_error_code VAR_5;
    struct rk_strpool *VAR_6;
    char *VAR_7;
    size_t VAR_8;

    VAR_6 = FUNC_6(((void*)0), "%s", "Client supported enctypes: ");

    for (VAR_8 = 0; VAR_8 < VAR_4->etype.len; VAR_8++) {
 VAR_5 = FUNC_4(VAR_0, VAR_4->etype.val[VAR_8], &VAR_7);
 if (VAR_5 == 0) {
     VAR_6 = FUNC_6(VAR_6, "%s", VAR_7);
     FUNC_2(VAR_7);
 } else
     VAR_6 = FUNC_6(VAR_6, "%d", VAR_4->etype.val[VAR_8]);
 if (VAR_6 && VAR_8 + 1 < VAR_4->etype.len)
     VAR_6 = FUNC_6(VAR_6, ", ");
 if (VAR_6 == ((void*)0)) {
     FUNC_3(VAR_0, VAR_1, 0, "out of memory");
     return;
 }
    }
    if (VAR_6 == ((void*)0))
 VAR_6 = FUNC_6(VAR_6, "no encryption types");

    {
 char *VAR_9;
 char *VAR_10;

 VAR_5 = FUNC_4(VAR_0, VAR_2, &VAR_9);
 if(VAR_5 == 0) {
     VAR_5 = FUNC_4(VAR_0, VAR_3, &VAR_10);
     if (VAR_5 == 0) {
  VAR_6 = FUNC_6(VAR_6, ", using %s/%s", VAR_9, VAR_10);
  FUNC_2(VAR_10);
     }
     FUNC_2(VAR_9);
 }
 if (VAR_5 != 0)
     VAR_6 = FUNC_6(VAR_6, ", using enctypes %d/%d",
     VAR_2, VAR_3);
    }

    VAR_7 = FUNC_5(VAR_6);
    FUNC_3(VAR_0, VAR_1, 0, "%s", VAR_7);
    FUNC_2(VAR_7);

    {
 char VAR_11[128];
 FUNC_7(FUNC_0(VAR_4->kdc_options), FUNC_1(),
        VAR_11, sizeof(VAR_11));
 if(*VAR_11)
     FUNC_3(VAR_0, VAR_1, 0, "Requested flags: %s", VAR_11);
    }
}
