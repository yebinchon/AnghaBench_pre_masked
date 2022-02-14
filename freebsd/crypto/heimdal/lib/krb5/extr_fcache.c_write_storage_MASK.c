
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int krb5_storage ;
typedef int krb5_error_code ;
struct TYPE_4__ {scalar_t__ length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int,int ,scalar_t__) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_1, krb5_storage *VAR_2, int VAR_3)
{
    krb5_error_code VAR_4;
    krb5_data VAR_5;
    ssize_t VAR_6;

    VAR_4 = FUNC_3(VAR_2, &VAR_5);
    if (VAR_4) {
 FUNC_2(VAR_1, VAR_4, FUNC_0("malloc: out of memory", ""));
 return VAR_4;
    }
    VAR_6 = FUNC_4(VAR_3, VAR_5.data, VAR_5.length);
    VAR_4 = (VAR_6 != (ssize_t)VAR_5.length);
    FUNC_1(&VAR_5);
    if (VAR_4) {
 VAR_4 = VAR_0;
 FUNC_2(VAR_1, VAR_4,
          FUNC_0("Failed to write FILE credential data", ""));
 return VAR_4;
    }
    return 0;
}
