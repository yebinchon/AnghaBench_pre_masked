
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct bio_bio_st {char* buf; size_t len; size_t size; size_t offset; scalar_t__ closed; scalar_t__ request; int * peer; } ;
typedef int ossl_ssize_t ;
struct TYPE_5__ {struct bio_bio_st* ptr; int init; } ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static ossl_ssize_t FUNC_4(BIO *VAR_2, char **VAR_3)
{
    struct bio_bio_st *VAR_4;
    size_t VAR_5;
    size_t VAR_6;

    FUNC_0(VAR_2);

    if (!VAR_2->init)
        return 0;

    VAR_4 = VAR_2->ptr;
    FUNC_3(VAR_4 != ((void*)0));
    FUNC_3(VAR_4->peer != ((void*)0));
    FUNC_3(VAR_4->buf != ((void*)0));

    VAR_4->request = 0;
    if (VAR_4->closed) {
        FUNC_2(VAR_0, VAR_1);
        return -1;
    }

    FUNC_3(VAR_4->len <= VAR_4->size);

    if (VAR_4->len == VAR_4->size) {
        FUNC_1(VAR_2);
        return -1;
    }

    VAR_5 = VAR_4->size - VAR_4->len;
    VAR_6 = VAR_4->offset + VAR_4->len;
    if (VAR_6 >= VAR_4->size)
        VAR_6 -= VAR_4->size;
    if (VAR_6 + VAR_5 > VAR_4->size)





        VAR_5 = VAR_4->size - VAR_6;

    if (VAR_3 != ((void*)0))
        *VAR_3 = VAR_4->buf + VAR_6;
    FUNC_3(VAR_6 + VAR_5 <= VAR_4->size);

    return VAR_5;
}
