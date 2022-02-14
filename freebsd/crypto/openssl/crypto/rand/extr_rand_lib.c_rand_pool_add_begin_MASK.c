
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t max_len; size_t len; unsigned char* buffer; } ;
typedef TYPE_1__ RAND_POOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,size_t) ;

unsigned char *FUNC_2(RAND_POOL *VAR_3, size_t VAR_4)
{
    if (VAR_4 == 0)
        return ((void*)0);

    if (VAR_4 > VAR_3->max_len - VAR_3->len) {
        FUNC_0(VAR_1, VAR_2);
        return ((void*)0);
    }

    if (VAR_3->buffer == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return ((void*)0);
    }
    if (!FUNC_1(VAR_3, VAR_4))
        return ((void*)0);

    return VAR_3->buffer + VAR_3->len;
}
