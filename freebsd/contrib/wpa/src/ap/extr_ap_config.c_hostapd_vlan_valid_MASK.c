
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_description {scalar_t__ untagged; scalar_t__* tagged; int notempty; } ;
struct hostapd_vlan {scalar_t__ vlan_id; struct hostapd_vlan* next; int vlan_desc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct vlan_description*) ;

int FUNC_1(struct hostapd_vlan *VAR_3,
         struct vlan_description *VAR_4)
{
 struct hostapd_vlan *VAR_5 = VAR_3;
 int VAR_6;

 if (!VAR_4->notempty || VAR_4->untagged < 0 ||
     VAR_4->untagged > VAR_1)
  return 0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_4->tagged[VAR_6] < 0 ||
      VAR_4->tagged[VAR_6] > VAR_1)
   return 0;
 }
 if (!VAR_4->untagged && !VAR_4->tagged[0])
  return 0;

 while (VAR_5) {
  if (!FUNC_0(&VAR_5->vlan_desc, VAR_4) ||
      VAR_5->vlan_id == VAR_2)
   return 1;
  VAR_5 = VAR_5->next;
 }
 return 0;
}
