
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_principal ;
typedef int krb5_key_data ;
typedef int krb5_data ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_4__ {int context; } ;
typedef TYPE_1__ kadm5_client_context ;
typedef scalar_t__ int32_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (unsigned char*,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ) ;

kadm5_ret_t
FUNC_12(void *VAR_2,
      krb5_principal VAR_3,
      int VAR_4,
      krb5_key_data *VAR_5)
{
    kadm5_client_context *VAR_6 = VAR_2;
    kadm5_ret_t VAR_7;
    krb5_storage *VAR_8;
    unsigned char VAR_9[1024];
    int32_t VAR_10;
    krb5_data VAR_11;
    int VAR_12;

    VAR_7 = FUNC_2(VAR_2);
    if(VAR_7)
 return VAR_7;

    VAR_8 = FUNC_9(VAR_9, sizeof(VAR_9));
    if (VAR_8 == ((void*)0)) {
 FUNC_4(VAR_6->context);
 return VAR_0;
    }
    FUNC_10(VAR_8, VAR_1);
    FUNC_11(VAR_8, VAR_3);
    FUNC_10(VAR_8, VAR_4);
    for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12)
 FUNC_3 (VAR_8, &VAR_5[VAR_12]);
    VAR_7 = FUNC_1(VAR_6, VAR_8);
    FUNC_7(VAR_8);
    if (VAR_7)
 return VAR_7;
    VAR_7 = FUNC_0(VAR_6, &VAR_11);
    if(VAR_7)
 return VAR_7;
    VAR_8 = FUNC_8 (&VAR_11);
    if (VAR_8 == ((void*)0)) {
 FUNC_4(VAR_6->context);
 FUNC_5 (&VAR_11);
 return VAR_0;
    }
    FUNC_6(VAR_8, &VAR_10);
    FUNC_4(VAR_6->context);
    FUNC_7(VAR_8);
    FUNC_5 (&VAR_11);
    return VAR_10;
}
