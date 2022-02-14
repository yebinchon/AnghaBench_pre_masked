
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int low; scalar_t__ cache_size; int cache; } ;
typedef TYPE_1__ lzma_range_encoder ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(lzma_range_encoder *VAR_1,
  uint8_t *VAR_2, size_t *VAR_3, size_t VAR_4)
{
 if ((uint32_t)(VAR_1->low) < (uint32_t)(0xFF000000)
   || (uint32_t)(VAR_1->low >> 32) != 0) {
  do {
   if (*VAR_3 == VAR_4)
    return 1;

   VAR_2[*VAR_3] = VAR_1->cache + (uint8_t)(VAR_1->low >> 32);
   ++*VAR_3;
   VAR_1->cache = 0xFF;

  } while (--VAR_1->cache_size != 0);

  VAR_1->cache = (VAR_1->low >> 24) & 0xFF;
 }

 ++VAR_1->cache_size;
 VAR_1->low = (VAR_1->low & 0x00FFFFFF) << VAR_0;

 return 0;
}
