
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_bridge {char const* bdg_basename; } ;
struct netmap_vp_adapter {struct nm_bridge* na_bdg; } ;



const char*
FUNC_0(struct netmap_vp_adapter *VAR_0)
{
 struct nm_bridge *VAR_1 = VAR_0->na_bdg;
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 return VAR_1->bdg_basename;
}
