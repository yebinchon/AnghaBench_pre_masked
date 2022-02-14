
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (void*,void*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, bus_dma_segment_t *VAR_1, off_t VAR_2, off_t VAR_3)
{
 off_t VAR_4;

 while (VAR_2 >= VAR_1->ds_len) {
  VAR_2 -= VAR_1->ds_len;
  VAR_1++;
 }

 while (VAR_3 != 0) {
  VAR_4 = FUNC_1(VAR_3, VAR_1->ds_len - VAR_2);
  FUNC_0(VAR_0, (void *)(uintptr_t)(VAR_1->ds_addr + VAR_2),
      VAR_4);
  VAR_2 = 0;
  VAR_0 = (uint8_t *)VAR_0 + VAR_4;
  VAR_3 -= VAR_4;
  VAR_1++;
 }
}
