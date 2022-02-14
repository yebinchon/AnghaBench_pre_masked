
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int algorithm_mac; } ;
typedef TYPE_1__ SSL_CIPHER ;


 int VAR_0 ;

int FUNC_0(const SSL_CIPHER *VAR_1)
{
    return (VAR_1->algorithm_mac & VAR_0) ? 1 : 0;
}
