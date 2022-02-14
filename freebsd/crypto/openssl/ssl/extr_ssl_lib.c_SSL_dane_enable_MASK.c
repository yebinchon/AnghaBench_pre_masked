
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * hostname; } ;
struct TYPE_11__ {int mdpth; int pdpth; int * trecs; TYPE_2__* dctx; } ;
struct TYPE_12__ {TYPE_3__* ctx; int param; TYPE_1__ ext; TYPE_4__ dane; } ;
struct TYPE_9__ {scalar_t__ mdmax; } ;
struct TYPE_10__ {TYPE_2__ dane; } ;
typedef TYPE_4__ SSL_DANE ;
typedef TYPE_5__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char const*,int ) ;
 int * FUNC_3 () ;

int FUNC_4(SSL *VAR_5, const char *VAR_6)
{
    SSL_DANE *VAR_7 = &VAR_5->dane;

    if (VAR_5->ctx->dane.mdmax == 0) {
        FUNC_1(VAR_1, VAR_2);
        return 0;
    }
    if (VAR_7->trecs != ((void*)0)) {
        FUNC_1(VAR_1, VAR_3);
        return 0;
    }






    if (VAR_5->ext.hostname == ((void*)0)) {
        if (!FUNC_0(VAR_5, VAR_6)) {
            FUNC_1(VAR_1, VAR_4);
            return -1;
        }
    }


    if (!FUNC_2(VAR_5->param, VAR_6, 0)) {
        FUNC_1(VAR_1, VAR_4);
        return -1;
    }

    VAR_7->mdpth = -1;
    VAR_7->pdpth = -1;
    VAR_7->dctx = &VAR_5->ctx->dane;
    VAR_7->trecs = FUNC_3();

    if (VAR_7->trecs == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return -1;
    }
    return 1;
}
