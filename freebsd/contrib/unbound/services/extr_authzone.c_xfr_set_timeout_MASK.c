
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct module_env {scalar_t__* now; int * worker; int worker_base; } ;
struct auth_xfer {scalar_t__ lease_time; scalar_t__ refresh; scalar_t__ retry; scalar_t__ expiry; TYPE_2__* task_nextprobe; int name; TYPE_1__* task_probe; scalar_t__ have_zone; } ;
struct TYPE_4__ {scalar_t__ next_probe; int backoff; scalar_t__ timer; struct module_env* env; int * worker; } ;
struct TYPE_3__ {int only_lookup; int * worker; scalar_t__ masters; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,struct auth_xfer*) ;
 int FUNC_1 (scalar_t__,struct timeval*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (scalar_t__,char*,char*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_6(struct auth_xfer* VAR_4, struct module_env* VAR_5,
 int VAR_6, int VAR_7)
{
 struct timeval VAR_8;
 FUNC_3(VAR_4->task_nextprobe != ((void*)0));
 FUNC_3(VAR_4->task_nextprobe->worker == ((void*)0) ||
  VAR_4->task_nextprobe->worker == VAR_5->worker);



 VAR_4->task_nextprobe->next_probe = *VAR_5->now;
 if(VAR_4->lease_time && !VAR_6)
  VAR_4->task_nextprobe->next_probe = VAR_4->lease_time;

 if(!VAR_6) {
  VAR_4->task_nextprobe->backoff = 0;
 } else {
  if(VAR_4->task_nextprobe->backoff == 0)
    VAR_4->task_nextprobe->backoff = 3;
  else VAR_4->task_nextprobe->backoff *= 2;
  if(VAR_4->task_nextprobe->backoff > VAR_0)
   VAR_4->task_nextprobe->backoff =
    VAR_0;
 }

 if(VAR_4->have_zone) {
  time_t VAR_9 = VAR_4->refresh;
  if(VAR_6) VAR_9 = VAR_4->retry;
  if(VAR_4->expiry < VAR_9)
   VAR_4->task_nextprobe->next_probe += VAR_4->expiry;
  else VAR_4->task_nextprobe->next_probe += VAR_9;
  if(VAR_6)
   VAR_4->task_nextprobe->next_probe +=
    VAR_4->task_nextprobe->backoff;

  if(VAR_4->lease_time && VAR_4->lease_time+VAR_4->expiry <
   VAR_4->task_nextprobe->next_probe &&
   VAR_4->lease_time+VAR_4->expiry > *VAR_5->now)
   VAR_4->task_nextprobe->next_probe =
    VAR_4->lease_time+VAR_4->expiry;
 } else {
  VAR_4->task_nextprobe->next_probe +=
   VAR_4->task_nextprobe->backoff;
 }

 if(!VAR_4->task_nextprobe->timer) {
  VAR_4->task_nextprobe->timer = FUNC_0(
   VAR_5->worker_base, VAR_2, VAR_4);
  if(!VAR_4->task_nextprobe->timer) {


   char VAR_10[255+1];
   FUNC_2(VAR_4->name, VAR_10);
   FUNC_4("cannot allocate timer, no refresh for %s",
    VAR_10);
   return;
  }
 }
 VAR_4->task_nextprobe->worker = VAR_5->worker;
 VAR_4->task_nextprobe->env = VAR_5;
 if(*(VAR_4->task_nextprobe->env->now) <= VAR_4->task_nextprobe->next_probe)
  VAR_8.tv_sec = VAR_4->task_nextprobe->next_probe -
   *(VAR_4->task_nextprobe->env->now);
 else VAR_8.tv_sec = 0;
 if(VAR_8.tv_sec != 0 && VAR_7 && VAR_4->task_probe->masters) {


  VAR_8.tv_sec = 0;
  if(VAR_4->task_probe && VAR_4->task_probe->worker == ((void*)0))
   VAR_4->task_probe->only_lookup = 1;
 }
 if(VAR_3 >= VAR_1) {
  char VAR_11[255+1];
  FUNC_2(VAR_4->name, VAR_11);
  FUNC_5(VAR_1, "auth zone %s timeout in %d seconds",
   VAR_11, (int)VAR_8.tv_sec);
 }
 VAR_8.tv_usec = 0;
 FUNC_1(VAR_4->task_nextprobe->timer, &VAR_8);
}
