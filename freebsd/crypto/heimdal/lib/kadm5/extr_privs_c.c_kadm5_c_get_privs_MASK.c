
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int krb5_storage ;
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
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (unsigned char*,int) ;
 int FUNC_10 (int *,int ) ;

kadm5_ret_t
FUNC_11(void *VAR_2, uint32_t *VAR_3)
{
    kadm5_client_context *VAR_4 = VAR_2;
    kadm5_ret_t VAR_5;
    krb5_storage *VAR_6;
    unsigned char VAR_7[1024];
    int32_t VAR_8;
    krb5_data VAR_9;

    *VAR_3 = 0;

    VAR_5 = FUNC_2(VAR_2);
    if(VAR_5)
 return VAR_5;

    VAR_6 = FUNC_9(VAR_7, sizeof(VAR_7));
    if (VAR_6 == ((void*)0)) {
 FUNC_3(VAR_4->context);
 return VAR_0;
    }
    FUNC_10(VAR_6, VAR_1);
    VAR_5 = FUNC_1(VAR_4, VAR_6);
    FUNC_7(VAR_6);
    if(VAR_5)
 return VAR_5;
    VAR_5 = FUNC_0(VAR_4, &VAR_9);
    if (VAR_5)
 return VAR_5;
    VAR_6 = FUNC_8(&VAR_9);
    if (VAR_6 == ((void*)0)) {
 FUNC_3(VAR_4->context);
 FUNC_4 (&VAR_9);
 return VAR_0;
    }
    FUNC_5(VAR_6, &VAR_8);
    FUNC_3(VAR_4->context);
    VAR_5 = VAR_8;
    if(VAR_5 == 0){
 FUNC_6(VAR_6, VAR_3);
    }
    FUNC_7(VAR_6);
    FUNC_4 (&VAR_9);
    return VAR_5;
}
