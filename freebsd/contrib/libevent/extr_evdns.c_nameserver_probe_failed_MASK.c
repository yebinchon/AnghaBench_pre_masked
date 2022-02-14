
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct sockaddr {int dummy; } ;
struct nameserver {int state; int failed_times; int address; int timeout_event; TYPE_1__* base; } ;
typedef int addrbuf ;
struct TYPE_2__ {int global_nameserver_probe_initial_timeout; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,struct timeval*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sockaddr*,char*,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct timeval*,int *,int) ;

__attribute__((used)) static void
FUNC_6(struct nameserver *const VAR_3) {
 struct timeval VAR_4;
 int VAR_5;

 FUNC_0(VAR_3->base);
 (void) FUNC_2(&VAR_3->timeout_event);
 if (VAR_3->state == 1) {


  return;
 }




 FUNC_5(&VAR_4, &VAR_3->base->global_nameserver_probe_initial_timeout,
     sizeof(struct timeval));
 for (VAR_5=VAR_3->failed_times; VAR_5 > 0 && VAR_4.tv_sec < 3600; --VAR_5) {
  VAR_4.tv_sec *= 3;
  VAR_4.tv_usec *= 3;
  if (VAR_4.tv_usec > 1000000) {
   VAR_4.tv_sec += VAR_4.tv_usec / 1000000;
   VAR_4.tv_usec %= 1000000;
  }
 }
 if (VAR_4.tv_sec > 3600) {
  VAR_4.tv_sec = 3600;
  VAR_4.tv_usec = 0;
 }

 VAR_3->failed_times++;

 if (FUNC_1(&VAR_3->timeout_event, &VAR_4) < 0) {
  char VAR_6[128];
  FUNC_4(VAR_0,
      "Error from libevent when adding timer event for %s",
      FUNC_3(
       (struct sockaddr *)&VAR_3->address,
       VAR_6, sizeof(VAR_6)));
 }
}
