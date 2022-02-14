
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* buffer; size_t len; int attached; size_t min_len; size_t max_len; size_t alloc_len; size_t entropy; } ;
typedef TYPE_1__ RAND_POOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

RAND_POOL *FUNC_2(const unsigned char *VAR_2, size_t VAR_3,
                            size_t VAR_4)
{
    RAND_POOL *VAR_5 = FUNC_0(sizeof(*VAR_5));

    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return ((void*)0);
    }






    VAR_5->buffer = (unsigned char *) VAR_2;
    VAR_5->len = VAR_3;

    VAR_5->attached = 1;

    VAR_5->min_len = VAR_5->max_len = VAR_5->alloc_len = VAR_5->len;
    VAR_5->entropy = VAR_4;

    return VAR_5;
}
