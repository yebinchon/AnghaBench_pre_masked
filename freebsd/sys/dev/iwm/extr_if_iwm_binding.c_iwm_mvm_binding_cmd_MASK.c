
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct iwm_softc {int sc_dev; } ;
struct iwm_mvm_phy_ctxt {int color; int id; } ;
struct iwm_mvm_iface_iterator_data {int idx; int * colors; int * ids; struct iwm_mvm_phy_ctxt* phyctxt; } ;
struct iwm_binding_cmd {void** macs; void* phy; void* action; void* id_and_color; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct iwm_softc*,int ,int,struct iwm_binding_cmd*,scalar_t__*) ;
 int FUNC_4 (struct iwm_binding_cmd*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct iwm_softc *VAR_4, uint32_t VAR_5,
 struct iwm_mvm_iface_iterator_data *VAR_6)
{
 struct iwm_binding_cmd VAR_7;
 struct iwm_mvm_phy_ctxt *VAR_8 = VAR_6->phyctxt;
 int VAR_9, VAR_10;
 uint32_t VAR_11;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.id_and_color
     = FUNC_2(FUNC_0(VAR_8->id, VAR_8->color));
 VAR_7.action = FUNC_2(VAR_5);
 VAR_7.phy = FUNC_2(FUNC_0(VAR_8->id, VAR_8->color));

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  VAR_7.macs[VAR_9] = FUNC_2(VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_6->idx; VAR_9++)
  VAR_7.macs[VAR_9] = FUNC_2(FUNC_0(VAR_6->ids[VAR_9],
             VAR_6->colors[VAR_9]));

 VAR_11 = 0;
 VAR_10 = FUNC_3(VAR_4, VAR_1,
     sizeof(VAR_7), &VAR_7, &VAR_11);
 if (VAR_10) {
  FUNC_1(VAR_4->sc_dev,
      "Failed to send binding (action:%d): %d\n", VAR_5, VAR_10);
  return VAR_10;
 }

 if (VAR_11) {
  FUNC_1(VAR_4->sc_dev,
      "Binding command failed: %u\n", VAR_11);
  VAR_10 = VAR_0;
 }

 return VAR_10;
}
