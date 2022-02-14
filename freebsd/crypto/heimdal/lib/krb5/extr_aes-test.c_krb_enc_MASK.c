
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_error_code ;
struct TYPE_7__ {scalar_t__ length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,unsigned int,int ,scalar_t__,TYPE_1__*) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(krb5_context VAR_1,
 krb5_crypto VAR_2,
 unsigned VAR_3,
 krb5_data *VAR_4,
 krb5_data *VAR_5)
{
    krb5_data VAR_6;
    krb5_error_code VAR_7;

    FUNC_1(&VAR_6);

    VAR_7 = FUNC_2(VAR_1,
         VAR_2,
         VAR_3,
         VAR_4->data,
         VAR_4->length,
         &VAR_6);

    if (VAR_7) {
 FUNC_3(VAR_1, VAR_7, "krb5_decrypt");
 return VAR_7;
    }

    if (VAR_6.length != VAR_5->length ||
 FUNC_5(VAR_6.data, VAR_5->data, VAR_6.length) != 0) {
 FUNC_4(VAR_1, "clear text not same");
 return VAR_0;
    }

    FUNC_0(&VAR_6);

    return 0;
}
