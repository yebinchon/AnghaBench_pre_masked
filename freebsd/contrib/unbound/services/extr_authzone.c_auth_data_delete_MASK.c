
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_rrset {struct auth_rrset* next; } ;
struct auth_data {struct auth_data* name; struct auth_rrset* rrsets; } ;


 int FUNC_0 (struct auth_rrset*) ;
 int FUNC_1 (struct auth_data*) ;

__attribute__((used)) static void
FUNC_2(struct auth_data* VAR_0)
{
 struct auth_rrset* VAR_1, *VAR_2;
 if(!VAR_0) return;
 VAR_1 = VAR_0->rrsets;
 while(VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_1(VAR_0->name);
 FUNC_1(VAR_0);
}
