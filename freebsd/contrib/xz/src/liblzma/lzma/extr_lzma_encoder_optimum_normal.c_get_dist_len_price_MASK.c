
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t** dist_prices; size_t** dist_slot_prices; size_t* align_prices; int match_len_encoder; } ;
typedef TYPE_1__ lzma_lzma1_encoder ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 size_t FUNC_0 (size_t const) ;
 size_t FUNC_1 (size_t const) ;
 size_t FUNC_2 (int *,size_t const,size_t const) ;

__attribute__((used)) static inline uint32_t
FUNC_3(const lzma_lzma1_encoder *const VAR_2, const uint32_t VAR_3,
  const uint32_t VAR_4, const uint32_t VAR_5)
{
 const uint32_t VAR_6 = FUNC_1(VAR_4);
 uint32_t VAR_7;

 if (VAR_3 < VAR_1) {
  VAR_7 = VAR_2->dist_prices[VAR_6][VAR_3];
 } else {
  const uint32_t VAR_8 = FUNC_0(VAR_3);
  VAR_7 = VAR_2->dist_slot_prices[VAR_6][VAR_8]
    + VAR_2->align_prices[VAR_3 & VAR_0];
 }

 VAR_7 += FUNC_2(&VAR_2->match_len_encoder, VAR_4, VAR_5);

 return VAR_7;
}
