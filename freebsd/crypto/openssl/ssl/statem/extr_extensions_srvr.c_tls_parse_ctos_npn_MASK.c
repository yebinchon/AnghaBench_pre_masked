
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_6__ {TYPE_1__* s3; } ;
struct TYPE_5__ {int npn_seen; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

int FUNC_1(SSL *VAR_0, PACKET *VAR_1, unsigned int VAR_2, X509 *VAR_3,
                       size_t VAR_4)
{




    if (FUNC_0(VAR_0))
        VAR_0->s3->npn_seen = 1;

    return 1;
}
