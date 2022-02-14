
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct ip_vs_sync_mesg_v0 {int nr_conns; } ;
struct ip_vs_sync_conn_v0 {unsigned int protocol; int dport; int daddr; int vport; int vaddr; int cport; int caddr; int state; int flags; } ;
struct ip_vs_sync_conn_options {int dummy; } ;
struct ip_vs_protocol {unsigned int num_states; int name; } ;
struct ip_vs_conn_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int,char*,unsigned int,...) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,unsigned int,union nf_inet_addr const*,int ,union nf_inet_addr const*,int ,struct ip_vs_conn_param*) ;
 int FUNC_3 (struct ip_vs_conn_param*,unsigned int,unsigned int,unsigned int,int ,union nf_inet_addr*,int ,int ,int ,struct ip_vs_sync_conn_options*,struct ip_vs_protocol*) ;
 struct ip_vs_protocol* FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const char *VAR_7, const size_t VAR_8)
{
 struct ip_vs_sync_mesg_v0 *VAR_9 = (struct ip_vs_sync_mesg_v0 *)VAR_7;
 struct ip_vs_sync_conn_v0 *VAR_10;
 struct ip_vs_sync_conn_options *VAR_11;
 struct ip_vs_protocol *VAR_12;
 struct ip_vs_conn_param VAR_13;
 char *VAR_14;
 int VAR_15;

 VAR_14 = (char *)VAR_7 + sizeof(struct ip_vs_sync_mesg_v0);
 for (VAR_15=0; VAR_15<VAR_9->nr_conns; VAR_15++) {
  unsigned VAR_16, VAR_17;

  if (VAR_14 + VAR_6 > VAR_7+VAR_8) {
   FUNC_1("BACKUP v0, bogus conn\n");
   return;
  }
  VAR_10 = (struct ip_vs_sync_conn_v0 *) VAR_14;
  VAR_16 = FUNC_5(VAR_10->flags) | VAR_4;
  VAR_16 &= ~VAR_2;
  if (VAR_16 & VAR_3) {
   VAR_11 = (struct ip_vs_sync_conn_options *)&VAR_10[1];
   VAR_14 += VAR_1;
   if (VAR_14 > VAR_7+VAR_8) {
    FUNC_1("BACKUP v0, Dropping buffer bogus conn options\n");
    return;
   }
  } else {
   VAR_11 = ((void*)0);
   VAR_14 += VAR_6;
  }

  VAR_17 = FUNC_5(VAR_10->state);
  if (!(VAR_16 & VAR_5)) {
   VAR_12 = FUNC_4(VAR_10->protocol);
   if (!VAR_12) {
    FUNC_0(2, "BACKUP v0, Unsupported protocol %u\n",
     VAR_10->protocol);
    continue;
   }
   if (VAR_17 >= VAR_12->num_states) {
    FUNC_0(2, "BACKUP v0, Invalid %s state %u\n",
     VAR_12->name, VAR_17);
    continue;
   }
  } else {

   VAR_12 = ((void*)0);
   if (VAR_17 > 0) {
    FUNC_0(2, "BACKUP v0, Invalid template state %u\n",
     VAR_17);
    VAR_17 = 0;
   }
  }

  FUNC_2(VAR_0, VAR_10->protocol,
          (const union nf_inet_addr *)&VAR_10->caddr,
          VAR_10->cport,
          (const union nf_inet_addr *)&VAR_10->vaddr,
          VAR_10->vport, &VAR_13);


  FUNC_3(&VAR_13, VAR_16, VAR_17, VAR_10->protocol, VAR_0,
    (union nf_inet_addr *)&VAR_10->daddr, VAR_10->dport,
    0, 0, VAR_11, VAR_12);
 }
}
