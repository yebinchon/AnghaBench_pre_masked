
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct xbb_xen_reqlist {size_t nr_segments; scalar_t__* gnt_handles; } ;
struct gnttab_unmap_grant_ref {scalar_t__ handle; scalar_t__ dev_bus_addr; int host_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct gnttab_unmap_grant_ref*,size_t) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct xbb_xen_reqlist*,size_t,int ) ;

__attribute__((used)) static void
FUNC_3(struct xbb_xen_reqlist *VAR_3)
{
 struct gnttab_unmap_grant_ref VAR_4[VAR_2];
 u_int VAR_5;
 u_int VAR_6;
 int VAR_7;

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3->nr_segments; VAR_5++) {

  if (VAR_3->gnt_handles[VAR_5] == VAR_1)
   continue;

  VAR_4[VAR_6].host_addr = FUNC_2(VAR_3, VAR_5, 0);
  VAR_4[VAR_6].dev_bus_addr = 0;
  VAR_4[VAR_6].handle = VAR_3->gnt_handles[VAR_5];
  VAR_3->gnt_handles[VAR_5] = VAR_1;
  VAR_6++;
 }

 VAR_7 = FUNC_0(VAR_0,
       VAR_4, VAR_6);
 FUNC_1(VAR_7 == 0, ("Grant table operation failed"));
}
