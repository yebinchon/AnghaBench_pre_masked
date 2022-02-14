
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct burst {int dummy; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bus_size_t ;



void
FUNC_0(bus_space_tag_t VAR_0, bus_space_handle_t VAR_1,
    bus_size_t VAR_2, uint32_t *VAR_3, bus_size_t VAR_4)
{
 enum { BURST = sizeof(struct burst) / 4 };

 VAR_1 += VAR_2;

 while (VAR_4 >= BURST) {
  *(struct burst *)VAR_3 = *(( struct burst *)VAR_1);

  VAR_1 += BURST * 4;
  VAR_3 += BURST;
  VAR_4 -= BURST;
 }

 while (VAR_4--) {
  *VAR_3++ = *((volatile uint32_t *)VAR_1);
  VAR_1 += 4;
 }
}
