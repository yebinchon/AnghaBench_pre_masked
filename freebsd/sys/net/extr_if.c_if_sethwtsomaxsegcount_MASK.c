
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ifnet {int if_hw_tsomaxsegcount; } ;
typedef scalar_t__ if_t ;



int
FUNC_0(if_t VAR_0, u_int VAR_1)
{

 ((struct ifnet *)VAR_0)->if_hw_tsomaxsegcount = VAR_1;
        return (0);
}
