
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {scalar_t__ if_hwassist; } ;
typedef scalar_t__ if_t ;



int
FUNC_0(if_t VAR_0)
{
 ((struct ifnet *)VAR_0)->if_hwassist = 0;
 return (0);
}
