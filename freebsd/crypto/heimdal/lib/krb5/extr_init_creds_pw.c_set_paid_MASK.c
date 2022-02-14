
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; int * data; } ;
struct TYPE_4__ {TYPE_1__ saltvalue; int salttype; } ;
struct pa_info_data {int * s2kparams; TYPE_2__ salt; int etype; } ;
typedef int krb5_salttype ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
typedef int krb5_data ;
typedef int krb5_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int **) ;
 int FUNC_2 (int ,TYPE_2__) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,void*,size_t) ;

__attribute__((used)) static krb5_error_code
FUNC_5(struct pa_info_data *VAR_1, krb5_context VAR_2,
  krb5_enctype VAR_3,
  krb5_salttype VAR_4, void *VAR_5, size_t VAR_6,
  krb5_data *VAR_7)
{
    VAR_1->etype = VAR_3;
    VAR_1->salt.salttype = VAR_4;
    VAR_1->salt.saltvalue.data = FUNC_3(VAR_6 + 1);
    if (VAR_1->salt.saltvalue.data == ((void*)0)) {
 FUNC_0(VAR_2);
 return VAR_0;
    }
    FUNC_4(VAR_1->salt.saltvalue.data, VAR_5, VAR_6);
    ((char *)VAR_1->salt.saltvalue.data)[VAR_6] = '\0';
    VAR_1->salt.saltvalue.length = VAR_6;
    if (VAR_7) {
 krb5_error_code VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_7, &VAR_1->s2kparams);
 if (VAR_8) {
     FUNC_0(VAR_2);
     FUNC_2(VAR_2, VAR_1->salt);
     return VAR_8;
 }
    } else
 VAR_1->s2kparams = ((void*)0);

    return 0;
}
