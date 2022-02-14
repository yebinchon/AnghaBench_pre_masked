
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; } ;
typedef scalar_t__ if_t ;



int
FUNC_0(if_t VAR_0, int VAR_1)
{
 ((struct ifnet *)VAR_0)->if_flags = VAR_1;
 return (0);
}
