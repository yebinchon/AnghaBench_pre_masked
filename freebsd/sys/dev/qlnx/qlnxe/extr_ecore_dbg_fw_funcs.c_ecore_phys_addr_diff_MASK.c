
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dbg_bus_mem_addr {scalar_t__ hi; scalar_t__ lo; } ;



__attribute__((used)) static u32 FUNC_0(struct dbg_bus_mem_addr *VAR_0,
        struct dbg_bus_mem_addr *VAR_1)
{
 return VAR_0->hi == VAR_1->hi ? VAR_0->lo - VAR_1->lo : VAR_1->lo - VAR_0->lo;
}
