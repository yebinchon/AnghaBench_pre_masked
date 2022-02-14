
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t l_index; size_t max_l_index; int * l; } ;
typedef int OCB_BLOCK ;
typedef TYPE_1__ OCB128_CONTEXT ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static OCB_BLOCK *FUNC_2(OCB128_CONTEXT *VAR_0, size_t VAR_1)
{
    size_t VAR_2 = VAR_0->l_index;

    if (VAR_1 <= VAR_2) {
        return VAR_0->l + VAR_1;
    }


    if (VAR_1 >= VAR_0->max_l_index) {
        void *VAR_3;
        VAR_0->max_l_index += (VAR_1 - VAR_0->max_l_index + 4) & ~3;
        VAR_3 = FUNC_0(VAR_0->l, VAR_0->max_l_index * sizeof(OCB_BLOCK));
        if (VAR_3 == ((void*)0))
            return ((void*)0);
        VAR_0->l = VAR_3;
    }
    while (VAR_2 < VAR_1) {
        FUNC_1(VAR_0->l + VAR_2, VAR_0->l + VAR_2 + 1);
        VAR_2++;
    }
    VAR_0->l_index = VAR_2;

    return VAR_0->l + VAR_1;
}
