
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rmm_block_t {scalar_t__ next; } ;
typedef struct rmm_block_t rmm_block_t ;
struct TYPE_3__ {scalar_t__ base; } ;
typedef TYPE_1__ apr_rmm_t ;
typedef scalar_t__ apr_rmm_off_t ;



__attribute__((used)) static apr_rmm_off_t FUNC_0(apr_rmm_t *VAR_0, apr_rmm_off_t VAR_1,
                                          apr_rmm_off_t VAR_2, int VAR_3)
{
    apr_rmm_off_t VAR_4 = 0;

    while (VAR_1) {
        struct rmm_block_t *VAR_5 = (rmm_block_t*)((char*)VAR_0->base + VAR_1);

        if (VAR_2 == VAR_1)
            return VAR_1;


        if (VAR_2 < VAR_1)
            return VAR_3 ? VAR_4 : 0;

        VAR_4 = VAR_1;
        VAR_1 = VAR_5->next;
    }
    return VAR_3 ? VAR_4 : 0;
}
