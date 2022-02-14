
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vlan_description {int dummy; } ;
struct mac_acl_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mac_acl_entry*,int,int *,struct vlan_description*) ;
 int FUNC_1 (struct mac_acl_entry**,int*,int *) ;
 scalar_t__ FUNC_2 (char const*,int *) ;

__attribute__((used)) static int FUNC_3(struct mac_acl_entry **VAR_1, int *VAR_2,
       const char *VAR_3)
{
 u8 VAR_4[VAR_0];
 struct vlan_description VAR_5;

 if (!(*VAR_2))
  return 0;

 if (FUNC_2(VAR_3, VAR_4))
  return -1;

 if (FUNC_0(*VAR_1, *VAR_2, VAR_4, &VAR_5))
  FUNC_1(VAR_1, VAR_2, VAR_4);

 return 0;
}
