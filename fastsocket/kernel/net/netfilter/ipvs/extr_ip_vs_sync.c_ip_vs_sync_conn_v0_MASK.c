
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ip_vs_sync_mesg_v0 {int size; int nr_conns; } ;
struct ip_vs_sync_conn_v0 {void* state; void* flags; int daddr; int vaddr; int caddr; int dport; int vport; int cport; int protocol; scalar_t__ reserved; } ;
struct ip_vs_sync_conn_options {int dummy; } ;
struct TYPE_9__ {int ip; } ;
struct TYPE_8__ {int ip; } ;
struct TYPE_7__ {int ip; } ;
struct ip_vs_conn {scalar_t__ af; int flags; int state; struct ip_vs_conn* control; int in_pkts; int in_seq; TYPE_3__ daddr; TYPE_2__ vaddr; TYPE_1__ caddr; int dport; int vport; int cport; int protocol; } ;
struct TYPE_10__ {scalar_t__ head; scalar_t__ end; scalar_t__ mesg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;
 TYPE_4__* VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (struct ip_vs_conn*,int) ;
 int FUNC_4 (struct ip_vs_conn*,int) ;
 int FUNC_5 (struct ip_vs_sync_conn_options*,int *,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct ip_vs_conn *VAR_9, int VAR_10)
{
 struct ip_vs_sync_mesg_v0 *VAR_11;
 struct ip_vs_sync_conn_v0 *VAR_12;
 int VAR_13;

 if (FUNC_11(VAR_9->af != VAR_0))
  return;

 if (VAR_9->flags & VAR_3)
  return;

 if (!FUNC_4(VAR_9, VAR_10))
  return;
 FUNC_8(&VAR_8);
 if (!VAR_7) {
  if (!(VAR_7=FUNC_2())) {
   FUNC_9(&VAR_8);
   FUNC_6("ip_vs_sync_buff_create failed.\n");
   return;
  }
 }

 VAR_13 = (VAR_9->flags & VAR_4) ? VAR_1 :
  VAR_6;
 VAR_11 = (struct ip_vs_sync_mesg_v0 *)VAR_7->mesg;
 VAR_12 = (struct ip_vs_sync_conn_v0 *)VAR_7->head;


 VAR_12->reserved = 0;
 VAR_12->protocol = VAR_9->protocol;
 VAR_12->cport = VAR_9->cport;
 VAR_12->vport = VAR_9->vport;
 VAR_12->dport = VAR_9->dport;
 VAR_12->caddr = VAR_9->caddr.ip;
 VAR_12->vaddr = VAR_9->vaddr.ip;
 VAR_12->daddr = VAR_9->daddr.ip;
 VAR_12->flags = FUNC_1(VAR_9->flags & ~VAR_2);
 VAR_12->state = FUNC_1(VAR_9->state);
 if (VAR_9->flags & VAR_4) {
  struct ip_vs_sync_conn_options *VAR_14 =
   (struct ip_vs_sync_conn_options *)&VAR_12[1];
  FUNC_5(VAR_14, &VAR_9->in_seq, sizeof(*VAR_14));
 }

 VAR_11->nr_conns++;
 VAR_11->size += VAR_13;
 VAR_7->head += VAR_13;


 if (VAR_7->head + VAR_1 > VAR_7->end) {
  FUNC_7(VAR_7);
  VAR_7 = ((void*)0);
 }
 FUNC_9(&VAR_8);


 VAR_9 = VAR_9->control;
 if (VAR_9) {
  if (VAR_9->flags & VAR_5)
   VAR_10 = FUNC_0(1, &VAR_9->in_pkts);
  else
   VAR_10 = FUNC_10();
  FUNC_3(VAR_9->control, VAR_10);
 }
}
