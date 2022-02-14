
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rds_sock {int rs_recv_lock; int rs_recv_queue; } ;
struct TYPE_2__ {scalar_t__ h_sport; scalar_t__ h_dport; int h_flags; int h_len; int h_sequence; } ;
struct rds_incoming {int i_item; TYPE_1__ i_hdr; struct rds_connection* i_conn; int i_rx_jiffies; } ;
struct rds_connection {scalar_t__ c_next_rx_seq; int c_lcong; } ;
typedef int gfp_t ;
typedef enum km_type { ____Placeholder_km_type } km_type ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 struct rds_sock* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct rds_incoming*) ;
 int FUNC_7 (struct rds_incoming*,struct rds_sock*) ;
 int FUNC_8 (struct rds_sock*,struct sock*,int ,int ,scalar_t__) ;
 struct sock* FUNC_9 (struct rds_sock*) ;
 int FUNC_10 (struct rds_connection*,scalar_t__) ;
 int FUNC_11 (struct rds_sock*) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (struct sock*,int ) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

void FUNC_17(struct rds_connection *VAR_9, __be32 VAR_10, __be32 VAR_11,
         struct rds_incoming *VAR_12, gfp_t VAR_13, enum km_type VAR_14)
{
 struct rds_sock *VAR_15 = ((void*)0);
 struct sock *VAR_16;
 unsigned long VAR_17;

 VAR_12->i_conn = VAR_9;
 VAR_12->i_rx_jiffies = VAR_2;

 FUNC_13("conn %p next %llu inc %p seq %llu len %u sport %u dport %u "
   "flags 0x%x rx_jiffies %lu\n", VAR_9,
   (unsigned long long)VAR_9->c_next_rx_seq,
   VAR_12,
   (unsigned long long)FUNC_3(VAR_12->i_hdr.h_sequence),
   FUNC_2(VAR_12->i_hdr.h_len),
   FUNC_1(VAR_12->i_hdr.h_sport),
   FUNC_1(VAR_12->i_hdr.h_dport),
   VAR_12->i_hdr.h_flags,
   VAR_12->i_rx_jiffies);
 if (FUNC_3(VAR_12->i_hdr.h_sequence) < VAR_9->c_next_rx_seq
  && (VAR_12->i_hdr.h_flags & VAR_0)) {
  FUNC_12(VAR_6);
  goto out;
 }
 VAR_9->c_next_rx_seq = FUNC_3(VAR_12->i_hdr.h_sequence) + 1;

 if (VAR_3 && VAR_12->i_hdr.h_dport == 0) {
  FUNC_12(VAR_7);
  FUNC_10(VAR_9, VAR_12->i_hdr.h_sport);
  goto out;
 }

 VAR_15 = FUNC_5(VAR_11, VAR_12->i_hdr.h_dport);
 if (!VAR_15) {
  FUNC_12(VAR_5);
  goto out;
 }


 FUNC_7(VAR_12, VAR_15);


 VAR_16 = FUNC_9(VAR_15);


 FUNC_15(&VAR_15->rs_recv_lock, VAR_17);
 if (!FUNC_14(VAR_16, VAR_1)) {
  FUNC_13("adding inc %p to rs %p's recv queue\n", VAR_12, VAR_15);
  FUNC_12(VAR_8);
  FUNC_8(VAR_15, VAR_16, VAR_12->i_conn->c_lcong,
          FUNC_2(VAR_12->i_hdr.h_len),
          VAR_12->i_hdr.h_dport);
  FUNC_6(VAR_12);
  FUNC_4(&VAR_12->i_item, &VAR_15->rs_recv_queue);
  FUNC_0(VAR_16);
 } else {
  FUNC_12(VAR_4);
 }
 FUNC_16(&VAR_15->rs_recv_lock, VAR_17);

out:
 if (VAR_15)
  FUNC_11(VAR_15);
}
