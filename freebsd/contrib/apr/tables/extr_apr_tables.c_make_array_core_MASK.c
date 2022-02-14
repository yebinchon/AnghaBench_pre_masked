
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_pool_t ;
struct TYPE_3__ {int elt_size; int nalloc; scalar_t__ nelts; int * pool; int elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(apr_array_header_t *VAR_0, apr_pool_t *VAR_1,
       int VAR_2, int VAR_3, int VAR_4)
{




    if (VAR_2 < 1) {
        VAR_2 = 1;
    }

    if (VAR_4) {
        VAR_0->elts = FUNC_1(VAR_1, VAR_2 * VAR_3);
    }
    else {
        VAR_0->elts = FUNC_0(VAR_1, VAR_2 * VAR_3);
    }

    VAR_0->pool = VAR_1;
    VAR_0->elt_size = VAR_3;
    VAR_0->nelts = 0;
    VAR_0->nalloc = VAR_2;
}
