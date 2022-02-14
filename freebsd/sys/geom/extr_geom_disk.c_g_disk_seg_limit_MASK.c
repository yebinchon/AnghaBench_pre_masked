
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_3__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 uintptr_t VAR_0 ;
 uintptr_t FUNC_0 (scalar_t__) ;
 uintptr_t FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(bus_dma_segment_t *VAR_1, off_t *VAR_2,
    off_t *VAR_3, int *VAR_4)
{
 uintptr_t VAR_5;
 uintptr_t VAR_6;
 off_t VAR_7;
 off_t VAR_8;
 int VAR_9;

 VAR_7 = *VAR_2;
 VAR_8 = *VAR_3;

 if (VAR_8 > VAR_1->ds_len - VAR_7)
  VAR_8 = VAR_1->ds_len - VAR_7;

 VAR_5 = FUNC_1(VAR_1->ds_addr + VAR_7);
 VAR_6 = FUNC_0(VAR_1->ds_addr + VAR_7 + VAR_8);
 VAR_9 = (VAR_6 - VAR_5) >> VAR_0;

 if (VAR_9 > *VAR_4) {
  VAR_9 = *VAR_4;
  VAR_8 = (VAR_5 + (VAR_9 << VAR_0)) -
      (VAR_1->ds_addr + VAR_7);
 }

 *VAR_2 = 0;
 *VAR_3 -= VAR_8;
 *VAR_4 -= VAR_9;
}
