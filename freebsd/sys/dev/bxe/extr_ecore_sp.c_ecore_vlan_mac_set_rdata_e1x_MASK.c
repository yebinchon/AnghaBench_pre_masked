
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct mac_configuration_entry {int dummy; } ;
struct mac_configuration_cmd {int hdr; struct mac_configuration_entry* config_table; } ;
struct ecore_raw_obj {int cl_id; } ;
struct ecore_vlan_mac_obj {struct ecore_raw_obj raw; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,char*,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (struct bxe_softc*,struct ecore_vlan_mac_obj*,int,int,int *,int ,struct mac_configuration_entry*) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_vlan_mac_obj*,int,int,int *) ;

__attribute__((used)) static inline void FUNC_3(struct bxe_softc *VAR_0,
 struct ecore_vlan_mac_obj *VAR_1, int VAR_2, int VAR_3, bool VAR_4,
 uint8_t *VAR_5, uint16_t VAR_6, int VAR_7, struct mac_configuration_cmd *VAR_8)
{
 struct mac_configuration_entry *VAR_9 = &VAR_8->config_table[0];
 struct ecore_raw_obj *VAR_10 = &VAR_1->raw;

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
      &VAR_8->hdr);
 FUNC_1(VAR_0, VAR_1, VAR_4, VAR_7, VAR_5, VAR_6,
      VAR_9);

 FUNC_0(VAR_0, "%s MAC %02x:%02x:%02x:%02x:%02x:%02x CLID %d CAM offset %d\n",
    (VAR_4 ? "setting" : "clearing"),
    VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4], VAR_5[5], VAR_10->cl_id, VAR_3);
}
