
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fman_ext_pools {int num_pools_used; TYPE_1__* ext_buf_pool; } ;
struct TYPE_2__ {int id; } ;



__attribute__((used)) static inline uint32_t FUNC_0(int VAR_0, bool *VAR_1,
        struct fman_ext_pools *VAR_2, uint32_t VAR_3)
{
    int VAR_4, VAR_5;
    uint32_t VAR_6 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        if (VAR_1[VAR_4])
            for (VAR_5 = 0; VAR_5 < VAR_2->num_pools_used; VAR_5++)
                if (VAR_4 == VAR_2->ext_buf_pool[VAR_5].id) {
                    VAR_6 |= VAR_3 >> VAR_5;
                    break;
                }
    return VAR_6;
}
