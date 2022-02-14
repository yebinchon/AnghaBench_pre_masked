
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t const size; scalar_t__ checksumFlag; } ;
typedef TYPE_1__ ZSTD_frameLog ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;

__attribute__((used)) static inline size_t FUNC_0(const ZSTD_frameLog* VAR_2)
{
    size_t const VAR_3 = 8 + (VAR_2->checksumFlag?4:0);
    size_t const VAR_4 = VAR_0 +
                                VAR_3 * VAR_2->size +
                                VAR_1;

    return VAR_4;
}
