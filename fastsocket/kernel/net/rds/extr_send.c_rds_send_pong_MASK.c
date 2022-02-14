
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int i_hdr; struct rds_connection* i_conn; } ;
struct TYPE_3__ {int op_active; } ;
struct rds_message {TYPE_2__ m_inc; int m_flags; int m_conn_item; TYPE_1__ data; int m_daddr; } ;
struct rds_connection {int c_send_w; int c_flags; int c_lock; int c_next_tx_seq; int c_send_queue; int c_fcong; int c_faddr; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (struct rds_connection*) ;
 int FUNC_4 (struct rds_message*) ;
 struct rds_message* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (struct rds_message*) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int *) ;

int
FUNC_13(struct rds_connection *VAR_7, __be16 VAR_8)
{
 struct rds_message *VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_5(0, VAR_1);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_9->m_daddr = VAR_7->c_faddr;
 VAR_9->data.op_active = 1;

 FUNC_3(VAR_7);

 VAR_11 = FUNC_2(VAR_7->c_fcong, VAR_8, 1, ((void*)0));
 if (VAR_11)
  goto out;

 FUNC_10(&VAR_7->c_lock, VAR_10);
 FUNC_0(&VAR_9->m_conn_item, &VAR_7->c_send_queue);
 FUNC_9(VAR_3, &VAR_9->m_flags);
 FUNC_4(VAR_9);
 VAR_9->m_inc.i_conn = VAR_7;

 FUNC_6(&VAR_9->m_inc.i_hdr, 0, VAR_8,
        VAR_7->c_next_tx_seq);
 VAR_7->c_next_tx_seq++;
 FUNC_11(&VAR_7->c_lock, VAR_10);

 FUNC_8(VAR_6);
 FUNC_8(VAR_5);

 if (!FUNC_12(VAR_2, &VAR_7->c_flags))
  FUNC_1(VAR_4, &VAR_7->c_send_w, 0);

 FUNC_7(VAR_9);
 return 0;

out:
 if (VAR_9)
  FUNC_7(VAR_9);
 return VAR_11;
}
