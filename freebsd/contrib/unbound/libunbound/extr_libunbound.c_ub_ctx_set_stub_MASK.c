
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct config_stub {int isprime; int addrs; struct config_stub* next; void* name; } ;
typedef struct config_stub uint8_t ;
struct ub_ctx {int cfglock; TYPE_2__* env; scalar_t__ finalized; } ;
struct sockaddr_storage {int dummy; } ;
typedef int socklen_t ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {struct config_stub* stubs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*) ;
 struct config_stub* FUNC_2 (struct config_stub***,char const*) ;
 int FUNC_3 (struct config_stub*) ;
 int VAR_6 ;
 int FUNC_4 (char const*,struct sockaddr_storage*,int *) ;
 int FUNC_5 (struct config_stub*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,struct config_stub**,size_t*,int*) ;
 void* FUNC_9 (char const*) ;

int FUNC_10(struct ub_ctx* VAR_7, const char* VAR_8, const char* VAR_9,
 int VAR_10)
{
 char* VAR_11;
 struct config_stub **VAR_12, *VAR_13;


 if(VAR_8) {
  uint8_t* VAR_14;
  int VAR_15;
  size_t VAR_16;
  if(!FUNC_8(VAR_8, &VAR_14, &VAR_16, &VAR_15)) {
   VAR_6=VAR_0;
   return VAR_5;
  }
  FUNC_5(VAR_14);
 } else {
  VAR_8 = ".";
 }


 if(VAR_9) {
  struct sockaddr_storage VAR_17;
  socklen_t VAR_18;
  if(!FUNC_4(VAR_9, &VAR_17, &VAR_18)) {
   VAR_6=VAR_0;
   return VAR_5;
  }
 }

 FUNC_6(&VAR_7->cfglock);
 if(VAR_7->finalized) {
  FUNC_7(&VAR_7->cfglock);
  VAR_6=VAR_0;
  return VAR_2;
 }


 VAR_12 = &VAR_7->env->cfg->stubs;
 VAR_13 = FUNC_2(&VAR_12, VAR_8);
 if(!VAR_13 && !VAR_9) {

  FUNC_7(&VAR_7->cfglock);
  return VAR_3;
 } else if(VAR_13 && !VAR_9) {

  *VAR_12 = VAR_13->next;
  FUNC_3(VAR_13);
  FUNC_7(&VAR_7->cfglock);
  return VAR_3;
 } else if(!VAR_13) {

  VAR_13=(struct config_stub*)FUNC_0(1, sizeof(struct config_stub));
  if(VAR_13) VAR_13->name = FUNC_9(VAR_8);
  if(!VAR_13 || !VAR_13->name) {
   FUNC_5(VAR_13);
   FUNC_7(&VAR_7->cfglock);
   VAR_6 = VAR_1;
   return VAR_4;
  }
  VAR_13->next = VAR_7->env->cfg->stubs;
  VAR_7->env->cfg->stubs = VAR_13;
 }


 VAR_13->isprime = VAR_10;
 VAR_11 = FUNC_9(VAR_9);
 if(!VAR_11) {
  FUNC_7(&VAR_7->cfglock);
  VAR_6 = VAR_1;
  return VAR_4;
 }
 if(!FUNC_1(&VAR_13->addrs, VAR_11)) {
  FUNC_7(&VAR_7->cfglock);
  VAR_6 = VAR_1;
  return VAR_4;
 }
 FUNC_7(&VAR_7->cfglock);
 return VAR_3;
}
