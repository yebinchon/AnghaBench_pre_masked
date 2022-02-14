
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bus_space_tag_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;

int
FUNC_1(bus_space_tag_t VAR_1, bus_addr_t VAR_2, bus_size_t VAR_3, int VAR_4,
    bus_space_handle_t *VAR_5)
{
 void *VAR_6;






 if ((VAR_6 = FUNC_0(VAR_2, VAR_3)) == ((void*)0))
  return (VAR_0);
 *VAR_5 = (bus_space_handle_t)VAR_6;
 return (0);
}
