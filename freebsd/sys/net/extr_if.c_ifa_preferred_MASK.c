
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddr {scalar_t__ ifa_carp; } ;


 scalar_t__ FUNC_0 (struct ifaddr*) ;
 scalar_t__ FUNC_1 (struct ifaddr*) ;
 scalar_t__ FUNC_2 (struct ifaddr*) ;

int
FUNC_3(struct ifaddr *VAR_0, struct ifaddr *VAR_1)
{

 return (VAR_0->ifa_carp && (!VAR_1->ifa_carp ||
     (FUNC_0)(VAR_1) && !FUNC_0)(VAR_0))));
}
