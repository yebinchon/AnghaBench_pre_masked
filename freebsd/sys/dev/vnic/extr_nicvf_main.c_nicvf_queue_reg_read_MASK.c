
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct nicvf {int reg_base; } ;
typedef scalar_t__ bus_space_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

uint64_t
FUNC_1(struct nicvf *VAR_1, bus_space_handle_t VAR_2,
    uint64_t VAR_3)
{

 return (FUNC_0(VAR_1->reg_base, VAR_2 + (VAR_3 << VAR_0)));
}
