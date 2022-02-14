
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_7__ {TYPE_2__* session; int hit; TYPE_1__* s3; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(SSL *VAR_2, PACKET *VAR_3, unsigned int VAR_4, X509 *VAR_5,
                       size_t VAR_6)
{
    VAR_2->s3->flags |= VAR_1;
    if (!VAR_2->hit)
        VAR_2->session->flags |= VAR_0;

    return 1;
}
