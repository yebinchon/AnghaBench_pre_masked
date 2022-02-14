
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_md_object {int mdo_softc; } ;
struct g_raid_md_intel_object {int * mdio_meta; int * mdio_rootmount; int mdio_start_co; scalar_t__ mdio_started; } ;


 int FUNC_0 (int,int ,char*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct g_raid_md_object *VAR_1)
{
 struct g_raid_md_intel_object *VAR_2;

 VAR_2 = (struct g_raid_md_intel_object *)VAR_1;
 if (!VAR_2->mdio_started) {
  VAR_2->mdio_started = 0;
  FUNC_1(&VAR_2->mdio_start_co);
  FUNC_0(1, VAR_1->mdo_softc,
      "root_mount_rel %p", VAR_2->mdio_rootmount);
  FUNC_3(VAR_2->mdio_rootmount);
  VAR_2->mdio_rootmount = ((void*)0);
 }
 if (VAR_2->mdio_meta != ((void*)0)) {
  FUNC_2(VAR_2->mdio_meta, VAR_0);
  VAR_2->mdio_meta = ((void*)0);
 }
 return (0);
}
