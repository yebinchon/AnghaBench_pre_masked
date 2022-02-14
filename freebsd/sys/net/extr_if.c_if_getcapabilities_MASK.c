
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_capabilities; } ;
typedef scalar_t__ if_t ;



int
FUNC_0(if_t VAR_0)
{
 return ((struct ifnet *)VAR_0)->if_capabilities;
}
