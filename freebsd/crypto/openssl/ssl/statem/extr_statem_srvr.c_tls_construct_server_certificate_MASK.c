
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_10__ {TYPE_2__* s3; } ;
struct TYPE_8__ {int * cert; } ;
struct TYPE_9__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef int CERT_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*,int *,int *) ;

int FUNC_4(SSL *VAR_3, WPACKET *VAR_4)
{
    CERT_PKEY *VAR_5 = VAR_3->s3->tmp.cert;

    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_3, VAR_1,
                 VAR_2, VAR_0);
        return 0;
    }





    if (FUNC_0(VAR_3) && !FUNC_2(VAR_4, 0)) {
        FUNC_1(VAR_3, VAR_1,
                 VAR_2, VAR_0);
        return 0;
    }
    if (!FUNC_3(VAR_3, VAR_4, VAR_5)) {

        return 0;
    }

    return 1;
}
