
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct daemon_remote {int max_active; int use_cert; int * ctx; } ;
struct config_strlist {char* str; struct config_strlist* next; } ;
struct TYPE_2__ {struct config_strlist* first; } ;
struct config_file {TYPE_1__ control_ifs; scalar_t__ control_use_cert; int remote_control_enable; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct daemon_remote*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (struct config_file*) ;
 int FUNC_5 (struct daemon_remote*,struct config_file*) ;

struct daemon_remote*
FUNC_6(struct config_file* VAR_0)
{
 struct daemon_remote* VAR_1 = (struct daemon_remote*)FUNC_0(1,
  sizeof(*VAR_1));
 if(!VAR_1) {
  FUNC_2("out of memory in daemon_remote_create");
  return ((void*)0);
 }
 VAR_1->max_active = 10;

 if(!VAR_0->remote_control_enable) {
  VAR_1->ctx = ((void*)0);
  return VAR_1;
 }
 if(FUNC_4(VAR_0) && VAR_0->control_use_cert) {
  if(!FUNC_5(VAR_1, VAR_0)) {
   FUNC_1(VAR_1);
   return ((void*)0);
  }
  VAR_1->use_cert = 1;
 } else {
  struct config_strlist* VAR_2;
  VAR_1->ctx = ((void*)0);
  VAR_1->use_cert = 0;
  if(!FUNC_4(VAR_0))
    for(VAR_2 = VAR_0->control_ifs.first; VAR_2; VAR_2 = VAR_2->next) {
   if(VAR_2->str && VAR_2->str[0] != '/')
    FUNC_3("control-interface %s is not using TLS, but plain transfer, because first control-interface in config file is a local socket (starts with a /).", VAR_2->str);
  }
 }
 return VAR_1;
}
