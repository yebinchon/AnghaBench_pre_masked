
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rmm_block_t {scalar_t__ size; scalar_t__ next; scalar_t__ prev; } ;
typedef struct rmm_block_t rmm_block_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_5__ {TYPE_1__* base; } ;
typedef TYPE_2__ apr_rmm_t ;
typedef scalar_t__ apr_rmm_off_t ;
struct TYPE_4__ {scalar_t__ firstfree; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static apr_rmm_off_t FUNC_0(apr_rmm_t *VAR_1, apr_size_t VAR_2)
{
    apr_rmm_off_t VAR_3 = VAR_1->base->firstfree;
    apr_rmm_off_t VAR_4 = 0;
    apr_rmm_off_t VAR_5 = 0;

    while (VAR_3) {
        struct rmm_block_t *VAR_6 = (rmm_block_t*)((char*)VAR_1->base + VAR_3);

        if (VAR_6->size == VAR_2)
            return VAR_3;

        if (VAR_6->size >= VAR_2) {




            if (!VAR_5 || (VAR_6->size < VAR_5)) {
                VAR_5 = VAR_6->size;
                VAR_4 = VAR_3;
            }
        }

        VAR_3 = VAR_6->next;
    }

    if (VAR_5 > VAR_0 + VAR_2) {
        struct rmm_block_t *VAR_7 = (rmm_block_t*)((char*)VAR_1->base + VAR_4);
        struct rmm_block_t *VAR_8 = (rmm_block_t*)((char*)VAR_1->base + VAR_4 + VAR_2);

        VAR_8->size = VAR_7->size - VAR_2;
        VAR_8->next = VAR_7->next;
        VAR_8->prev = VAR_4;

        VAR_7->size = VAR_2;
        VAR_7->next = VAR_4 + VAR_2;

        if (VAR_8->next) {
            VAR_7 = (rmm_block_t*)((char*)VAR_1->base + VAR_8->next);
            VAR_7->prev = VAR_4 + VAR_2;
        }
    }

    return VAR_4;
}
