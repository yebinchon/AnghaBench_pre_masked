
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sock_queue {int syn_wait_lock; struct listen_sock* listen_opt; int * rskq_accept_head; } ;
struct request_sock {int dummy; } ;
struct listen_sock {int max_qlen_log; unsigned int nr_table_entries; int hash_rnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct listen_sock* FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (int *,int) ;
 struct listen_sock* FUNC_2 (size_t,int) ;
 unsigned int FUNC_3 (int ,unsigned int,int) ;
 unsigned int FUNC_4 (int ,unsigned int,int ) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct request_sock_queue *VAR_8,
        unsigned int VAR_9)
{
 size_t VAR_10 = sizeof(struct listen_sock);
 struct listen_sock *VAR_11;

 VAR_9 = FUNC_4(VAR_7, VAR_9, VAR_6);
 VAR_9 = FUNC_3(VAR_7, VAR_9, 8);
 VAR_9 = FUNC_5(VAR_9 + 1);
 VAR_10 += VAR_9 * sizeof(struct request_sock *);
 if (VAR_10 > VAR_3)
  VAR_11 = FUNC_0(VAR_10,
   VAR_1 | VAR_4 | VAR_5,
   VAR_2);
 else
  VAR_11 = FUNC_2(VAR_10, VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 for (VAR_11->max_qlen_log = 3;
      (1 << VAR_11->max_qlen_log) < VAR_9;
      VAR_11->max_qlen_log++);

 FUNC_1(&VAR_11->hash_rnd, sizeof(VAR_11->hash_rnd));
 FUNC_6(&VAR_8->syn_wait_lock);
 VAR_8->rskq_accept_head = ((void*)0);
 VAR_11->nr_table_entries = VAR_9;

 FUNC_7(&VAR_8->syn_wait_lock);
 VAR_8->listen_opt = VAR_11;
 FUNC_8(&VAR_8->syn_wait_lock);

 return 0;
}
