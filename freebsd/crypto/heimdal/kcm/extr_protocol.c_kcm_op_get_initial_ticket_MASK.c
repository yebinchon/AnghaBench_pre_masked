
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int * krb5_principal ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;
typedef TYPE_2__* kcm_ccache ;
typedef scalar_t__ int8_t ;
struct TYPE_6__ {int keyblock; } ;
struct TYPE_7__ {int mutex; int flags; TYPE_1__ key; int * server; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int ,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int ,char*,TYPE_2__**) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,scalar_t__*) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *,int **) ;
 scalar_t__ FUNC_13 (int *,char**) ;

__attribute__((used)) static krb5_error_code
FUNC_14(krb5_context VAR_1,
     kcm_client *VAR_2,
     kcm_operation VAR_3,
     krb5_storage *VAR_4,
     krb5_storage *VAR_5)
{
    krb5_error_code VAR_6;
    kcm_ccache VAR_7;
    char *VAR_8;
    int8_t VAR_9 = 0;
    krb5_principal VAR_10 = ((void*)0);
    krb5_keyblock VAR_11;

    FUNC_9(&VAR_11);

    VAR_6 = FUNC_13(VAR_4, &VAR_8);
    if (VAR_6)
 return VAR_6;

    FUNC_2(VAR_1, VAR_2, VAR_3, VAR_8);

    VAR_6 = FUNC_10(VAR_4, &VAR_9);
    if (VAR_6) {
 FUNC_3(VAR_8);
 return VAR_6;
    }

    if (VAR_9) {
 VAR_6 = FUNC_12(VAR_4, &VAR_10);
 if (VAR_6) {
     FUNC_3(VAR_8);
     return VAR_6;
 }
    }

    VAR_6 = FUNC_11(VAR_4, &VAR_11);
    if (VAR_6) {
 FUNC_3(VAR_8);
 if (VAR_10 != ((void*)0))
     FUNC_8(VAR_1, VAR_10);
 return VAR_6;
    }

    VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_3,
        VAR_8, &VAR_7);
    if (VAR_6 == 0) {
 FUNC_0(&VAR_7->mutex);

 if (VAR_7->server != ((void*)0)) {
     FUNC_8(VAR_1, VAR_7->server);
     VAR_7->server = ((void*)0);
 }

 FUNC_7(VAR_1, &VAR_7->key.keyblock);

 VAR_7->server = VAR_10;
 VAR_7->key.keyblock = VAR_11;
     VAR_7->flags |= VAR_0;

 VAR_6 = FUNC_4(VAR_1, VAR_7, ((void*)0));
 if (VAR_6) {
     VAR_7->server = ((void*)0);
     FUNC_9(&VAR_7->key.keyblock);
     VAR_7->flags &= ~(VAR_0);
 }

 FUNC_1(&VAR_7->mutex);
    }

    FUNC_3(VAR_8);

    if (VAR_6 != 0) {
 FUNC_8(VAR_1, VAR_10);
 FUNC_7(VAR_1, &VAR_11);
    }

    FUNC_6(VAR_1, VAR_7);

    return VAR_6;
}
