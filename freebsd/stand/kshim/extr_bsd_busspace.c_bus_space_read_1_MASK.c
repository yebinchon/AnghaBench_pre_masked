
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile uint8_t ;
typedef int bus_space_tag_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;



uint8_t
FUNC_0(bus_space_tag_t VAR_0, bus_space_handle_t VAR_1, bus_size_t VAR_2)
{
 return (*((volatile uint8_t *)(VAR_1 + VAR_2)));
}
