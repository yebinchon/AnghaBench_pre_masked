
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct nameserver {int state; TYPE_1__* base; scalar_t__ timedout; scalar_t__ failed_times; int * probe_request; int timeout_event; int address; } ;
typedef int addrbuf ;
struct TYPE_3__ {int global_good_nameservers; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sockaddr*,char*,int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_5(struct nameserver *const VAR_1)
{
 char VAR_2[128];
 FUNC_0(VAR_1->base);
 if (VAR_1->state) return;
 FUNC_4(VAR_0, "Nameserver %s is back up",
     FUNC_3(
      (struct sockaddr *)&VAR_1->address,
      VAR_2, sizeof(VAR_2)));
 FUNC_2(&VAR_1->timeout_event);
 if (VAR_1->probe_request) {
  FUNC_1(VAR_1->base, VAR_1->probe_request);
  VAR_1->probe_request = ((void*)0);
 }
 VAR_1->state = 1;
 VAR_1->failed_times = 0;
 VAR_1->timedout = 0;
 VAR_1->base->global_good_nameservers++;
}
