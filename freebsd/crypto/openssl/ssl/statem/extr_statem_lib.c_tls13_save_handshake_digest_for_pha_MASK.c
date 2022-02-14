
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* s3; int * pha_dgst; } ;
struct TYPE_6__ {int handshake_dgst; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;

int FUNC_4(SSL *VAR_3)
{
    if (VAR_3->pha_dgst == ((void*)0)) {
        if (!FUNC_3(VAR_3, 1))

            return 0;

        VAR_3->pha_dgst = FUNC_1();
        if (VAR_3->pha_dgst == ((void*)0)) {
            FUNC_2(VAR_3, VAR_1,
                     VAR_2,
                     VAR_0);
            return 0;
        }
        if (!FUNC_0(VAR_3->pha_dgst,
                                VAR_3->s3->handshake_dgst)) {
            FUNC_2(VAR_3, VAR_1,
                     VAR_2,
                     VAR_0);
            return 0;
        }
    }
    return 1;
}
