
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;



__attribute__((used)) static u_int8_t
FUNC_0(void *VAR_0, bus_space_handle_t VAR_1,
    bus_size_t VAR_2)
{
 return (u_int8_t)(*(volatile u_int32_t *)(VAR_1 + VAR_2));
}
