
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_addr {struct auth_addr* next; } ;


 int FUNC_0 (struct auth_addr*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct auth_addr*,int) ;

__attribute__((used)) static struct auth_addr*
FUNC_3(struct auth_addr* VAR_0)
{
 struct auth_addr* VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
 struct auth_addr* VAR_3;
 for(VAR_3=VAR_0; VAR_3; VAR_3=VAR_3->next) {
  struct auth_addr* VAR_4 = (struct auth_addr*)FUNC_2(VAR_3, sizeof(*VAR_3));
  if(!VAR_4) {
   FUNC_1("malloc failure");
   FUNC_0(VAR_1);
   return ((void*)0);
  }
  VAR_4->next = ((void*)0);
  if(VAR_2) VAR_2->next = VAR_4;
  if(!VAR_1) VAR_1 = VAR_4;
  VAR_2 = VAR_4;
 }
 return VAR_1;
}
