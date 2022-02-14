
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bio_bio_st {scalar_t__ offset; scalar_t__ len; int * buf; TYPE_1__* peer; } ;
struct TYPE_3__ {scalar_t__ init; struct bio_bio_st* ptr; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(BIO *VAR_0)
{
    struct bio_bio_st *VAR_1 = VAR_0->ptr;

    if (VAR_1 != ((void*)0)) {
        BIO *VAR_2 = VAR_1->peer;

        if (VAR_2 != ((void*)0)) {
            struct bio_bio_st *VAR_3 = VAR_2->ptr;

            FUNC_0(VAR_3 != ((void*)0));
            FUNC_0(VAR_3->peer == VAR_0);

            VAR_3->peer = ((void*)0);
            VAR_2->init = 0;
            FUNC_0(VAR_3->buf != ((void*)0));
            VAR_3->len = 0;
            VAR_3->offset = 0;

            VAR_1->peer = ((void*)0);
            VAR_0->init = 0;
            FUNC_0(VAR_1->buf != ((void*)0));
            VAR_1->len = 0;
            VAR_1->offset = 0;
        }
    }
}
