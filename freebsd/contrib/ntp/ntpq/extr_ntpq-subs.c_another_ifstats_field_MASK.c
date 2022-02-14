
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int ifnum; char* name; int flags; int ttl; int mcast_count; int received; int sent; int send_errors; int peer_count; int uptime; int bcast; int addr; scalar_t__ enabled; } ;
typedef TYPE_1__ ifstats_row ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int *,char*,...) ;
 char* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(
 int * VAR_1,
 ifstats_row * VAR_2,
 FILE * VAR_3
 )
{
 u_int VAR_4;

 (*VAR_1)++;

 if (VAR_0 > *VAR_1)
  return;





 FUNC_2(VAR_3,
  "%3u %-24.24s %c %4x %3u %2u %6u %6u %6u %5u %8d\n"
  "    %s\n",
  VAR_2->ifnum, VAR_2->name,
  (VAR_2->enabled)
      ? '.'
      : 'D',
  VAR_2->flags, VAR_2->ttl, VAR_2->mcast_count,
  VAR_2->received, VAR_2->sent, VAR_2->send_errors,
  VAR_2->peer_count, VAR_2->uptime, FUNC_3(&VAR_2->addr));
 if (!FUNC_0(&VAR_2->bcast))
  FUNC_2(VAR_3, "    %s\n", FUNC_3(&VAR_2->bcast));
 VAR_4 = VAR_2->ifnum;
 FUNC_1(*VAR_2);
 VAR_2->ifnum = VAR_4;
}
