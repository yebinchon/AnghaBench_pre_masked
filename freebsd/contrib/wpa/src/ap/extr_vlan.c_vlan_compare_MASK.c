
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_description {scalar_t__ untagged; scalar_t__* tagged; int notempty; } ;


 int VAR_0 ;

int FUNC_0(struct vlan_description *VAR_1, struct vlan_description *VAR_2)
{
 int VAR_3;
 const int VAR_4 = !VAR_1 || !VAR_1->notempty;
 const int VAR_5 = !VAR_2 || !VAR_2->notempty;

 if (VAR_4 && VAR_5)
  return 0;
 if (VAR_4 || VAR_5)
  return 1;
 if (VAR_1->untagged != VAR_2->untagged)
  return 1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->tagged[VAR_3] != VAR_2->tagged[VAR_3])
   return 1;
 }
 return 0;
}
