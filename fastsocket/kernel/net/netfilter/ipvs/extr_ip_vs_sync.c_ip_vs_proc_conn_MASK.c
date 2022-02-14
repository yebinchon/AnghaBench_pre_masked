
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct ip_vs_sync_conn_options {int dummy; } ;
struct ip_vs_protocol {unsigned long* timeout_table; } ;
struct ip_vs_dest {int refcnt; int inactconns; int activeconns; } ;
struct ip_vs_conn_param {scalar_t__ pe_data; int vport; int vaddr; } ;
struct ip_vs_conn {unsigned int flags; unsigned int state; unsigned int old_state; unsigned long timeout; int in_pkts; int in_seq; struct ip_vs_dest* dest; } ;
typedef int __u32 ;
typedef int __be16 ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,char*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct ip_vs_conn* FUNC_4 (struct ip_vs_conn_param*) ;
 struct ip_vs_conn* FUNC_5 (struct ip_vs_conn_param*,union nf_inet_addr const*,int ,unsigned int,struct ip_vs_dest*,int ) ;
 int FUNC_6 (struct ip_vs_conn*) ;
 struct ip_vs_conn* FUNC_7 (struct ip_vs_conn_param*) ;
 struct ip_vs_dest* FUNC_8 (unsigned int,union nf_inet_addr const*,int ,int ,int ,unsigned int,int ,unsigned int) ;
 struct ip_vs_dest* FUNC_9 (struct ip_vs_conn*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,struct ip_vs_sync_conn_options*,int) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(struct ip_vs_conn_param *VAR_5, unsigned VAR_6,
       unsigned VAR_7, unsigned VAR_8, unsigned VAR_9,
       const union nf_inet_addr *VAR_10, __be16 VAR_11,
       unsigned long VAR_12, __u32 VAR_13,
       struct ip_vs_sync_conn_options *VAR_14,
       struct ip_vs_protocol *VAR_15)
{
 struct ip_vs_dest *VAR_16;
 struct ip_vs_conn *VAR_17;


 if (!(VAR_6 & VAR_3))
  VAR_17 = FUNC_4(VAR_5);
 else
  VAR_17 = FUNC_7(VAR_5);

 if (VAR_17) {

  FUNC_10(VAR_5->pe_data);

  VAR_16 = VAR_17->dest;
  if ((VAR_17->flags ^ VAR_6) & VAR_2 &&
      !(VAR_6 & VAR_3) && VAR_16) {
   if (VAR_6 & VAR_2) {
    FUNC_1(&VAR_16->activeconns);
    FUNC_2(&VAR_16->inactconns);
   } else {
    FUNC_2(&VAR_16->activeconns);
    FUNC_1(&VAR_16->inactconns);
   }
  }
  VAR_6 &= VAR_1;
  VAR_6 |= VAR_17->flags & ~VAR_1;
  VAR_17->flags = VAR_6;
  if (!VAR_16) {
   VAR_16 = FUNC_9(VAR_17);
   if (VAR_16)
    FUNC_1(&VAR_16->refcnt);
  }
 } else {





  VAR_16 = FUNC_8(VAR_9, VAR_10, VAR_11, VAR_5->vaddr,
           VAR_5->vport, VAR_8, VAR_13, VAR_6);

  VAR_17 = FUNC_5(VAR_5, VAR_10, VAR_11, VAR_6, VAR_16, VAR_13);
  if (VAR_16)
   FUNC_1(&VAR_16->refcnt);
  if (!VAR_17) {
   if (VAR_5->pe_data)
    FUNC_10(VAR_5->pe_data);
   FUNC_0(2, "BACKUP, add new conn. failed\n");
   return;
  }
 }

 if (VAR_14)
  FUNC_11(&VAR_17->in_seq, VAR_14, sizeof(*VAR_14));
 FUNC_3(&VAR_17->in_pkts, FUNC_12());
 VAR_17->state = VAR_7;
 VAR_17->old_state = VAR_17->state;
 if (VAR_12) {
  if (VAR_12 > VAR_4 / VAR_0)
   VAR_12 = VAR_4 / VAR_0;
  VAR_17->timeout = VAR_12*VAR_0;
 } else if (!(VAR_6 & VAR_3) && VAR_15->timeout_table)
  VAR_17->timeout = VAR_15->timeout_table[VAR_7];
 else
  VAR_17->timeout = (3*60*VAR_0);
 FUNC_6(VAR_17);
}
