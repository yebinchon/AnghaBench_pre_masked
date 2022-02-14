
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int amask; } ;
typedef TYPE_1__ SSL_CERT_LOOKUP ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (size_t) ;

int FUNC_1(size_t VAR_1)
{
    const SSL_CERT_LOOKUP *VAR_2 = FUNC_0(VAR_1);

    if (VAR_2 == ((void*)0) || (VAR_2->amask & VAR_0) != 0)
        return 1;
    return 0;
}
