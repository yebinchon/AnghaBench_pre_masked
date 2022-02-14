
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int untagged; int notempty; } ;
struct mac_acl_entry {TYPE_1__ vlan_id; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 struct mac_acl_entry* FUNC_2 (struct mac_acl_entry*,int,int) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct mac_acl_entry **VAR_2, int *VAR_3,
       int VAR_4, const u8 *VAR_5)
{
 struct mac_acl_entry *VAR_6;

 VAR_6 = FUNC_2(*VAR_2, *VAR_3 + 1, sizeof(**VAR_2));
 if (!VAR_6) {
  FUNC_3(VAR_1, "MAC list reallocation failed");
  return -1;
 }

 *VAR_2 = VAR_6;
 FUNC_0((*VAR_2)[*VAR_3].addr, VAR_5, VAR_0);
 FUNC_1(&(*VAR_2)[*VAR_3].vlan_id, 0, sizeof((*VAR_2)[*VAR_3].vlan_id));
 (*VAR_2)[*VAR_3].vlan_id.untagged = VAR_4;
 (*VAR_2)[*VAR_3].vlan_id.notempty = !!VAR_4;
 (*VAR_3)++;

 return 0;
}
