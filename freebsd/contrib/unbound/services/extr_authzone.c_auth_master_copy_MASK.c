
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_master {struct auth_master* host; struct auth_master* file; scalar_t__ list; int * next; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct auth_master*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct auth_master*,int) ;
 void* FUNC_4 (struct auth_master*) ;

__attribute__((used)) static struct auth_master*
FUNC_5(struct auth_master* VAR_0)
{
 struct auth_master* VAR_1;
 if(!VAR_0) return ((void*)0);
 VAR_1 = (struct auth_master*)FUNC_3(VAR_0, sizeof(*VAR_0));
 if(!VAR_1) {
  FUNC_2("malloc failure");
  return ((void*)0);
 }
 VAR_1->next = ((void*)0);
 if(VAR_1->host) {
  VAR_1->host = FUNC_4(VAR_1->host);
  if(!VAR_1->host) {
   FUNC_1(VAR_1);
   FUNC_2("malloc failure");
   return ((void*)0);
  }
 }
 if(VAR_1->file) {
  VAR_1->file = FUNC_4(VAR_1->file);
  if(!VAR_1->file) {
   FUNC_1(VAR_1->host);
   FUNC_1(VAR_1);
   FUNC_2("malloc failure");
   return ((void*)0);
  }
 }
 if(VAR_1->list) {
  VAR_1->list = FUNC_0(VAR_1->list);
  if(!VAR_1->list) {
   FUNC_1(VAR_1->file);
   FUNC_1(VAR_1->host);
   FUNC_1(VAR_1);
   return ((void*)0);
  }
 }
 return VAR_1;
}
