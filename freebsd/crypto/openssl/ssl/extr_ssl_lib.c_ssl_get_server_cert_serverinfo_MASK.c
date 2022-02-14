
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {unsigned char* serverinfo; size_t serverinfo_length; } ;
struct TYPE_8__ {TYPE_2__* s3; } ;
struct TYPE_6__ {TYPE_4__* cert; } ;
struct TYPE_7__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ CERT_PKEY ;



int FUNC_0(SSL *VAR_0, const unsigned char **VAR_1,
                                   size_t *VAR_2)
{
    CERT_PKEY *VAR_3 = VAR_0->s3->tmp.cert;
    *VAR_2 = 0;

    if (VAR_3 == ((void*)0) || VAR_3->serverinfo == ((void*)0))
        return 0;

    *VAR_1 = VAR_3->serverinfo;
    *VAR_2 = VAR_3->serverinfo_length;
    return 1;
}
