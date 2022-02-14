
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rds_ib_recv_work {TYPE_3__* r_frag; struct rds_ib_incoming* r_ibinc; } ;
struct rds_header {scalar_t__ h_ack; scalar_t__ h_sport; scalar_t__ h_dport; scalar_t__ h_len; int h_flags; scalar_t__ h_sequence; scalar_t__ h_credit; } ;
struct TYPE_4__ {struct rds_header i_hdr; } ;
struct rds_ib_incoming {TYPE_1__ ii_inc; int ii_frags; } ;
struct rds_ib_connection {struct rds_ib_incoming* i_ibinc; struct rds_ib_recv_work* i_recv_data_rem; struct rds_ib_recv_work* i_recvs; struct rds_header* i_recv_hdrs; } ;
struct rds_ib_ack_state {int ack_recv_valid; int ack_next_valid; int ack_required; void* ack_next; void* ack_recv; } ;
struct rds_connection {int c_laddr; int c_faddr; struct rds_ib_connection* c_transport_data; } ;
struct TYPE_5__ {int f_item; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rds_ib_recv_work* VAR_4 ;
 struct rds_ib_recv_work* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct rds_header*,struct rds_header*,int) ;
 int FUNC_4 (struct rds_connection*,struct rds_ib_incoming*) ;
 int FUNC_5 (struct rds_connection*,char*,...) ;
 int FUNC_6 (struct rds_ib_connection*,TYPE_3__*) ;
 int FUNC_7 (struct rds_connection*,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct rds_header*) ;
 int FUNC_11 (struct rds_connection*,int ,int ,TYPE_1__*,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,struct rds_ib_connection*,struct rds_ib_incoming*,struct rds_ib_recv_work*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_14(struct rds_connection *VAR_8,
    struct rds_ib_recv_work *VAR_9, u32 VAR_10,
    struct rds_ib_ack_state *VAR_11)
{
 struct rds_ib_connection *VAR_12 = VAR_8->c_transport_data;
 struct rds_ib_incoming *VAR_13 = VAR_12->i_ibinc;
 struct rds_header *VAR_14, *VAR_15;



 FUNC_13("ic %p ibinc %p recv %p byte len %u\n", VAR_12, VAR_13, VAR_9,
   VAR_10);

 if (VAR_10 < sizeof(struct rds_header)) {
  FUNC_5(VAR_8, "incoming message "
         "from %pI4 didn't include a "
         "header, disconnecting and "
         "reconnecting\n",
         &VAR_8->c_faddr);
  return;
 }
 VAR_10 -= sizeof(struct rds_header);

 VAR_14 = &VAR_12->i_recv_hdrs[VAR_9 - VAR_12->i_recvs];


 if (!FUNC_10(VAR_14)) {
  FUNC_5(VAR_8, "incoming message "
         "from %pI4 has corrupted header - "
         "forcing a reconnect\n",
         &VAR_8->c_faddr);
  FUNC_12(VAR_7);
  return;
 }


 VAR_11->ack_recv = FUNC_1(VAR_14->h_ack);
 VAR_11->ack_recv_valid = 1;


 if (VAR_14->h_credit)
  FUNC_7(VAR_8, VAR_14->h_credit);

 if (VAR_14->h_sport == 0 && VAR_14->h_dport == 0 && VAR_10 == 0) {




  FUNC_8(VAR_5);
  FUNC_6(VAR_12, VAR_9->r_frag);
  VAR_9->r_frag = ((void*)0);
  return;
 }







 if (!VAR_13) {
  VAR_13 = VAR_9->r_ibinc;
  VAR_9->r_ibinc = ((void*)0);
  VAR_12->i_ibinc = VAR_13;

  VAR_15 = &VAR_13->ii_inc.i_hdr;
  FUNC_3(VAR_15, VAR_14, sizeof(*VAR_15));
  VAR_12->i_recv_data_rem = FUNC_0(VAR_15->h_len);

  FUNC_13("ic %p ibinc %p rem %u flag 0x%x\n", VAR_12, VAR_13,
    VAR_12->i_recv_data_rem, VAR_15->h_flags);
 } else {
  VAR_15 = &VAR_13->ii_inc.i_hdr;


  if (VAR_15->h_sequence != VAR_14->h_sequence
   || VAR_15->h_len != VAR_14->h_len
   || VAR_15->h_sport != VAR_14->h_sport
   || VAR_15->h_dport != VAR_14->h_dport) {
   FUNC_5(VAR_8,
    "fragment header mismatch; forcing reconnect\n");
   return;
  }
 }

 FUNC_2(&VAR_9->r_frag->f_item, &VAR_13->ii_frags);
 VAR_9->r_frag = ((void*)0);

 if (VAR_12->i_recv_data_rem > VAR_4)
  VAR_12->i_recv_data_rem -= VAR_4;
 else {
  VAR_12->i_recv_data_rem = 0;
  VAR_12->i_ibinc = ((void*)0);

  if (VAR_13->ii_inc.i_hdr.h_flags == VAR_3)
   FUNC_4(VAR_8, VAR_13);
  else {
   FUNC_11(VAR_8, VAR_8->c_faddr, VAR_8->c_laddr,
       &VAR_13->ii_inc, VAR_0,
       VAR_1);
   VAR_11->ack_next = FUNC_1(VAR_15->h_sequence);
   VAR_11->ack_next_valid = 1;
  }




  if (VAR_15->h_flags & VAR_2) {
   FUNC_12(VAR_6);
   VAR_11->ack_required = 1;
  }

  FUNC_9(&VAR_13->ii_inc);
 }
}
