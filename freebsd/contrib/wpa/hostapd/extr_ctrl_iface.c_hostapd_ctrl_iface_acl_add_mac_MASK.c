
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vlan_description {int dummy; } ;
struct mac_acl_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (struct mac_acl_entry**,int*,int,int *) ;
 int FUNC_2 (struct mac_acl_entry*,int,int *,struct vlan_description*) ;
 scalar_t__ FUNC_3 (char const*,int *) ;
 char* FUNC_4 (char const*,char*) ;
 int FUNC_5 (struct mac_acl_entry*,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct mac_acl_entry **VAR_2, int *VAR_3,
       const char *VAR_4)
{
 u8 VAR_5[VAR_0];
 struct vlan_description VAR_6;
 int VAR_7 = 0, VAR_8 = 0;
 const char *VAR_9;

 if (FUNC_3(VAR_4, VAR_5))
  return -1;

 VAR_9 = FUNC_4(VAR_4, "VLAN_ID=");
 if (VAR_9)
  VAR_8 = FUNC_0(VAR_9 + 8);

 if (!FUNC_2(*VAR_2, *VAR_3, VAR_5, &VAR_6)) {
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_8, VAR_5);
  if (VAR_7 != -1 && *VAR_2)
   FUNC_5(*VAR_2, *VAR_3, sizeof(**VAR_2), VAR_1);
 }

 return VAR_7 < 0 ? -1 : 0;
}
