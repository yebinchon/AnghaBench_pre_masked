
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile u_int16_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;



__attribute__((used)) static u_int16_t
FUNC_0(void *VAR_0, bus_space_handle_t VAR_1,
    bus_size_t VAR_2)
{
 return *(volatile u_int16_t *)(VAR_1 + VAR_2);
}
