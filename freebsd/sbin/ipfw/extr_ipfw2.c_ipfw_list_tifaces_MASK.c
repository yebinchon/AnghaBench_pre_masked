
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int count; scalar_t__ objsize; } ;
typedef TYPE_1__ ipfw_obj_lheader ;
struct TYPE_7__ {int flags; char* ifname; int ifindex; int refcnt; int gencnt; } ;
typedef TYPE_2__ ipfw_iface_info ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (char*,char*,int,int,...) ;
 int FUNC_4 (TYPE_1__*,int,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5()
{
 ipfw_obj_lheader *VAR_3;
 ipfw_iface_info *VAR_4;
 int VAR_5, VAR_6;

 if ((VAR_6 = FUNC_2(&VAR_3)) != 0)
  FUNC_0(VAR_0, "Unable to request ipfw tracked interface list");


 FUNC_4(VAR_3 + 1, VAR_3->count, VAR_3->objsize, VAR_2);

 VAR_4 = (ipfw_iface_info *)(VAR_3 + 1);
 for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++) {
  if (VAR_4->flags & VAR_1)
   FUNC_3("%s ifindex: %d refcount: %u changes: %u\n",
       VAR_4->ifname, VAR_4->ifindex, VAR_4->refcnt,
       VAR_4->gencnt);
  else
   FUNC_3("%s ifindex: unresolved refcount: %u changes: %u\n",
       VAR_4->ifname, VAR_4->refcnt, VAR_4->gencnt);
  VAR_4 = (ipfw_iface_info *)((caddr_t)VAR_4 + VAR_3->objsize);
 }

 FUNC_1(VAR_3);
}
