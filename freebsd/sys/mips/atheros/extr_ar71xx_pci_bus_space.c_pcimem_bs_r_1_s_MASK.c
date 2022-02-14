
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int bus_space_handle_t ;
typedef int bus_size_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint8_t
FUNC_1(void *VAR_0, bus_space_handle_t VAR_1, bus_size_t VAR_2)
{

 return FUNC_0(VAR_1 + (VAR_2 &~ 3) + (3 - (VAR_2 & 3)));
}
