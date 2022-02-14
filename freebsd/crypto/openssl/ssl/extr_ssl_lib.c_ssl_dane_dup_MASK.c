
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int dlen; int data; int mtype; int selector; int usage; } ;
typedef TYPE_2__ danetls_record ;
struct TYPE_13__ {int * trecs; int * dctx; int flags; } ;
struct TYPE_12__ {TYPE_7__ dane; TYPE_1__* ctx; } ;
struct TYPE_10__ {int dane; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_7__*) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(SSL *VAR_2, SSL *VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (!FUNC_0(&VAR_3->dane))
        return 1;

    VAR_4 = FUNC_5(VAR_3->dane.trecs);
    FUNC_3(&VAR_2->dane);
    VAR_2->dane.flags = VAR_3->dane.flags;
    VAR_2->dane.dctx = &VAR_2->ctx->dane;
    VAR_2->dane.trecs = FUNC_4(((void*)0), VAR_4);

    if (VAR_2->dane.trecs == ((void*)0)) {
        FUNC_2(VAR_1, VAR_0);
        return 0;
    }

    for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
        danetls_record *VAR_6 = FUNC_6(VAR_3->dane.trecs, VAR_5);

        if (FUNC_1(VAR_2, VAR_6->usage, VAR_6->selector, VAR_6->mtype,
                              VAR_6->data, VAR_6->dlen) <= 0)
            return 0;
    }
    return 1;
}
