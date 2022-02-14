
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t** dist_slot_prices; size_t dist_table_size; size_t** dist_prices; size_t const dist_special; scalar_t__ match_price_count; int * dist_slot; } ;
typedef TYPE_1__ lzma_lzma1_encoder ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (int ,int ,size_t) ;
 size_t FUNC_2 (size_t const,size_t const,size_t) ;
 scalar_t__ FUNC_3 (size_t) ;

__attribute__((used)) static void
FUNC_4(lzma_lzma1_encoder *VAR_6)
{
 for (uint32_t VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {

  uint32_t *const VAR_8
    = VAR_6->dist_slot_prices[VAR_7];


  for (uint32_t VAR_9 = 0;
    VAR_9 < VAR_6->dist_table_size; ++VAR_9)
   VAR_8[VAR_9] = FUNC_1(
     VAR_6->dist_slot[VAR_7],
     VAR_3, VAR_9);




  for (uint32_t VAR_10 = VAR_1;
    VAR_10 < VAR_6->dist_table_size;
    ++VAR_10)
   VAR_8[VAR_10] += FUNC_3(
     ((VAR_10 >> 1) - 1) - VAR_0);




  for (uint32_t VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11)
   VAR_6->dist_prices[VAR_7][VAR_11]
     = VAR_8[VAR_11];
 }




 for (uint32_t VAR_12 = VAR_2; VAR_12 < VAR_5; ++VAR_12) {
  const uint32_t VAR_13 = FUNC_0(VAR_12);
  const uint32_t VAR_14 = ((VAR_13 >> 1) - 1);
  const uint32_t VAR_15 = (2 | (VAR_13 & 1)) << VAR_14;
  const uint32_t VAR_16 = FUNC_2(
    VAR_6->dist_special + VAR_15 - VAR_13 - 1,
    VAR_14, VAR_12 - VAR_15);

  for (uint32_t VAR_17 = 0; VAR_17 < VAR_4;
    ++VAR_17)
   VAR_6->dist_prices[VAR_17][VAR_12]
     = VAR_16 + VAR_6->dist_slot_prices[
      VAR_17][VAR_13];
 }

 VAR_6->match_price_count = 0;
 return;
}
