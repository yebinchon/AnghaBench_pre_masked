
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct queued_listenaddr {int port; int * rdomain; int * addr; } ;
struct TYPE_3__ {scalar_t__ num_queued_listens; struct queued_listenaddr* queued_listen_addrs; } ;
typedef TYPE_1__ ServerOptions ;


 struct queued_listenaddr* FUNC_0 (struct queued_listenaddr*,scalar_t__,scalar_t__,int) ;
 int * FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(ServerOptions *VAR_0, const char *VAR_1,
    const char *VAR_2, int VAR_3)
{
 struct queued_listenaddr *VAR_4;

 VAR_0->queued_listen_addrs = FUNC_0(
     VAR_0->queued_listen_addrs,
     VAR_0->num_queued_listens, VAR_0->num_queued_listens + 1,
     sizeof(*VAR_0->queued_listen_addrs));
 VAR_4 = &VAR_0->queued_listen_addrs[VAR_0->num_queued_listens++];
 VAR_4->addr = FUNC_1(VAR_1);
 VAR_4->port = VAR_3;
 VAR_4->rdomain = VAR_2 == ((void*)0) ? ((void*)0) : FUNC_1(VAR_2);
}
