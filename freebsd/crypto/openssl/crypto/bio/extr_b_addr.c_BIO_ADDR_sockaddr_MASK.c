
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_3__ {struct sockaddr const sa; } ;
typedef TYPE_1__ BIO_ADDR ;



const struct sockaddr *FUNC_0(const BIO_ADDR *VAR_0)
{
    return &(VAR_0->sa);
}
