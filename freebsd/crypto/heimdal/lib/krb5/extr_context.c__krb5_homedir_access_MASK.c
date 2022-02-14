
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* krb5_context ;
typedef int krb5_boolean ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;

krb5_boolean
FUNC_3(krb5_context VAR_4)
{
    krb5_boolean VAR_5;







    if (VAR_4 && (VAR_4->flags & VAR_1) == 0)
 return VAR_0;

    FUNC_0(&VAR_3);
    VAR_5 = VAR_2;
    FUNC_1(&VAR_3);
    return VAR_5;
}
