
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rds_sock {int rs_snd_bytes; int rs_lock; int rs_send_queue; } ;
struct TYPE_4__ {int h_sequence; int h_len; } ;
struct TYPE_3__ {TYPE_2__ i_hdr; struct rds_connection* i_conn; } ;
struct rds_message {TYPE_1__ m_inc; int m_flags; int m_conn_item; struct rds_sock* m_rs; int m_sock_item; } ;
struct rds_connection {int c_lock; int c_send_queue; int c_next_tx_seq; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct rds_message*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_7 (struct rds_sock*) ;
 int FUNC_8 (char*,struct rds_message*,int,struct rds_sock*,int,unsigned long long) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct rds_sock *VAR_3, struct rds_connection *VAR_4,
        struct rds_message *VAR_5, __be16 VAR_6,
        __be16 VAR_7, int *VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;

 if (*VAR_8)
  goto out;

 VAR_10 = FUNC_1(VAR_5->m_inc.i_hdr.h_len);



 FUNC_11(&VAR_3->rs_lock, VAR_9);
 if (VAR_3->rs_snd_bytes < FUNC_7(VAR_3)) {
  VAR_3->rs_snd_bytes += VAR_10;






  if (VAR_3->rs_snd_bytes >= FUNC_7(VAR_3) / 2)
   FUNC_0(VAR_0, &VAR_5->m_flags);

  FUNC_4(&VAR_5->m_sock_item, &VAR_3->rs_send_queue);
  FUNC_9(VAR_2, &VAR_5->m_flags);
  FUNC_5(VAR_5);
  VAR_5->m_rs = VAR_3;



  FUNC_6(&VAR_5->m_inc.i_hdr, VAR_6, VAR_7, 0);
  VAR_5->m_inc.i_conn = VAR_4;
  FUNC_5(VAR_5);

  FUNC_10(&VAR_4->c_lock);
  VAR_5->m_inc.i_hdr.h_sequence = FUNC_3(VAR_4->c_next_tx_seq++);
  FUNC_4(&VAR_5->m_conn_item, &VAR_4->c_send_queue);
  FUNC_9(VAR_1, &VAR_5->m_flags);
  FUNC_12(&VAR_4->c_lock);

  FUNC_8("queued msg %p len %d, rs %p bytes %d seq %llu\n",
    VAR_5, VAR_10, VAR_3, VAR_3->rs_snd_bytes,
    (unsigned long long)FUNC_2(VAR_5->m_inc.i_hdr.h_sequence));

  *VAR_8 = 1;
 }

 FUNC_13(&VAR_3->rs_lock, VAR_9);
out:
 return *VAR_8;
}
