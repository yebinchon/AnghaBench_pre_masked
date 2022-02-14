
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t lzma_lzma_state ;
struct TYPE_3__ {int ** is_rep0_long; int * is_rep0; } ;
typedef TYPE_1__ lzma_lzma1_encoder ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline uint32_t
FUNC_1(const lzma_lzma1_encoder *const VAR_0,
  const lzma_lzma_state VAR_1, const uint32_t VAR_2)
{
 return FUNC_0(VAR_0->is_rep0[VAR_1])
  + FUNC_0(VAR_0->is_rep0_long[VAR_1][VAR_2]);
}
