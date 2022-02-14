
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_transport {int (* conn_alloc ) (struct rds_connection*,int ) ;char* t_name; int (* conn_free ) (int ) ;scalar_t__ t_prefer_loopback; } ;
struct rds_connection {int c_loopback; int c_next_tx_seq; int c_hash_node; int c_transport_data; struct rds_connection* c_passive; scalar_t__ c_flags; int c_cm_lock; int c_down_w; int c_conn_w; int c_recv_w; int c_send_w; scalar_t__ c_reconnect_jiffies; int c_state; struct rds_transport* c_trans; int c_retrans; int c_send_queue; int c_waitq; int c_lock; void* c_faddr; void* c_laddr; } ;
struct hlist_head {int dummy; } ;
typedef int gfp_t ;
typedef void* __be32 ;


 int VAR_0 ;
 struct rds_connection* FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct hlist_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct rds_connection*) ;
 struct rds_connection* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct rds_connection*) ;
 int FUNC_14 (struct rds_connection*) ;
 struct hlist_head* FUNC_15 (void*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct rds_connection* FUNC_16 (struct hlist_head*,void*,void*,struct rds_transport*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct rds_transport VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct rds_transport* FUNC_17 (void*) ;
 int FUNC_18 (struct rds_transport*) ;
 int FUNC_19 (char*,struct rds_connection*,void**,void**,char*,char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (struct rds_connection*,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static struct rds_connection *FUNC_26(__be32 VAR_10, __be32 VAR_11,
           struct rds_transport *VAR_12, gfp_t VAR_13,
           int VAR_14)
{
 struct rds_connection *VAR_15, *VAR_16 = ((void*)0);
 struct hlist_head *VAR_17 = FUNC_15(VAR_10, VAR_11);
 struct rds_transport *VAR_18;
 unsigned long VAR_19;
 int VAR_20;

 FUNC_11();
 VAR_15 = FUNC_16(VAR_17, VAR_10, VAR_11, VAR_12);
 if (VAR_15
  && VAR_15->c_loopback
  && VAR_15->c_trans != &VAR_6
  && !VAR_14) {




  VAR_16 = VAR_15;
  VAR_15 = VAR_16->c_passive;
 }
 FUNC_12();
 if (VAR_15)
  goto out;

 VAR_15 = FUNC_9(VAR_4, VAR_13);
 if (!VAR_15) {
  VAR_15 = FUNC_0(-VAR_0);
  goto out;
 }

 FUNC_2(&VAR_15->c_hash_node);
 VAR_15->c_laddr = VAR_10;
 VAR_15->c_faddr = VAR_11;
 FUNC_20(&VAR_15->c_lock);
 VAR_15->c_next_tx_seq = 1;

 FUNC_7(&VAR_15->c_waitq);
 FUNC_3(&VAR_15->c_send_queue);
 FUNC_3(&VAR_15->c_retrans);

 VAR_20 = FUNC_14(VAR_15);
 if (VAR_20) {
  FUNC_8(VAR_4, VAR_15);
  VAR_15 = FUNC_0(VAR_20);
  goto out;
 }






 VAR_18 = FUNC_17(VAR_11);
 if (VAR_18) {
  FUNC_18(VAR_18);
  VAR_15->c_loopback = 1;
  if (VAR_14 && VAR_12->t_prefer_loopback) {




   VAR_12 = &VAR_6;
  }
 }

 VAR_15->c_trans = VAR_12;

 VAR_20 = VAR_12->conn_alloc(VAR_15, VAR_13);
 if (VAR_20) {
  FUNC_8(VAR_4, VAR_15);
  VAR_15 = FUNC_0(VAR_20);
  goto out;
 }

 FUNC_5(&VAR_15->c_state, VAR_1);
 VAR_15->c_reconnect_jiffies = 0;
 FUNC_1(&VAR_15->c_send_w, VAR_8);
 FUNC_1(&VAR_15->c_recv_w, VAR_7);
 FUNC_1(&VAR_15->c_conn_w, VAR_5);
 FUNC_4(&VAR_15->c_down_w, VAR_9);
 FUNC_10(&VAR_15->c_cm_lock);
 VAR_15->c_flags = 0;

 FUNC_19("allocated conn %p for %pI4 -> %pI4 over %s %s\n",
   VAR_15, &VAR_10, &VAR_11,
   VAR_12->t_name ? VAR_12->t_name : "[unknown]",
   VAR_14 ? "(outgoing)" : "");
 FUNC_21(&VAR_3, VAR_19);
 if (VAR_16) {

  if (VAR_16->c_passive) {
   VAR_12->conn_free(VAR_15->c_transport_data);
   FUNC_8(VAR_4, VAR_15);
   VAR_15 = VAR_16->c_passive;
  } else {
   VAR_16->c_passive = VAR_15;
   FUNC_13(VAR_15);
   VAR_2++;
  }
 } else {

  struct rds_connection *VAR_21;

  VAR_21 = FUNC_16(VAR_17, VAR_10, VAR_11, VAR_12);
  if (VAR_21) {
   VAR_12->conn_free(VAR_15->c_transport_data);
   FUNC_8(VAR_4, VAR_15);
   VAR_15 = VAR_21;
  } else {
   FUNC_6(&VAR_15->c_hash_node, VAR_17);
   FUNC_13(VAR_15);
   VAR_2++;
  }
 }
 FUNC_22(&VAR_3, VAR_19);

out:
 return VAR_15;
}
