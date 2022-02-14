
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {struct config_auth* auths; } ;
struct config_auth {scalar_t__* name; struct config_auth* next; } ;
struct auth_zones {int dummy; } ;


 int FUNC_0 (struct auth_zones*,struct config_auth*) ;
 int FUNC_1 (struct auth_zones*,struct config_file*) ;
 int FUNC_2 (struct auth_zones*) ;
 int FUNC_3 (struct auth_zones*) ;
 int FUNC_4 (struct auth_zones*) ;
 int FUNC_5 (char*,scalar_t__*) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct auth_zones* VAR_0, struct config_file* VAR_1,
 int VAR_2)
{
 struct config_auth* VAR_3;
 FUNC_4(VAR_0);
 for(VAR_3 = VAR_1->auths; VAR_3; VAR_3 = VAR_3->next) {
  if(!VAR_3->name || VAR_3->name[0] == 0) {
   FUNC_6("auth-zone without a name, skipped");
   continue;
  }
  if(!FUNC_0(VAR_0, VAR_3)) {
   FUNC_5("cannot config auth zone %s", VAR_3->name);
   return 0;
  }
 }
 FUNC_3(VAR_0);
 if(!FUNC_1(VAR_0, VAR_1))
  return 0;
 if(VAR_2) {
  if(!FUNC_2(VAR_0))
   return 0;
 }
 return 1;
}
