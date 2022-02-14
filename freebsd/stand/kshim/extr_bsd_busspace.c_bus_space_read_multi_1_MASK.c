
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(bus_space_tag_t VAR_0, bus_space_handle_t VAR_1,
    bus_size_t VAR_2, uint8_t *VAR_3, bus_size_t VAR_4)
{
 while (VAR_4--) {
  *VAR_3++ = FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
