
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct mpr_softc {int dummy; } ;
struct _map_topology_change {size_t num_entries; struct _map_phy_change* phy_details; } ;
struct _map_phy_change {scalar_t__ reason; int is_processed; int dev_handle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mpr_softc*,int ) ;
 int FUNC_1 (struct mpr_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct mpr_softc *VAR_1,
    struct _map_topology_change *VAR_2)
{
 u8 VAR_3;
 struct _map_phy_change *VAR_4;
 u32 VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_entries; VAR_3++) {
  VAR_4 = &VAR_2->phy_details[VAR_3];
  if (!VAR_4->dev_handle || (VAR_4->reason !=
      VAR_0))
   continue;
  VAR_5 = FUNC_0(VAR_1, VAR_4->
      dev_handle);
  VAR_4->is_processed = 1;
  FUNC_1(VAR_1, VAR_5);
 }
}
