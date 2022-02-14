
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strlist {int str; struct config_strlist* next; } ;
struct config_auth {struct config_strlist* allow_notify; struct config_strlist* masters; struct config_strlist* urls; } ;
struct auth_master {int http; int ixfr; int allow_notify; void* host; int ssl; int port; int file; struct auth_master* next; } ;


 struct auth_master* FUNC_0 (struct auth_master***) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,void**,int *,int *,int *) ;
 void* FUNC_3 (int ) ;

int
FUNC_4(struct auth_master** VAR_0, struct config_auth* VAR_1,
 int VAR_2)
{
 struct auth_master* VAR_3;
 struct config_strlist* VAR_4;

 while(*VAR_0) {
  VAR_0 = &( (*VAR_0)->next );
 }
 if(VAR_2)
   for(VAR_4 = VAR_1->urls; VAR_4; VAR_4 = VAR_4->next) {
  VAR_3 = FUNC_0(&VAR_0);
  VAR_3->http = 1;
  if(!FUNC_2(VAR_4->str, &VAR_3->host, &VAR_3->file, &VAR_3->port, &VAR_3->ssl))
   return 0;
 }
 for(VAR_4 = VAR_1->masters; VAR_4; VAR_4 = VAR_4->next) {
  VAR_3 = FUNC_0(&VAR_0);
  VAR_3->ixfr = 1;
  VAR_3->host = FUNC_3(VAR_4->str);
  if(!VAR_3->host) {
   FUNC_1("malloc failure");
   return 0;
  }
 }
 for(VAR_4 = VAR_1->allow_notify; VAR_4; VAR_4 = VAR_4->next) {
  VAR_3 = FUNC_0(&VAR_0);
  VAR_3->allow_notify = 1;
  VAR_3->host = FUNC_3(VAR_4->str);
  if(!VAR_3->host) {
   FUNC_1("malloc failure");
   return 0;
  }
 }
 return 1;
}
