
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct pfsync_state_peer {int dummy; } ;
struct pfsync_state_key {scalar_t__* port; int * addr; } ;
struct pfsync_state {scalar_t__ direction; int creation; int expire; int anchor; int rule; int creatorid; int id; int ** bytes; int ** packets; int proto; int af; int ifname; struct pfsync_state_key* key; struct pfsync_state_peer src; struct pfsync_state_peer dst; } ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int *,scalar_t__,int ,int *) ;
 int FUNC_6 (TYPE_1__*,struct pfsync_state_peer*,struct pfsync_state_peer*,int ) ;

__attribute__((used)) static void
FUNC_7(netdissect_options *VAR_5, struct pfsync_state *VAR_6)
{
 struct pfsync_state_peer *VAR_7, *VAR_8;
 struct pfsync_state_key *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_6->direction == VAR_2) {
  VAR_7 = &VAR_6->src;
  VAR_8 = &VAR_6->dst;
  VAR_9 = &VAR_6->key[VAR_3];
  VAR_10 = &VAR_6->key[VAR_4];
  if (VAR_6->proto == VAR_0 || VAR_6->proto == VAR_1)
   VAR_9->port[0] = VAR_10->port[0];
 } else {
  VAR_7 = &VAR_6->dst;
  VAR_8 = &VAR_6->src;
  VAR_9 = &VAR_6->key[VAR_4];
  VAR_10 = &VAR_6->key[VAR_3];
  if (VAR_6->proto == VAR_0 || VAR_6->proto == VAR_1)
   VAR_9->port[1] = VAR_10->port[1];
 }
 FUNC_0((VAR_5, "\t%s ", VAR_6->ifname));
 FUNC_0((VAR_5, "proto %u ", VAR_6->proto));

 FUNC_5(VAR_5, &VAR_10->addr[1], VAR_10->port[1], VAR_6->af, ((void*)0));
 if (FUNC_1(&VAR_10->addr[1], &VAR_9->addr[1], VAR_6->af) ||
     VAR_10->port[1] != VAR_9->port[1]) {
  FUNC_0((VAR_5, " ("));
  FUNC_5(VAR_5, &VAR_9->addr[1], VAR_9->port[1], VAR_6->af, ((void*)0));
  FUNC_0((VAR_5, ")"));
 }
 if (VAR_6->direction == VAR_2)
  FUNC_0((VAR_5, " -> "));
 else
  FUNC_0((VAR_5, " <- "));
 FUNC_5(VAR_5, &VAR_10->addr[0], VAR_10->port[0], VAR_6->af, ((void*)0));
 if (FUNC_1(&VAR_10->addr[0], &VAR_9->addr[0], VAR_6->af) ||
     VAR_10->port[0] != VAR_9->port[0]) {
  FUNC_0((VAR_5, " ("));
  FUNC_5(VAR_5, &VAR_9->addr[0], VAR_9->port[0], VAR_6->af, ((void*)0));
  FUNC_0((VAR_5, ")"));
 }

 FUNC_6(VAR_5, VAR_7, VAR_8, VAR_6->proto);

 if (VAR_5->ndo_vflag > 1) {
  uint64_t VAR_13[2];
  uint64_t VAR_14[2];
  uint32_t VAR_15 = FUNC_4(VAR_6->creation);
  uint32_t VAR_16 = FUNC_4(VAR_6->expire);

  VAR_12 = VAR_15 % 60;
  VAR_15 /= 60;
  VAR_11 = VAR_15 % 60;
  VAR_15 /= 60;
  FUNC_0((VAR_5, "\n\tage %.2u:%.2u:%.2u", VAR_15, VAR_11, VAR_12));
  VAR_12 = VAR_16 % 60;
  VAR_16 /= 60;
  VAR_11 = VAR_16 % 60;
  VAR_16 /= 60;
  FUNC_0((VAR_5, ", expires in %.2u:%.2u:%.2u", VAR_16, VAR_11, VAR_12));

  FUNC_2(VAR_6->packets[0], &VAR_13[0], sizeof(uint64_t));
  FUNC_2(VAR_6->packets[1], &VAR_13[1], sizeof(uint64_t));
  FUNC_2(VAR_6->bytes[0], &VAR_14[0], sizeof(uint64_t));
  FUNC_2(VAR_6->bytes[1], &VAR_14[1], sizeof(uint64_t));
  FUNC_0((VAR_5, ", %ju:%ju pkts, %ju:%ju bytes",
      FUNC_3(VAR_13[0]), FUNC_3(VAR_13[1]),
      FUNC_3(VAR_14[0]), FUNC_3(VAR_14[1])));
  if (VAR_6->anchor != FUNC_4(-1))
   FUNC_0((VAR_5, ", anchor %u", FUNC_4(VAR_6->anchor)));
  if (VAR_6->rule != FUNC_4(-1))
   FUNC_0((VAR_5, ", rule %u", FUNC_4(VAR_6->rule)));
 }
 if (VAR_5->ndo_vflag > 1) {
  uint64_t VAR_17;

  FUNC_2(&VAR_6->id, &VAR_17, sizeof(uint64_t));
  FUNC_0((VAR_5, "\n\tid: %016jx creatorid: %08x",
      (uintmax_t )FUNC_3(VAR_17), FUNC_4(VAR_6->creatorid)));
 }
}
