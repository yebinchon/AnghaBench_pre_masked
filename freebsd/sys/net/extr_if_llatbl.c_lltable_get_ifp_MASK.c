
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lltable {struct ifnet* llt_ifp; } ;
struct ifnet {int dummy; } ;



struct ifnet *
FUNC_0(const struct lltable *VAR_0)
{

 return (VAR_0->llt_ifp);
}
