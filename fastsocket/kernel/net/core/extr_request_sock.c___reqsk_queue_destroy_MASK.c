
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_sock_queue {struct listen_sock* listen_opt; } ;
struct request_sock {int dummy; } ;
struct listen_sock {int nr_table_entries; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct listen_sock*) ;
 int FUNC_1 (struct listen_sock*) ;

void FUNC_2(struct request_sock_queue *VAR_1)
{
 struct listen_sock *VAR_2;
 size_t VAR_3;






 VAR_2 = VAR_1->listen_opt;
 VAR_3 = sizeof(struct listen_sock) +
  VAR_2->nr_table_entries * sizeof(struct request_sock *);

 if (VAR_3 > VAR_0)
  FUNC_1(VAR_2);
 else
  FUNC_0(VAR_2);
}
