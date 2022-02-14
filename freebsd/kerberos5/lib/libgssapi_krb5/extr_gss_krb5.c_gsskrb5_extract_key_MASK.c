
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_storage ;
typedef int krb5_keyblock ;
typedef void* krb5_error_code ;
typedef int * krb5_context ;
typedef scalar_t__ gss_ctx_id_t ;
typedef TYPE_2__* gss_buffer_set_t ;
typedef int gss_OID ;
struct TYPE_7__ {int count; TYPE_1__* elements; } ;
struct TYPE_6__ {int length; int value; } ;
typedef void* OM_uint32 ;


 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int * FUNC_0 (int,int) ;
 void* FUNC_1 (void**,scalar_t__,int const,TYPE_2__**) ;
 int FUNC_2 (void**,TYPE_2__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (int **) ;
 void* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int ) ;

__attribute__((used)) static OM_uint32
FUNC_9(OM_uint32 *VAR_6,
      gss_ctx_id_t VAR_7,
      const gss_OID VAR_8,
      krb5_keyblock **VAR_9)
{
    krb5_error_code VAR_10;
    gss_buffer_set_t VAR_11 = VAR_2;
    OM_uint32 VAR_12;
    krb5_context VAR_13 = ((void*)0);
    krb5_storage *VAR_14 = ((void*)0);

    if (VAR_7 == VAR_3) {
 VAR_10 = VAR_0;
 return VAR_5;
    }

    VAR_10 = FUNC_5(&VAR_13);
    if(VAR_10) {
 *VAR_6 = VAR_10;
 return VAR_5;
    }

    VAR_12 =
 FUNC_1 (VAR_6,
     VAR_7,
     VAR_8,
     &VAR_11);
    if (VAR_12)
 return VAR_12;

    if (VAR_11 == VAR_2 || VAR_11->count != 1) {
 FUNC_2(VAR_6, &VAR_11);
 *VAR_6 = VAR_0;
 return VAR_5;
    }

    VAR_14 = FUNC_8(VAR_11->elements[0].value,
          VAR_11->elements[0].length);
    if (VAR_14 == ((void*)0)) {
 VAR_10 = VAR_1;
 goto out;
    }

    *VAR_9 = FUNC_0(1, sizeof(**VAR_9));
    if (VAR_9 == ((void*)0)) {
 VAR_10 = VAR_1;
 goto out;
    }

    VAR_10 = FUNC_6(VAR_14, *VAR_9);

out:
    FUNC_2(VAR_6, &VAR_11);
    if (VAR_14)
 FUNC_7(VAR_14);
    if (VAR_10 && VAR_9) {
 FUNC_4(VAR_13, *VAR_9);
 *VAR_9 = ((void*)0);
    }
    if (VAR_13)
 FUNC_3(VAR_13);

    *VAR_6 = VAR_10;
    if (VAR_10)
 return VAR_5;

    return VAR_4;
}
