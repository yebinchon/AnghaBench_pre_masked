
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(bus_dma_segment_t *VAR_2,
    unsigned int VAR_3,
    uint64_t *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 uint64_t VAR_7 = 0;
 uint64_t VAR_8 = 0;
 boolean_t VAR_9 = VAR_0;
 boolean_t VAR_10 = VAR_1;

 if (VAR_3 < 2){
  return -1;
 }

 *VAR_4 = 0;

 VAR_7 = FUNC_1(VAR_2[0].ds_addr);
 VAR_6 = VAR_7 - FUNC_0(VAR_7);

 if (VAR_6 != 0) {
  VAR_10 = VAR_0;
  VAR_8 |= 1;
 }

 for (VAR_5 = 1; VAR_5 < VAR_3; VAR_5++) {
  VAR_7 = FUNC_1(VAR_2[VAR_5].ds_addr);
  VAR_6 = VAR_7 - FUNC_0(VAR_7);

  if (VAR_6 == 0) {
   if (VAR_0 == VAR_10){




    VAR_9 = VAR_1;
   }
   VAR_10 = VAR_1;
  } else {
   VAR_8 |= 1ULL << VAR_5;
   if (!VAR_10) {
    if (VAR_7 != FUNC_1(VAR_2[VAR_5-1].ds_addr +
        VAR_2[VAR_5-1].ds_len)) {




     VAR_9 = VAR_1;
    }
   } else {
    VAR_9 = VAR_1;
   }
   VAR_10 = VAR_0;
  }
 }

 if (!VAR_9) {
  return (-1);
 } else {
  *VAR_4 = VAR_8;
  return 0;
 }
}
