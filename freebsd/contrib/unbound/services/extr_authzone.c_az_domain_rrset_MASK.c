
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct auth_rrset {scalar_t__ type; struct auth_rrset* next; } ;
struct auth_data {struct auth_rrset* rrsets; } ;



__attribute__((used)) static struct auth_rrset*
FUNC_0(struct auth_data* VAR_0, uint16_t VAR_1)
{
 struct auth_rrset* VAR_2;
 if(!VAR_0) return ((void*)0);
 VAR_2 = VAR_0->rrsets;
 while(VAR_2) {
  if(VAR_2->type == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }
 return ((void*)0);
}
