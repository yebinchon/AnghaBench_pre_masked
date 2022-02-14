
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vlan_description {int dummy; } ;
struct mac_acl_entry {struct vlan_description vlan_id; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;

int FUNC_1(struct mac_acl_entry *VAR_1, int VAR_2,
     const u8 *VAR_3, struct vlan_description *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = 0;
 VAR_6 = VAR_2 - 1;

 while (VAR_5 <= VAR_6) {
  VAR_7 = (VAR_5 + VAR_6) / 2;
  VAR_8 = FUNC_0(VAR_1[VAR_7].addr, VAR_3, VAR_0);
  if (VAR_8 == 0) {
   if (VAR_4)
    *VAR_4 = VAR_1[VAR_7].vlan_id;
   return 1;
  }
  if (VAR_8 < 0)
   VAR_5 = VAR_7 + 1;
  else
   VAR_6 = VAR_7 - 1;
 }

 return 0;
}
