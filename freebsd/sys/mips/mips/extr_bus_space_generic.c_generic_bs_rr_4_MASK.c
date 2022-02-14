
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bus_space_handle_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int FUNC_0 (int) ;

void
FUNC_1(void *VAR_0, bus_space_handle_t VAR_1,
    bus_size_t VAR_2, uint32_t *VAR_3, size_t VAR_4)
{
 bus_addr_t VAR_5 = VAR_1 + VAR_2;

 while (VAR_4--) {
  *VAR_3++ = FUNC_0(VAR_5);
  VAR_5 += 4;
 }
}
