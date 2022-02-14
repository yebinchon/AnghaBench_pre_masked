
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int gss_cred_id_t ;
typedef TYPE_2__* gss_buffer_set_t ;
struct TYPE_7__ {int count; TYPE_1__* elements; } ;
struct TYPE_6__ {scalar_t__ value; scalar_t__ length; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char**,char*,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int ,int ,TYPE_2__**) ;
 int FUNC_3 (int*,TYPE_2__**) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

OM_uint32
FUNC_9(OM_uint32 *VAR_5,
       gss_cred_id_t VAR_6,
       krb5_ccache VAR_7)
{
    gss_buffer_set_t VAR_8 = VAR_2;
    krb5_context VAR_9;
    krb5_error_code VAR_10;
    krb5_ccache VAR_11;
    OM_uint32 VAR_12;
    char *VAR_13;

    VAR_12 = FUNC_2(VAR_5,
      VAR_6,
      VAR_3,
      &VAR_8);
    if (VAR_12)
 return VAR_12;

    if (VAR_8 == VAR_2 || VAR_8->count != 1) {
 FUNC_3(VAR_5, &VAR_8);
 *VAR_5 = VAR_0;
 return VAR_4;
    }

    VAR_10 = FUNC_8(&VAR_9);
    if (VAR_10) {
 *VAR_5 = VAR_10;
 FUNC_3(VAR_5, &VAR_8);
 return VAR_4;
    }

    VAR_10 = FUNC_0(&VAR_13, "%.*s", (int)VAR_8->elements[0].length,
      (char *)VAR_8->elements[0].value);
    FUNC_3(VAR_5, &VAR_8);
    if (VAR_10 == -1) {
 *VAR_5 = VAR_1;
 return VAR_4;
    }

    VAR_10 = FUNC_6(VAR_9, VAR_13, &VAR_11);
    FUNC_1(VAR_13);
    if (VAR_10) {
 *VAR_5 = VAR_10;
 return VAR_4;
    }

    VAR_10 = FUNC_5(VAR_9, VAR_11, VAR_7);
    FUNC_4(VAR_9, VAR_11);
    FUNC_7(VAR_9);
    if (VAR_10) {
 *VAR_5 = VAR_10;
 return VAR_4;
    }

    return VAR_12;
}
