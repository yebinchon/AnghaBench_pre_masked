
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t** prices; } ;
typedef TYPE_1__ lzma_length_encoder ;


 size_t const VAR_0 ;

__attribute__((used)) static inline uint32_t
FUNC_0(const lzma_length_encoder *const VAR_1,
  const uint32_t VAR_2, const uint32_t VAR_3)
{


 return VAR_1->prices[VAR_3][VAR_2 - VAR_0];
}
