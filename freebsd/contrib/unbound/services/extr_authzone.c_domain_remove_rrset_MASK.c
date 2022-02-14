
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct auth_rrset {scalar_t__ type; struct auth_rrset* next; } ;
struct auth_data {struct auth_rrset* rrsets; } ;


 int FUNC_0 (struct auth_rrset*) ;

__attribute__((used)) static void
FUNC_1(struct auth_data* VAR_0, uint16_t VAR_1)
{
 struct auth_rrset* VAR_2, *VAR_3;
 if(!VAR_0) return;
 VAR_3 = ((void*)0);
 VAR_2 = VAR_0->rrsets;
 while(VAR_2) {
  if(VAR_2->type == VAR_1) {

   if(VAR_3) VAR_3->next = VAR_2->next;
   else VAR_0->rrsets = VAR_2->next;
   FUNC_0(VAR_2);
   return;
  }
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
 }
}
