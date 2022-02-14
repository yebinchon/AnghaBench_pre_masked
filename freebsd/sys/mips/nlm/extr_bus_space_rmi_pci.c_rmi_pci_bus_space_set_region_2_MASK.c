
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bus_addr_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bus_space_handle_t VAR_1,
    bus_size_t VAR_2, u_int16_t VAR_3, size_t VAR_4)
{
 bus_addr_t VAR_5 = VAR_1 + VAR_2;

 for (; VAR_4 != 0; VAR_4--, VAR_5 += 2)
  (*(volatile u_int16_t *)(VAR_5)) = VAR_3;
}
