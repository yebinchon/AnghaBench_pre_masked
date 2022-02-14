
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_4__ {size_t length; int data; } ;
typedef TYPE_1__ krb5_data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,size_t) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_storage *VAR_2, krb5_data *VAR_3)
{
    off_t VAR_4;
    ssize_t VAR_5;

    VAR_4 = FUNC_4(VAR_2, 0, VAR_0);

    FUNC_0(FUNC_2(VAR_3, VAR_4));
    FUNC_1((size_t)VAR_4 == VAR_3->length);
    FUNC_4(VAR_2, 0, VAR_1);
    VAR_5 = FUNC_3(VAR_2, VAR_3->data, VAR_3->length);
    FUNC_1(VAR_5 == VAR_4);
    FUNC_1(VAR_4 == FUNC_4(VAR_2, 0, VAR_0));

    return 0;
}
