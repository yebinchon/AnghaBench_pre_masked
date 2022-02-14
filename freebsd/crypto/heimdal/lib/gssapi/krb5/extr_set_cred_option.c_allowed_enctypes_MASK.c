
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef scalar_t__ krb5_enctype ;
typedef int krb5_context ;
typedef TYPE_1__* gsskrb5_cred ;
typedef scalar_t__ gss_cred_id_t ;
typedef TYPE_2__* gss_buffer_t ;
struct TYPE_5__ {int length; int value; } ;
struct TYPE_4__ {scalar_t__* enctypes; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int) ;
 scalar_t__* FUNC_4 (size_t) ;

__attribute__((used)) static OM_uint32
FUNC_5(OM_uint32 *VAR_4,
   krb5_context VAR_5,
   gss_cred_id_t *VAR_6,
   const gss_buffer_t VAR_7)
{
    OM_uint32 VAR_8;
    krb5_error_code VAR_9;
    size_t VAR_10, VAR_11;
    krb5_enctype *VAR_12 = ((void*)0);
    krb5_storage *VAR_13 = ((void*)0);
    gsskrb5_cred VAR_14;

    if (VAR_6 == ((void*)0) || *VAR_6 == VAR_1) {
 *VAR_4 = 0;
 return VAR_3;
    }

    VAR_14 = (gsskrb5_cred)*VAR_6;

    if ((VAR_7->length % 4) != 0) {
 *VAR_4 = 0;
 VAR_8 = VAR_3;
 goto out;
    }

    VAR_10 = VAR_7->length / 4;
    VAR_12 = FUNC_4((VAR_10 + 1) * 4);
    if (VAR_12 == ((void*)0)) {
 *VAR_4 = VAR_0;
 VAR_8 = VAR_3;
 goto out;
    }

    VAR_13 = FUNC_3(VAR_7->value, VAR_7->length);
    if (VAR_13 == ((void*)0)) {
 *VAR_4 = VAR_0;
 VAR_8 = VAR_3;
 goto out;
    }

    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
 uint32_t VAR_15;

 VAR_9 = FUNC_1(VAR_13, &VAR_15);
 if (VAR_9) {
     *VAR_4 = VAR_9;
     VAR_8 = VAR_3;
     goto out;
 }
 VAR_12[VAR_11] = VAR_15;
    }
    VAR_12[VAR_11] = 0;

    if (VAR_14->enctypes)
 FUNC_0(VAR_14->enctypes);
    VAR_14->enctypes = VAR_12;

    FUNC_2(VAR_13);

    return VAR_2;

out:
    if (VAR_13)
 FUNC_2(VAR_13);
    if (VAR_12)
 FUNC_0(VAR_12);

    return VAR_8;
}
