
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct ifaddr* if_addr; } ;
struct ifaddr {int dummy; } ;
typedef scalar_t__ if_t ;



struct ifaddr *
FUNC_0(if_t VAR_0)
{
 return ((struct ifnet *)VAR_0)->if_addr;
}
