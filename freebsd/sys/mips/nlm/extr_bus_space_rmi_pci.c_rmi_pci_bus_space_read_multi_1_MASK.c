
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, bus_space_handle_t VAR_1,
    bus_size_t VAR_2, u_int8_t * VAR_3, size_t VAR_4)
{
 while (VAR_4--) {
  *VAR_3 = *(volatile u_int8_t *)(VAR_1 + VAR_2);
  VAR_3++;
 }
}
