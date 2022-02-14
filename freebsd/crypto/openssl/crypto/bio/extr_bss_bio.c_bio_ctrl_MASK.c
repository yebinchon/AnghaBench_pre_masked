
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct bio_bio_st {size_t size; int closed; scalar_t__ len; TYPE_1__* peer; int * buf; int offset; scalar_t__ request; } ;
struct TYPE_12__ {long shutdown; struct bio_bio_st* ptr; } ;
struct TYPE_11__ {struct bio_bio_st* ptr; } ;
typedef TYPE_2__ BIO ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,void*,size_t) ;
 scalar_t__ FUNC_6 (TYPE_2__*,void*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,void*,size_t) ;
 scalar_t__ FUNC_8 (TYPE_2__*,void*) ;

__attribute__((used)) static long FUNC_9(BIO *VAR_3, int VAR_4, long VAR_5, void *VAR_6)
{
    long VAR_7;
    struct bio_bio_st *VAR_8 = VAR_3->ptr;

    FUNC_2(VAR_8 != ((void*)0));

    switch (VAR_4) {


    case 129:
        if (VAR_8->peer) {
            FUNC_0(VAR_0, VAR_2);
            VAR_7 = 0;
        } else if (VAR_5 == 0) {
            FUNC_0(VAR_0, VAR_1);
            VAR_7 = 0;
        } else {
            size_t VAR_9 = VAR_5;

            if (VAR_8->size != VAR_9) {
                FUNC_1(VAR_8->buf);
                VAR_8->buf = ((void*)0);
                VAR_8->size = VAR_9;
            }
            VAR_7 = 1;
        }
        break;

    case 137:
        VAR_7 = (long)VAR_8->size;
        break;

    case 135:
        {
            BIO *VAR_10 = VAR_6;

            if (FUNC_4(VAR_3, VAR_10))
                VAR_7 = 1;
            else
                VAR_7 = 0;
        }
        break;

    case 139:




        FUNC_3(VAR_3);
        VAR_7 = 1;
        break;

    case 136:




        if (VAR_8->peer == ((void*)0) || VAR_8->closed)
            VAR_7 = 0;
        else
            VAR_7 = (long)VAR_8->size - VAR_8->len;
        break;

    case 138:





        VAR_7 = (long)VAR_8->request;
        break;

    case 130:





        VAR_8->request = 0;
        VAR_7 = 1;
        break;

    case 128:

        VAR_8->closed = 1;
        VAR_7 = 1;
        break;

    case 133:

        VAR_7 = (long)FUNC_6(VAR_3, VAR_6);
        break;

    case 134:

        VAR_7 = (long)FUNC_5(VAR_3, VAR_6, (size_t)VAR_5);
        break;

    case 131:

        VAR_7 = (long)FUNC_8(VAR_3, VAR_6);
        break;

    case 132:

        VAR_7 = (long)FUNC_7(VAR_3, VAR_6, (size_t)VAR_5);
        break;



    case 142:
        if (VAR_8->buf != ((void*)0)) {
            VAR_8->len = 0;
            VAR_8->offset = 0;
        }
        VAR_7 = 0;
        break;

    case 144:
        VAR_7 = VAR_3->shutdown;
        break;

    case 141:
        VAR_3->shutdown = (int)VAR_5;
        VAR_7 = 1;
        break;

    case 143:
        if (VAR_8->peer != ((void*)0)) {
            struct bio_bio_st *VAR_11 = VAR_8->peer->ptr;

            VAR_7 = (long)VAR_11->len;
        } else
            VAR_7 = 0;
        break;

    case 140:
        if (VAR_8->buf != ((void*)0))
            VAR_7 = (long)VAR_8->len;
        else
            VAR_7 = 0;
        break;

    case 147:

        {
            BIO *VAR_12 = VAR_6;
            struct bio_bio_st *VAR_13;

            FUNC_2(VAR_12 != ((void*)0));
            VAR_13 = VAR_12->ptr;
            FUNC_2(VAR_13 != ((void*)0));

            FUNC_2(VAR_13->buf == ((void*)0));

            VAR_13->size = VAR_8->size;
        }

        VAR_7 = 1;
        break;

    case 145:
        VAR_7 = 1;
        break;

    case 146:
        if (VAR_8->peer != ((void*)0)) {
            struct bio_bio_st *VAR_14 = VAR_8->peer->ptr;

            if (VAR_14->len == 0 && VAR_14->closed)
                VAR_7 = 1;
            else
                VAR_7 = 0;
        } else {
            VAR_7 = 1;
        }
        break;

    default:
        VAR_7 = 0;
    }
    return VAR_7;
}
