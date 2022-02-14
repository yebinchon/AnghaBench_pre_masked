
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {TYPE_1__* __r_i; } ;
typedef scalar_t__ rman_res_t ;
struct TYPE_2__ {scalar_t__ r_start; scalar_t__ r_end; } ;



rman_res_t
FUNC_0(struct resource *VAR_0)
{

 return (VAR_0->__r_i->r_end - VAR_0->__r_i->r_start + 1);
}
