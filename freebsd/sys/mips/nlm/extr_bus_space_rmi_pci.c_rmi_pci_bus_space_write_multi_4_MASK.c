
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, bus_space_handle_t VAR_1,
    bus_size_t VAR_2, const u_int32_t * VAR_3, size_t VAR_4)
{
 FUNC_1();
 while (VAR_4--) {
  (*(volatile u_int32_t *)(VAR_1 + VAR_2)) = FUNC_0(*VAR_3);
  VAR_3++;
 }
}
