
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_rrset {scalar_t__ type; struct auth_rrset* next; } ;
struct auth_data {struct auth_rrset* rrsets; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct auth_data* VAR_2)
{
 struct auth_rrset* VAR_3 = VAR_2->rrsets;
 int VAR_4 = 0;
 while(VAR_3) {
  if(VAR_3->type == VAR_0) {
   VAR_4 = 1;
  } else if(VAR_3->type != VAR_1) {
   return 0;
  }
  VAR_3 = VAR_3->next;
 }
 return VAR_4;
}
