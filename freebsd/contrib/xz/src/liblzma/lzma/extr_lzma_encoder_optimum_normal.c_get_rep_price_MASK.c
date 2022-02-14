
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int lzma_lzma_state ;
struct TYPE_4__ {int rep_len_encoder; } ;
typedef TYPE_1__ lzma_lzma1_encoder ;


 scalar_t__ FUNC_0 (int *,scalar_t__ const,scalar_t__ const) ;
 scalar_t__ FUNC_1 (TYPE_1__ const* const,scalar_t__ const,int const,scalar_t__ const) ;

__attribute__((used)) static inline uint32_t
FUNC_2(const lzma_lzma1_encoder *const VAR_0, const uint32_t VAR_1,
  const uint32_t VAR_2, const lzma_lzma_state VAR_3,
  const uint32_t VAR_4)
{
 return FUNC_0(&VAR_0->rep_len_encoder, VAR_2, VAR_4)
  + FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4);
}
