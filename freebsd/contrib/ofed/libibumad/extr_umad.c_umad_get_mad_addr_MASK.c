
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_user_mad {int addr; } ;
typedef int ib_mad_addr_t ;



ib_mad_addr_t *FUNC_0(void *VAR_0)
{
 struct ib_user_mad *VAR_1 = VAR_0;

 return &VAR_1->addr;
}
