
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_12__ {int data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef TYPE_2__* gsskrb5_ctx ;
typedef int gss_buffer_set_t ;
struct TYPE_14__ {int value; int length; } ;
typedef TYPE_3__ gss_buffer_desc ;
typedef enum keytype { ____Placeholder_keytype } keytype ;
struct TYPE_13__ {int ctx_id_mutex; } ;
typedef scalar_t__ OM_uint32 ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;


 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__* const,int ,int **) ;
 scalar_t__ FUNC_5 (TYPE_2__* const,int ,int **) ;
 scalar_t__ FUNC_6 (TYPE_2__* const,int ,int **) ;
 scalar_t__ FUNC_7 (scalar_t__*,TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int *) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_14 (int *,int ) ;

__attribute__((used)) static OM_uint32 FUNC_15
           (OM_uint32 *VAR_4,
            const gsskrb5_ctx VAR_5,
     krb5_context VAR_6,
     enum keytype VAR_7,
            gss_buffer_set_t *VAR_8)
{
    krb5_keyblock *VAR_9 = ((void*)0);
    krb5_storage *VAR_10 = ((void*)0);
    krb5_data VAR_11;
    OM_uint32 VAR_12 = VAR_2;
    krb5_error_code VAR_13;

    FUNC_9(&VAR_11);

    VAR_10 = FUNC_11();
    if (VAR_10 == ((void*)0)) {
 FUNC_2();
 VAR_13 = VAR_1;
 goto out;
    }

    FUNC_0(&VAR_5->ctx_id_mutex);
    switch(VAR_7) {
    case 130:
 VAR_13 = FUNC_4(VAR_5, VAR_6, &VAR_9);
 break;
    case 129:
 VAR_13 = FUNC_5(VAR_5, VAR_6, &VAR_9);
 break;
    case 128:
 VAR_13 = FUNC_6(VAR_5, VAR_6, &VAR_9);
 break;
    default:
 FUNC_3(VAR_0, "%d is not a valid subkey type", VAR_7);
 VAR_13 = VAR_0;
 break;
   }
    FUNC_1(&VAR_5->ctx_id_mutex);
    if (VAR_13)
 goto out;
    if (VAR_9 == ((void*)0)) {
 FUNC_3(VAR_0, "have no subkey of type %d", VAR_7);
 VAR_13 = VAR_0;
 goto out;
    }

    VAR_13 = FUNC_14(VAR_10, *VAR_9);
    FUNC_10 (VAR_6, VAR_9);
    if (VAR_13)
 goto out;

    VAR_13 = FUNC_13(VAR_10, &VAR_11);
    if (VAR_13)
 goto out;

    {
 gss_buffer_desc VAR_14;

 VAR_14.length = VAR_11.length;
 VAR_14.value = VAR_11.data;

 VAR_12 = FUNC_7(VAR_4,
          &VAR_14,
          VAR_8);
    }

out:
    FUNC_8(&VAR_11);
    if (VAR_10)
 FUNC_12(VAR_10);
    if (VAR_13) {
 *VAR_4 = VAR_13;
 VAR_12 = VAR_3;
    }
    return VAR_12;
}
