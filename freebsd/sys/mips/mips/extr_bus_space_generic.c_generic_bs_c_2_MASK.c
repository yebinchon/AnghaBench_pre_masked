
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

void
FUNC_2(void *VAR_0, bus_space_handle_t VAR_1,
    bus_size_t VAR_2, bus_space_handle_t VAR_3,
    bus_size_t VAR_4, size_t VAR_5)
{
 bus_addr_t VAR_6 = VAR_1 + VAR_2;
 bus_addr_t VAR_7 = VAR_3 + VAR_4;

 if (VAR_6 >= VAR_7) {

  for (; VAR_5 != 0; VAR_5--, VAR_6 += 2, VAR_7 += 2)
   FUNC_1(VAR_7, FUNC_0(VAR_6));
 } else {

  for (VAR_6 += 2 * (VAR_5 - 1), VAR_7 += 2 * (VAR_5 - 1);
      VAR_5 != 0; VAR_5--, VAR_6 -= 2, VAR_7 -= 2)
   FUNC_1(VAR_7, FUNC_0(VAR_6));
 }
}
