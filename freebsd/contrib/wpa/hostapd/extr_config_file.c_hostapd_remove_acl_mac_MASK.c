
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mac_acl_entry {int addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct mac_acl_entry*,int,int,int) ;

void FUNC_2(struct mac_acl_entry **VAR_1, int *VAR_2,
       const u8 *VAR_3)
{
 int VAR_4 = 0;

 while (VAR_4 < *VAR_2) {
  if (FUNC_0((*VAR_1)[VAR_4].addr, VAR_3, VAR_0) == 0) {
   FUNC_1(*VAR_1, *VAR_2, sizeof(**VAR_1), VAR_4);
   (*VAR_2)--;
  } else {
   VAR_4++;
  }
 }
}
