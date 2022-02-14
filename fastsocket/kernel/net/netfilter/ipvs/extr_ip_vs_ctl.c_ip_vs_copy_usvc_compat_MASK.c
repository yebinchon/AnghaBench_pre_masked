
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ip; } ;
struct ip_vs_service_user_kern {int netmask; int timeout; int flags; int sched_name; int fwmark; int port; TYPE_1__ addr; int protocol; int af; } ;
struct ip_vs_service_user {int netmask; int timeout; int flags; int sched_name; int fwmark; int port; int addr; int protocol; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip_vs_service_user_kern*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ip_vs_service_user_kern *VAR_1,
      struct ip_vs_service_user *VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->af = VAR_0;
 VAR_1->protocol = VAR_2->protocol;
 VAR_1->addr.ip = VAR_2->addr;
 VAR_1->port = VAR_2->port;
 VAR_1->fwmark = VAR_2->fwmark;


 VAR_1->sched_name = VAR_2->sched_name;

 VAR_1->flags = VAR_2->flags;
 VAR_1->timeout = VAR_2->timeout;
 VAR_1->netmask = VAR_2->netmask;
}
