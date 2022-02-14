
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int daddr; int vaddr; int caddr; void* timeout; void* fwmark; int dport; int vport; int cport; int protocol; void* state; void* flags; void* ver_size; int type; } ;
struct TYPE_11__ {int daddr; int vaddr; int caddr; } ;
union ip_vs_sync_conn {TYPE_5__ v4; TYPE_2__ v6; } ;
struct ip_vs_sync_v6 {int dummy; } ;
struct ip_vs_sync_v4 {int dummy; } ;
struct ip_vs_sync_mesg {unsigned int size; int nr_conns; } ;
struct ip_vs_sync_conn_options {int dummy; } ;
struct ip_vs_seq {int dummy; } ;
struct TYPE_15__ {int ip; int in6; } ;
struct TYPE_13__ {int ip; int in6; } ;
struct TYPE_12__ {int ip; int in6; } ;
struct ip_vs_conn {int flags; int pe_data_len; scalar_t__ af; unsigned int state; int fwmark; int timeout; int in_pkts; struct ip_vs_conn* control; TYPE_1__* pe; int pe_data; int out_seq; int in_seq; TYPE_6__ daddr; TYPE_4__ vaddr; TYPE_3__ caddr; int dport; int vport; int cport; int protocol; int dest; } ;
typedef int __u8 ;
struct TYPE_16__ {scalar_t__ head; scalar_t__ end; struct ip_vs_sync_mesg* mesg; } ;
struct TYPE_10__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_1 (int,int *) ;
 TYPE_7__* VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct ip_vs_seq*,int *) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (unsigned int) ;
 TYPE_7__* FUNC_5 () ;
 int FUNC_6 (struct ip_vs_conn*,int) ;
 int FUNC_7 (struct ip_vs_conn*,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,unsigned int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 unsigned int FUNC_14 (int ,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_15 () ;

void FUNC_16(struct ip_vs_conn *VAR_15, int VAR_16)
{
 struct ip_vs_sync_mesg *VAR_17;
 union ip_vs_sync_conn *VAR_18;
 __u8 *VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22;


 if (VAR_14 == 0) {
  FUNC_7(VAR_15, VAR_16);
  return;
 }

 if (VAR_15->flags & VAR_6)
  goto control;
sloop:
 if (!FUNC_6(VAR_15, VAR_16))
  goto control;


 VAR_21 = 0;
 if (VAR_15->pe_data_len) {
  if (!VAR_15->pe_data || !VAR_15->dest) {
   FUNC_0("SYNC, connection pe_data invalid\n");
   return;
  }
  VAR_21 = FUNC_14(VAR_15->pe->name, VAR_9);
 }

 FUNC_12(&VAR_13);






  VAR_20 = sizeof(struct ip_vs_sync_v4);

 if (VAR_15->flags & VAR_7)
  VAR_20 += sizeof(struct ip_vs_sync_conn_options) + 2;

 if (VAR_15->pe_data_len)
  VAR_20 += VAR_15->pe_data_len + 2;
 if (VAR_21)
  VAR_20 += VAR_21 + 2;


 VAR_22 = 0;
 if (VAR_12) {
  VAR_22 = (4 - (size_t)VAR_12->head) & 3;
  if (VAR_12->head + VAR_20 + VAR_22 > VAR_12->end) {
   FUNC_11(VAR_12);
   VAR_12 = ((void*)0);
   VAR_22 = 0;
  }
 }

 if (!VAR_12) {
  if (!(VAR_12=FUNC_5())) {
   FUNC_13(&VAR_13);
   FUNC_10("ip_vs_sync_buff_create failed.\n");
   return;
  }
 }

 VAR_17 = VAR_12->mesg;
 VAR_19 = VAR_12->head;
 VAR_12->head += VAR_22 + VAR_20;
 VAR_17->size += VAR_22 + VAR_20;

 while (VAR_22--)
  *(VAR_19++) = 0;

 VAR_18 = (union ip_vs_sync_conn *)VAR_19;


 VAR_18->v4.type = (VAR_15->af == VAR_0 ? VAR_10 : 0);
 VAR_18->v4.ver_size = FUNC_4(VAR_20 & VAR_11);
 VAR_18->v4.flags = FUNC_3(VAR_15->flags & ~VAR_5);
 VAR_18->v4.state = FUNC_4(VAR_15->state);
 VAR_18->v4.protocol = VAR_15->protocol;
 VAR_18->v4.cport = VAR_15->cport;
 VAR_18->v4.vport = VAR_15->vport;
 VAR_18->v4.dport = VAR_15->dport;
 VAR_18->v4.fwmark = FUNC_3(VAR_15->fwmark);
 VAR_18->v4.timeout = FUNC_3(VAR_15->timeout / VAR_1);
 VAR_17->nr_conns++;
 {
  VAR_19 += sizeof(struct ip_vs_sync_v4);
  VAR_18->v4.caddr = VAR_15->caddr.ip;
  VAR_18->v4.vaddr = VAR_15->vaddr.ip;
  VAR_18->v4.daddr = VAR_15->daddr.ip;
 }
 if (VAR_15->flags & VAR_7) {
  *(VAR_19++) = VAR_4;
  *(VAR_19++) = sizeof(struct ip_vs_sync_conn_options);
  FUNC_2((struct ip_vs_seq *)VAR_19, &VAR_15->in_seq);
  VAR_19 += sizeof(struct ip_vs_seq);
  FUNC_2((struct ip_vs_seq *)VAR_19, &VAR_15->out_seq);
  VAR_19 += sizeof(struct ip_vs_seq);
 }

 if (VAR_15->pe_data_len && VAR_15->pe_data) {
  *(VAR_19++) = VAR_2;
  *(VAR_19++) = VAR_15->pe_data_len;
  FUNC_9(VAR_19, VAR_15->pe_data, VAR_15->pe_data_len);
  VAR_19 += VAR_15->pe_data_len;
  if (VAR_21) {

   *(VAR_19++) = VAR_3;
   *(VAR_19++) = VAR_21;
   FUNC_9(VAR_19, VAR_15->pe->name, VAR_21);
   VAR_19 += VAR_21;
  }
 }

 FUNC_13(&VAR_13);

control:

 VAR_15 = VAR_15->control;
 if (!VAR_15)
  return;
 if (VAR_15->flags & VAR_8)
  VAR_16 = FUNC_1(1, &VAR_15->in_pkts);
 else
  VAR_16 = FUNC_15();
 goto sloop;
}
