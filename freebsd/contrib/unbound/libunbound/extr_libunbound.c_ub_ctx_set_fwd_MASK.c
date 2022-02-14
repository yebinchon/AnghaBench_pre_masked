
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ub_ctx {int cfglock; TYPE_2__* env; scalar_t__ finalized; } ;
struct sockaddr_storage {int dummy; } ;
struct config_stub {int addrs; struct config_stub* next; void* name; } ;
typedef int socklen_t ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {struct config_stub* forwards; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct config_stub* FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct config_stub*) ;
 int VAR_6 ;
 int FUNC_3 (char const*,struct sockaddr_storage*,int *) ;
 int FUNC_4 (struct config_stub*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct config_stub*) ;
 scalar_t__ FUNC_8 (void*,char*) ;
 void* FUNC_9 (char const*) ;

int
FUNC_10(struct ub_ctx* VAR_7, const char* VAR_8)
{
 struct sockaddr_storage VAR_9;
 socklen_t VAR_10;
 struct config_stub* VAR_11;
 char* VAR_12;
 FUNC_5(&VAR_7->cfglock);
 if(VAR_7->finalized) {
  FUNC_6(&VAR_7->cfglock);
  VAR_6=VAR_0;
  return VAR_2;
 }
 if(!VAR_8) {

  if(VAR_7->env->cfg->forwards &&
   FUNC_8(VAR_7->env->cfg->forwards->name, ".") == 0) {
   VAR_11 = VAR_7->env->cfg->forwards;
   VAR_7->env->cfg->forwards = VAR_11->next;
   VAR_11->next = ((void*)0);
   FUNC_2(VAR_11);
  }
  FUNC_6(&VAR_7->cfglock);
  return VAR_3;
 }
 FUNC_6(&VAR_7->cfglock);


 if(!FUNC_3(VAR_8, &VAR_9, &VAR_10)) {
  VAR_6=VAR_0;
  return VAR_5;
 }


 FUNC_5(&VAR_7->cfglock);
 if(!VAR_7->env->cfg->forwards ||
  FUNC_8(VAR_7->env->cfg->forwards->name, ".") != 0) {
  VAR_11 = FUNC_0(1, sizeof(*VAR_11));
  if(!VAR_11) {
   FUNC_6(&VAR_7->cfglock);
   VAR_6=VAR_1;
   return VAR_4;
  }
  VAR_11->name = FUNC_9(".");
  if(!VAR_11->name) {
   FUNC_4(VAR_11);
   FUNC_6(&VAR_7->cfglock);
   VAR_6=VAR_1;
   return VAR_4;
  }
  VAR_11->next = VAR_7->env->cfg->forwards;
  VAR_7->env->cfg->forwards = VAR_11;
 } else {
  FUNC_7(VAR_7->env->cfg->forwards);
  VAR_11 = VAR_7->env->cfg->forwards;
 }
 VAR_12 = FUNC_9(VAR_8);
 if(!VAR_12) {
  FUNC_6(&VAR_7->cfglock);
  VAR_6=VAR_1;
  return VAR_4;
 }
 if(!FUNC_1(&VAR_11->addrs, VAR_12)) {
  FUNC_6(&VAR_7->cfglock);
  VAR_6=VAR_1;
  return VAR_4;
 }
 FUNC_6(&VAR_7->cfglock);
 return VAR_3;
}
