
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nm_bridge {int dummy; } ;
struct TYPE_5__ {int * ifp; scalar_t__ nm_mem; } ;
struct TYPE_6__ {int bdg_port; TYPE_2__ up; struct nm_bridge* na_bdg; } ;
struct TYPE_4__ {int bdg_port; struct nm_bridge* na_bdg; } ;
struct netmap_bwrap_adapter {int saved_na_vp; TYPE_3__ host; TYPE_1__ up; struct netmap_adapter* hwna; } ;
struct netmap_adapter {int na_flags; int * na_private; int * na_hostvp; int na_vp; int * ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct netmap_adapter*) ;
 int FUNC_1 (struct nm_bridge*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,struct netmap_adapter*) ;

__attribute__((used)) static void
FUNC_4(struct netmap_adapter *VAR_1)
{
 struct netmap_bwrap_adapter *VAR_2 = (struct netmap_bwrap_adapter*)VAR_1;
 struct netmap_adapter *VAR_3 = VAR_2->hwna;
 struct nm_bridge *VAR_4 = VAR_2->up.na_bdg,
  *VAR_5 = VAR_2->host.na_bdg;

 if (VAR_2->host.up.nm_mem)
  FUNC_2(VAR_2->host.up.nm_mem);

 if (VAR_4) {
  FUNC_1(VAR_4, VAR_2->up.bdg_port,
       (VAR_5 ? VAR_2->host.bdg_port : -1));
 }

 FUNC_3("na %p", VAR_1);
 VAR_1->ifp = ((void*)0);
 VAR_2->host.up.ifp = ((void*)0);
 VAR_3->na_vp = VAR_2->saved_na_vp;
 VAR_3->na_hostvp = ((void*)0);
 VAR_3->na_private = ((void*)0);
 VAR_3->na_flags &= ~VAR_0;
 FUNC_0(VAR_3);

}
