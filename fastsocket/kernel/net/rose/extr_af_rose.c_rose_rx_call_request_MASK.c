
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_data_ready ) (struct sock*,int ) ;int sk_receive_queue; int sk_ack_backlog; int sk_state; } ;
struct sk_buff {int* data; int len; struct sock* sk; } ;
struct rose_facilities_struct {int dest_ndigis; int source_ndigis; int * source_digis; int source_call; int source_addr; int * dest_digis; int dest_call; int dest_addr; } ;
struct rose_sock {unsigned int lci; int dest_ndigis; int source_ndigis; int condition; scalar_t__ vl; scalar_t__ vr; scalar_t__ va; scalar_t__ vs; int state; scalar_t__ defer; struct rose_neigh* neighbour; struct rose_facilities_struct facilities; struct net_device* device; int * source_digis; int source_call; int source_addr; int * dest_digis; int dest_call; int dest_addr; } ;
struct rose_neigh {int use; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rose_facilities_struct*,int,int) ;
 struct sock* FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int*,struct rose_facilities_struct*) ;
 struct rose_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct rose_neigh*,unsigned int,int ,int) ;
 int FUNC_9 (struct sock*,int ) ;
 scalar_t__ FUNC_10 (struct sock*) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (struct sock*,int ) ;

int FUNC_14(struct sk_buff *VAR_7, struct net_device *VAR_8, struct rose_neigh *VAR_9, unsigned int VAR_10)
{
 struct sock *VAR_11;
 struct sock *VAR_12;
 struct rose_sock *VAR_13;
 struct rose_facilities_struct VAR_14;
 int VAR_15, VAR_16;

 VAR_7->sk = ((void*)0);




 FUNC_0(&VAR_14, 0x00, sizeof(struct rose_facilities_struct));

 VAR_16 = (((VAR_7->data[3] >> 4) & 0x0F) + 1) >> 1;
 VAR_16 += (((VAR_7->data[3] >> 0) & 0x0F) + 1) >> 1;
 if (!FUNC_4(VAR_7->data + VAR_16 + 4, &VAR_14)) {
  FUNC_8(VAR_9, VAR_10, VAR_1, 76);
  return 0;
 }

 VAR_11 = FUNC_1(&VAR_14.source_addr, &VAR_14.source_call);




 if (VAR_11 == ((void*)0) || FUNC_10(VAR_11) ||
     (VAR_12 = FUNC_3(VAR_11)) == ((void*)0)) {
  FUNC_8(VAR_9, VAR_10, VAR_2, 120);
  return 0;
 }

 VAR_7->sk = VAR_12;
 VAR_12->sk_state = VAR_6;
 VAR_13 = FUNC_5(VAR_12);

 VAR_13->lci = VAR_10;
 VAR_13->dest_addr = VAR_14.dest_addr;
 VAR_13->dest_call = VAR_14.dest_call;
 VAR_13->dest_ndigis = VAR_14.dest_ndigis;
 for (VAR_15 = 0 ; VAR_15 < VAR_14.dest_ndigis ; VAR_15++)
  VAR_13->dest_digis[VAR_15] = VAR_14.dest_digis[VAR_15];
 VAR_13->source_addr = VAR_14.source_addr;
 VAR_13->source_call = VAR_14.source_call;
 VAR_13->source_ndigis = VAR_14.source_ndigis;
 for (VAR_15 = 0 ; VAR_15 < VAR_14.source_ndigis ; VAR_15++)
  VAR_13->source_digis[VAR_15]= VAR_14.source_digis[VAR_15];
 VAR_13->neighbour = VAR_9;
 VAR_13->device = VAR_8;
 VAR_13->facilities = VAR_14;

 VAR_13->neighbour->use++;

 if (FUNC_5(VAR_11)->defer) {
  VAR_13->state = VAR_4;
 } else {
  FUNC_9(VAR_12, VAR_0);
  VAR_13->state = VAR_3;
  FUNC_7(VAR_12);
 }

 VAR_13->condition = 0x00;
 VAR_13->vs = 0;
 VAR_13->va = 0;
 VAR_13->vr = 0;
 VAR_13->vl = 0;
 VAR_11->sk_ack_backlog++;

 FUNC_2(VAR_12);

 FUNC_11(&VAR_11->sk_receive_queue, VAR_7);

 FUNC_6(VAR_12);

 if (!FUNC_12(VAR_11, VAR_5))
  VAR_11->sk_data_ready(VAR_11, VAR_7->len);

 return 1;
}
