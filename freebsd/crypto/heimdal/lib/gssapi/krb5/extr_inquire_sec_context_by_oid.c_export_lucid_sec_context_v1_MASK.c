
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int krb5_storage ;
struct TYPE_13__ {int keytype; } ;
typedef TYPE_1__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_14__ {int length; int data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
typedef scalar_t__ int32_t ;
typedef TYPE_3__* gsskrb5_ctx ;
typedef int gss_buffer_set_t ;
struct TYPE_16__ {int length; int value; } ;
typedef TYPE_4__ gss_buffer_desc ;
struct TYPE_15__ {int more_flags; int lifetime; int ctx_id_mutex; int auth_context; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;







 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,TYPE_1__**) ;
 scalar_t__ FUNC_4 (scalar_t__*,TYPE_4__*,int *) ;
 int FUNC_5 (int ,int ,scalar_t__*) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *,TYPE_1__) ;
 scalar_t__ FUNC_14 (int *,int ) ;

__attribute__((used)) static OM_uint32
FUNC_15(OM_uint32 *VAR_6,
       gsskrb5_ctx VAR_7,
       krb5_context VAR_8,
       gss_buffer_set_t *VAR_9)
{
    krb5_storage *VAR_10 = ((void*)0);
    OM_uint32 VAR_11 = VAR_2;
    krb5_error_code VAR_12;
    krb5_keyblock *VAR_13 = ((void*)0);
    int32_t VAR_14;
    int VAR_15;
    krb5_data VAR_16;

    *VAR_6 = 0;

    FUNC_0(&VAR_7->ctx_id_mutex);

    VAR_15 = (VAR_7->more_flags & VAR_4);

    VAR_10 = FUNC_9();
    if (VAR_10 == ((void*)0)) {
 FUNC_2();
 VAR_12 = VAR_1;
 goto out;
    }

    VAR_12 = FUNC_12(VAR_10, 1);
    if (VAR_12) goto out;
    VAR_12 = FUNC_12(VAR_10, (VAR_7->more_flags & VAR_5) ? 1 : 0);
    if (VAR_12) goto out;
    VAR_12 = FUNC_12(VAR_10, VAR_7->lifetime);
    if (VAR_12) goto out;
    FUNC_5 (VAR_8,
         VAR_7->auth_context,
         &VAR_14);
    VAR_12 = FUNC_14(VAR_10, (uint32_t)0);
    if (VAR_12) goto out;
    VAR_12 = FUNC_14(VAR_10, (uint32_t)VAR_14);
    if (VAR_12) goto out;
    FUNC_6 (VAR_8,
          VAR_7->auth_context,
          &VAR_14);
    VAR_12 = FUNC_14(VAR_10, (uint32_t)0);
    if (VAR_12) goto out;
    VAR_12 = FUNC_14(VAR_10, (uint32_t)VAR_14);
    if (VAR_12) goto out;
    VAR_12 = FUNC_12(VAR_10, (VAR_15) ? 1 : 0);
    if (VAR_12) goto out;

    VAR_12 = FUNC_3(VAR_7, VAR_8, &VAR_13);
    if (VAR_12) goto out;

    if (VAR_15 == 0) {
 int VAR_17, VAR_18;

 switch (VAR_13->keytype) {
 case 130:
 case 129:
 case 128:
     VAR_17 = 0;
     VAR_18 = 0;
     break;
 case 132:
 case 131:
     VAR_17 = 4;
     VAR_18 = 2;
     break;
 case 134:
 case 133:
     VAR_17 = 17;
     VAR_18 = 16;
     break;
 default:
     VAR_17 = -1;
     VAR_18 = -1;
     break;
 }
 VAR_12 = FUNC_12(VAR_10, VAR_17);
 if (VAR_12) goto out;
 VAR_12 = FUNC_12(VAR_10, VAR_18);
 if (VAR_12) goto out;

 VAR_12 = FUNC_13(VAR_10, *VAR_13);
 if (VAR_12) goto out;
    } else {
 int VAR_19 = (VAR_7->more_flags & VAR_0) ? 1 : 0;


 VAR_12 = FUNC_12(VAR_10, VAR_19);
 if (VAR_12) goto out;

 VAR_12 = FUNC_13(VAR_10, *VAR_13);
 if (VAR_12) goto out;

 if (VAR_19) {
     VAR_12 = FUNC_13(VAR_10, *VAR_13);
     if (VAR_12) goto out;
 }
    }
    VAR_12 = FUNC_11(VAR_10, &VAR_16);
    if (VAR_12) goto out;

    {
 gss_buffer_desc VAR_20;

 VAR_20.value = VAR_16.data;
 VAR_20.length = VAR_16.length;

 VAR_12 = FUNC_4(VAR_6, &VAR_20, VAR_9);
 FUNC_7(&VAR_16);
 if (VAR_12)
     goto out;
    }

out:
    if (VAR_13)
 FUNC_8 (VAR_8, VAR_13);
    if (VAR_10)
 FUNC_10(VAR_10);
    if (VAR_12) {
 *VAR_6 = VAR_12;
 VAR_11 = VAR_3;
    }
    FUNC_1(&VAR_7->ctx_id_mutex);
    return VAR_11;
}
