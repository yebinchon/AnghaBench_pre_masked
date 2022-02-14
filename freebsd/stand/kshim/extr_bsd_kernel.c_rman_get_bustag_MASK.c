
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int r_bustag; } ;
typedef int bus_space_tag_t ;



bus_space_tag_t
FUNC_0(struct resource *VAR_0)
{

 return (VAR_0->r_bustag);
}
