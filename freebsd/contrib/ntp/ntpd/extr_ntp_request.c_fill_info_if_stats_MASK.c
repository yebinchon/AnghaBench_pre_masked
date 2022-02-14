
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {void* addr; void* addr6; } ;
struct TYPE_8__ {void* addr; void* addr6; } ;
struct TYPE_7__ {void* addr; void* addr6; } ;
struct info_if_stats {int v6_flag; int action; void* peercnt; int ignore_packets; void* uptime; void* ifnum; void* ifindex; void* scopeid; void* notsent; void* sent; void* received; void* num_mcast; void* last_ttl; void* flags; int family; int name; TYPE_3__ unmask; TYPE_2__ unbcast; TYPE_1__ unaddr; } ;
struct TYPE_10__ {int action; TYPE_5__* ep; } ;
typedef TYPE_4__ interface_info_t ;
struct TYPE_11__ {int flags; int last_ttl; int num_mcast; int received; int sent; int notsent; int ifindex; int ifnum; int starttime; int peercnt; int ignore_packets; int family; int name; int mask; int bcast; int sin; } ;
typedef TYPE_5__ endpt ;


 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (struct info_if_stats) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2, interface_info_t *VAR_3)
{
 struct info_if_stats **VAR_4 = (struct info_if_stats **)VAR_2;
 struct info_if_stats *VAR_5 = *VAR_4;
 endpt *VAR_6 = VAR_3->ep;

 if (((void*)0) == VAR_5)
  return;

 FUNC_3(*VAR_5);

 if (FUNC_0(&VAR_6->sin)) {
  if (!VAR_0)
   return;
  VAR_5->v6_flag = 1;
  VAR_5->unaddr.addr6 = FUNC_2(&VAR_6->sin);
  VAR_5->unbcast.addr6 = FUNC_2(&VAR_6->bcast);
  VAR_5->unmask.addr6 = FUNC_2(&VAR_6->mask);
 } else {
  VAR_5->v6_flag = 0;
  VAR_5->unaddr.addr = FUNC_1(&VAR_6->sin);
  VAR_5->unbcast.addr = FUNC_1(&VAR_6->bcast);
  VAR_5->unmask.addr = FUNC_1(&VAR_6->mask);
 }
 VAR_5->v6_flag = FUNC_4(VAR_5->v6_flag);
 FUNC_7(VAR_5->name, VAR_6->name, sizeof(VAR_5->name));
 VAR_5->family = FUNC_5(VAR_6->family);
 VAR_5->flags = FUNC_4(VAR_6->flags);
 VAR_5->last_ttl = FUNC_4(VAR_6->last_ttl);
 VAR_5->num_mcast = FUNC_4(VAR_6->num_mcast);
 VAR_5->received = FUNC_4(VAR_6->received);
 VAR_5->sent = FUNC_4(VAR_6->sent);
 VAR_5->notsent = FUNC_4(VAR_6->notsent);
 VAR_5->ifindex = FUNC_4(VAR_6->ifindex);

 VAR_5->scopeid = VAR_5->ifindex;
 VAR_5->ifnum = FUNC_4(VAR_6->ifnum);
 VAR_5->uptime = FUNC_4(VAR_1 - VAR_6->starttime);
 VAR_5->ignore_packets = VAR_6->ignore_packets;
 VAR_5->peercnt = FUNC_4(VAR_6->peercnt);
 VAR_5->action = VAR_3->action;

 *VAR_4 = (struct info_if_stats *)FUNC_6();
}
