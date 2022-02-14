
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int const pos; int const size; int * buf; } ;
typedef TYPE_1__ lzma_dict ;



__attribute__((used)) static inline uint8_t
FUNC_0(const lzma_dict *const VAR_0, const uint32_t VAR_1)
{
 return VAR_0->buf[VAR_0->pos - VAR_1 - 1
   + (VAR_1 < VAR_0->pos ? 0 : VAR_0->size)];
}
