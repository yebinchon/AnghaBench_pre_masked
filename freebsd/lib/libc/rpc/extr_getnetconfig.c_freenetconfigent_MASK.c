
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfig {struct netconfig* nc_lookups; struct netconfig* nc_netid; } ;


 int FUNC_0 (struct netconfig*) ;

void
FUNC_1(struct netconfig *VAR_0)
{
    if (VAR_0 != ((void*)0)) {
 FUNC_0(VAR_0->nc_netid);
 FUNC_0(VAR_0->nc_lookups);
 FUNC_0(VAR_0);
    }
    return;
}
