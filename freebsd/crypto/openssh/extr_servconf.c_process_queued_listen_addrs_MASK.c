
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct queued_listenaddr {struct queued_listenaddr* rdomain; struct queued_listenaddr* addr; int port; } ;
struct TYPE_4__ {scalar_t__ num_ports; int address_family; size_t num_queued_listens; struct queued_listenaddr* queued_listen_addrs; int * ports; } ;
typedef TYPE_1__ ServerOptions ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct queued_listenaddr*,struct queued_listenaddr*,int ) ;
 int FUNC_1 (struct queued_listenaddr*) ;

__attribute__((used)) static void
FUNC_2(ServerOptions *VAR_2)
{
 u_int VAR_3;
 struct queued_listenaddr *VAR_4;

 if (VAR_2->num_ports == 0)
  VAR_2->ports[VAR_2->num_ports++] = VAR_1;
 if (VAR_2->address_family == -1)
  VAR_2->address_family = VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_queued_listens; VAR_3++) {
  VAR_4 = &VAR_2->queued_listen_addrs[VAR_3];
  FUNC_0(VAR_2, VAR_4->addr, VAR_4->rdomain, VAR_4->port);
  FUNC_1(VAR_4->addr);
  FUNC_1(VAR_4->rdomain);
 }
 FUNC_1(VAR_2->queued_listen_addrs);
 VAR_2->queued_listen_addrs = ((void*)0);
 VAR_2->num_queued_listens = 0;
}
