
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_4__ {int length; } ;
typedef TYPE_1__ krb5_data ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,size_t) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_storage *VAR_1, krb5_data *VAR_2)
{
    krb5_error_code VAR_3;
    VAR_3 = FUNC_0(VAR_1, VAR_2);
    if (VAR_3)
 return VAR_3;

    if ((VAR_2->length % 4) != 0) {
 char VAR_4[4];
 size_t VAR_5;

 VAR_5 = 4 - (VAR_2->length % 4);
 if (VAR_5 != 4) {
     VAR_3 = FUNC_2(VAR_1, VAR_4, VAR_5);
     if((size_t)VAR_3 != VAR_5)
  return (VAR_3 < 0)? VAR_0 : FUNC_1(VAR_1);
 }
    }
    return 0;
}
