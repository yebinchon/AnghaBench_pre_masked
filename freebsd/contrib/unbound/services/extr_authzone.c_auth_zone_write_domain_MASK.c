
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_zone {scalar_t__ namelen; } ;
struct auth_rrset {scalar_t__ type; struct auth_rrset* next; } ;
struct auth_data {scalar_t__ namelen; struct auth_rrset* rrsets; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct auth_zone*,struct auth_data*,struct auth_rrset*,int *) ;
 struct auth_rrset* FUNC_1 (struct auth_data*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct auth_zone* VAR_1, struct auth_data* VAR_2, FILE* VAR_3)
{
 struct auth_rrset* VAR_4;

 if(VAR_1->namelen == VAR_2->namelen) {
  struct auth_rrset* VAR_5 = FUNC_1(VAR_2, VAR_0);
  if(VAR_5) {
   if(!FUNC_0(VAR_1, VAR_2, VAR_5, VAR_3))
    return 0;
  }
 }

 for(VAR_4 = VAR_2->rrsets; VAR_4; VAR_4 = VAR_4->next) {
  if(VAR_1->namelen == VAR_2->namelen &&
   VAR_4->type == VAR_0)
   continue;
  if(!FUNC_0(VAR_1, VAR_2, VAR_4, VAR_3))
   return 0;
 }
 return 1;
}
