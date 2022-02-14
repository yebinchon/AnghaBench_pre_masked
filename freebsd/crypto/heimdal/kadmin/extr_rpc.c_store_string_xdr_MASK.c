
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
struct TYPE_4__ {scalar_t__ length; int data; } ;
typedef TYPE_1__ krb5_data ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,TYPE_1__) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(krb5_storage *VAR_0, const char *VAR_1)
{
    krb5_data VAR_2;
    if (VAR_1) {
 VAR_2.data = FUNC_1(VAR_1);
 VAR_2.length = FUNC_3(VAR_1) + 1;
    } else
 FUNC_0(&VAR_2);

    return FUNC_2(VAR_0, VAR_2);
}
