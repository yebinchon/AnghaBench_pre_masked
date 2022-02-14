
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static __inline void
FUNC_1(bus_space_tag_t VAR_0,
    bus_space_handle_t VAR_1, bus_size_t VAR_2, uint64_t VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2 + 4, VAR_3 >> 32);
}
