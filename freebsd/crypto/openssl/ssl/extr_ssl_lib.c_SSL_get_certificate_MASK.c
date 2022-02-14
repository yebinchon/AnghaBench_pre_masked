
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_7__ {TYPE_2__* cert; } ;
struct TYPE_6__ {TYPE_1__* key; } ;
struct TYPE_5__ {int * x509; } ;
typedef TYPE_3__ SSL ;



X509 *FUNC_0(const SSL *VAR_0)
{
    if (VAR_0->cert != ((void*)0))
        return VAR_0->cert->key->x509;
    else
        return ((void*)0);
}
