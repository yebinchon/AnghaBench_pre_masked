
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef TYPE_1__* krb5_context ;
struct TYPE_5__ {int num_kt_types; int * kt_types; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_1, const krb5_context VAR_2)
{
    VAR_1->num_kt_types = 0;
    VAR_1->kt_types = ((void*)0);

    if (VAR_2->num_kt_types == 0)
 return 0;

    VAR_1->kt_types = FUNC_2(sizeof(VAR_1->kt_types[0]) * VAR_2->num_kt_types);
    if (VAR_1->kt_types == ((void*)0)) {
 FUNC_1(VAR_1, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }

    VAR_1->num_kt_types = VAR_2->num_kt_types;
    FUNC_3(VAR_1->kt_types, VAR_2->kt_types,
    sizeof(VAR_1->kt_types[0]) * VAR_2->num_kt_types);

    return 0;
}
