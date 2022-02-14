
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sock_queue {int syn_wait_lock; struct listen_sock* listen_opt; } ;
struct listen_sock {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline struct listen_sock *FUNC_2(
  struct request_sock_queue *VAR_0)
{
 struct listen_sock *VAR_1;

 FUNC_0(&VAR_0->syn_wait_lock);
 VAR_1 = VAR_0->listen_opt;
 VAR_0->listen_opt = ((void*)0);
 FUNC_1(&VAR_0->syn_wait_lock);

 return VAR_1;
}
