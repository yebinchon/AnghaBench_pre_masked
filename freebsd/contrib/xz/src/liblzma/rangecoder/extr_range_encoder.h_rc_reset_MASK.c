
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cache_size; scalar_t__ pos; scalar_t__ count; scalar_t__ cache; int range; scalar_t__ low; } ;
typedef TYPE_1__ lzma_range_encoder ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(lzma_range_encoder *VAR_1)
{
 VAR_1->low = 0;
 VAR_1->cache_size = 1;
 VAR_1->range = VAR_0;
 VAR_1->cache = 0;
 VAR_1->count = 0;
 VAR_1->pos = 0;
}
