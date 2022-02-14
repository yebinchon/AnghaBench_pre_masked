
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t alloc_len; size_t len; int max_len; unsigned char* buffer; scalar_t__ secure; scalar_t__ attached; } ;
typedef TYPE_1__ RAND_POOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,size_t) ;
 unsigned char* FUNC_2 (size_t) ;
 unsigned char* FUNC_3 (size_t) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_6(RAND_POOL *VAR_3, size_t VAR_4)
{
    if (VAR_4 > VAR_3->alloc_len - VAR_3->len) {
        unsigned char *VAR_5;
        const size_t VAR_6 = VAR_3->max_len / 2;
        size_t VAR_7 = VAR_3->alloc_len;

        if (VAR_3->attached || VAR_4 > VAR_3->max_len - VAR_3->len) {
            FUNC_4(VAR_2, VAR_0);
            return 0;
        }

        do
            VAR_7 = VAR_7 < VAR_6 ? VAR_7 * 2 : VAR_3->max_len;
        while (VAR_4 > VAR_7 - VAR_3->len);

        if (VAR_3->secure)
            VAR_5 = FUNC_2(VAR_7);
        else
            VAR_5 = FUNC_3(VAR_7);
        if (VAR_5 == ((void*)0)) {
            FUNC_4(VAR_2, VAR_1);
            return 0;
        }
        FUNC_5(VAR_5, VAR_3->buffer, VAR_3->len);
        if (VAR_3->secure)
            FUNC_1(VAR_3->buffer, VAR_3->alloc_len);
        else
            FUNC_0(VAR_3->buffer, VAR_3->alloc_len);
        VAR_3->buffer = VAR_5;
        VAR_3->alloc_len = VAR_7;
    }
    return 1;
}
