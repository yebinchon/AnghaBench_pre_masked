
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int * sk_sleep; } ;
struct rds_sock {scalar_t__ rs_snd_bytes; scalar_t__ rs_seen_congestion; int rs_recv_lock; int rs_notify_queue; int rs_recv_queue; int rs_lock; scalar_t__ rs_cong_notify; int rs_cong_track; int rs_cong_monitor; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct rds_sock*) ;
 struct rds_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static unsigned int FUNC_9(struct file *VAR_6, struct socket *VAR_7,
        poll_table *VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 struct rds_sock *VAR_10 = FUNC_4(VAR_9);
 unsigned int VAR_11 = 0;
 unsigned long VAR_12;

 FUNC_1(VAR_6, VAR_9->sk_sleep, VAR_8);

 if (VAR_10->rs_seen_congestion)
  FUNC_1(VAR_6, &VAR_5, VAR_8);

 FUNC_5(&VAR_10->rs_recv_lock, VAR_12);
 if (!VAR_10->rs_cong_monitor) {



  if (FUNC_2(&VAR_10->rs_cong_track))
   VAR_11 |= (VAR_0 | VAR_2 | VAR_3);
 } else {
  FUNC_7(&VAR_10->rs_lock);
  if (VAR_10->rs_cong_notify)
   VAR_11 |= (VAR_0 | VAR_2);
  FUNC_8(&VAR_10->rs_lock);
 }
 if (!FUNC_0(&VAR_10->rs_recv_queue)
  || !FUNC_0(&VAR_10->rs_notify_queue))
  VAR_11 |= (VAR_0 | VAR_2);
 if (VAR_10->rs_snd_bytes < FUNC_3(VAR_10))
  VAR_11 |= (VAR_1 | VAR_4);
 FUNC_6(&VAR_10->rs_recv_lock, VAR_12);


 if (VAR_11)
  VAR_10->rs_seen_congestion = 0;

 return VAR_11;
}
