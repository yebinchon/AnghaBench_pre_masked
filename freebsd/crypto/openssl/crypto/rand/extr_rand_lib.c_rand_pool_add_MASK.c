
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t max_len; size_t len; unsigned char const* buffer; scalar_t__ alloc_len; size_t entropy; } ;
typedef TYPE_1__ RAND_POOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_1__*,size_t) ;

int FUNC_3(RAND_POOL *VAR_3,
                  const unsigned char *VAR_4, size_t VAR_5, size_t VAR_6)
{
    if (VAR_5 > VAR_3->max_len - VAR_3->len) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }

    if (VAR_3->buffer == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return 0;
    }

    if (VAR_5 > 0) {
        if (VAR_3->alloc_len > VAR_3->len && VAR_3->buffer + VAR_3->len == VAR_4) {
            FUNC_0(VAR_1, VAR_0);
            return 0;
        }







        if (!FUNC_2(VAR_3, VAR_5))
            return 0;
        FUNC_1(VAR_3->buffer + VAR_3->len, VAR_4, VAR_5);
        VAR_3->len += VAR_5;
        VAR_3->entropy += VAR_6;
    }

    return 1;
}
