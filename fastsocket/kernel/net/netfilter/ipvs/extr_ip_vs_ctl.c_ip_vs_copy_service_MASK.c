
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip_vs_service_entry {int timeout; int stats; int num_dests; int netmask; int flags; int sched_name; int fwmark; int port; int addr; int protocol; } ;
struct TYPE_3__ {int ip; } ;
struct ip_vs_service {int timeout; int stats; int num_dests; int netmask; int flags; TYPE_2__* scheduler; int fwmark; int port; TYPE_1__ addr; int protocol; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ip_vs_service_entry *VAR_1, struct ip_vs_service *VAR_2)
{
 VAR_1->protocol = VAR_2->protocol;
 VAR_1->addr = VAR_2->addr.ip;
 VAR_1->port = VAR_2->port;
 VAR_1->fwmark = VAR_2->fwmark;
 FUNC_1(VAR_1->sched_name, VAR_2->scheduler->name, sizeof(VAR_1->sched_name));
 VAR_1->flags = VAR_2->flags;
 VAR_1->timeout = VAR_2->timeout / VAR_0;
 VAR_1->netmask = VAR_2->netmask;
 VAR_1->num_dests = VAR_2->num_dests;
 FUNC_0(&VAR_1->stats, &VAR_2->stats);
}
