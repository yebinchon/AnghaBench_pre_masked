
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct ip_vs_protocol {int * timeout_table; int name; } ;
struct ip_vs_dest {int inactconns; int activeconns; } ;
struct ip_vs_conn {scalar_t__ af; size_t state; int flags; int timeout; int refcnt; int cport; int caddr; int dport; int daddr; struct ip_vs_dest* dest; } ;
typedef int sctp_sctphdr_t ;
struct TYPE_5__ {unsigned char type; int length; } ;
typedef TYPE_1__ sctp_chunkhdr_t ;
typedef int _sctpch ;
struct TYPE_6__ {int next_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int,char*,int ,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff const*) ;
 int FUNC_6 (int ) ;
 int* VAR_7 ;
 int FUNC_7 (int) ;
 TYPE_4__** VAR_8 ;
 TYPE_1__* FUNC_8 (struct sk_buff const*,int,int,TYPE_1__*) ;

__attribute__((used)) static inline int
FUNC_9(struct ip_vs_protocol *VAR_9, struct ip_vs_conn *VAR_10,
  int VAR_11, const struct sk_buff *VAR_12)
{
 sctp_chunkhdr_t VAR_13, *VAR_14;
 unsigned char VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;




 VAR_18 = FUNC_5(VAR_12);


 VAR_14 = FUNC_8(VAR_12, VAR_18 + sizeof(sctp_sctphdr_t),
    sizeof(VAR_13), &VAR_13);
 if (VAR_14 == ((void*)0))
  return 0;

 VAR_15 = VAR_14->type;
 if ((VAR_14->type == VAR_6) ||
     (VAR_14->type == VAR_5)) {
  VAR_14 = FUNC_8(VAR_12, (VAR_18 + sizeof(sctp_sctphdr_t) +
    VAR_14->length), sizeof(VAR_13), &VAR_13);
  if (VAR_14) {
   if (VAR_14->type == VAR_4)
    VAR_15 = VAR_14->type;
  }
 }

 VAR_16 = VAR_7[VAR_15];




 if (VAR_11 == VAR_2)
  VAR_16++;



 VAR_17 = VAR_8[VAR_10->state][VAR_16].next_state;

 if (VAR_17 != VAR_10->state) {
  struct ip_vs_dest *VAR_19 = VAR_10->dest;

  FUNC_1(8, "%s %s  %s:%d->"
    "%s:%d state: %s->%s conn->refcnt:%d\n",
    VAR_9->name,
    ((VAR_11 == VAR_2) ?
     "output " : "input "),
    FUNC_0(VAR_10->af, &VAR_10->daddr),
    FUNC_6(VAR_10->dport),
    FUNC_0(VAR_10->af, &VAR_10->caddr),
    FUNC_6(VAR_10->cport),
    FUNC_7(VAR_10->state),
    FUNC_7(VAR_17),
    FUNC_4(&VAR_10->refcnt));
  if (VAR_19) {
   if (!(VAR_10->flags & VAR_1) &&
    (VAR_17 != VAR_3)) {
    FUNC_2(&VAR_19->activeconns);
    FUNC_3(&VAR_19->inactconns);
    VAR_10->flags |= VAR_1;
   } else if ((VAR_10->flags & VAR_1) &&
       (VAR_17 == VAR_3)) {
    FUNC_3(&VAR_19->activeconns);
    FUNC_2(&VAR_19->inactconns);
    VAR_10->flags &= ~VAR_1;
   }
  }
 }

  VAR_10->timeout = VAR_9->timeout_table[VAR_10->state = VAR_17];

  return 1;
}
