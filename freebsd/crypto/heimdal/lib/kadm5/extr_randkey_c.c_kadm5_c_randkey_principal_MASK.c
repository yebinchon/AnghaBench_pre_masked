
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_principal ;
typedef int krb5_keyblock ;
typedef int krb5_data ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_4__ {int context; } ;
typedef TYPE_1__ kadm5_client_context ;
typedef int int32_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (unsigned char*,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int) ;

kadm5_ret_t
FUNC_13(void *VAR_2,
     krb5_principal VAR_3,
     krb5_keyblock **VAR_4,
     int *VAR_5)
{
    kadm5_client_context *VAR_6 = VAR_2;
    kadm5_ret_t VAR_7;
    krb5_storage *VAR_8;
    unsigned char VAR_9[1024];
    int32_t VAR_10;
    krb5_data VAR_11;

    VAR_7 = FUNC_2(VAR_2);
    if(VAR_7)
 return VAR_7;

    VAR_8 = FUNC_9(VAR_9, sizeof(VAR_9));
    if (VAR_8 == ((void*)0)) {
 FUNC_3(VAR_6->context);
 return VAR_0;
    }
    FUNC_10(VAR_8, VAR_1);
    FUNC_11(VAR_8, VAR_3);
    VAR_7 = FUNC_1(VAR_6, VAR_8);
    FUNC_7(VAR_8);
    if (VAR_7)
 return VAR_7;
    VAR_7 = FUNC_0(VAR_6, &VAR_11);
    if(VAR_7)
 return VAR_7;
    VAR_8 = FUNC_8(&VAR_11);
    if (VAR_8 == ((void*)0)) {
 FUNC_3(VAR_6->context);
 FUNC_4 (&VAR_11);
 return VAR_0;
    }
    FUNC_3(VAR_6->context);
    FUNC_5(VAR_8, &VAR_10);
    VAR_7 = VAR_10;
    if(VAR_7 == 0){
 krb5_keyblock *VAR_12;
 int VAR_13;

 FUNC_5(VAR_8, &VAR_10);
 VAR_12 = FUNC_12(VAR_10 * sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
     VAR_7 = VAR_0;
     goto out;
 }
 for(VAR_13 = 0; VAR_13 < VAR_10; VAR_13++)
     FUNC_6(VAR_8, &VAR_12[VAR_13]);
 *VAR_5 = VAR_10;
 *VAR_4 = VAR_12;
    }
out:
    FUNC_7(VAR_8);
    FUNC_4 (&VAR_11);
    return VAR_7;
}
