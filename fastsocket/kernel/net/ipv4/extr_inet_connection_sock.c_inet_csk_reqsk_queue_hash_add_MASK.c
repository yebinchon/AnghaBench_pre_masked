
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct request_sock {int dummy; } ;
struct listen_sock {int nr_table_entries; int hash_rnd; } ;
struct TYPE_3__ {struct listen_sock* listen_opt; } ;
struct inet_connection_sock {TYPE_1__ icsk_accept_queue; } ;
struct TYPE_4__ {int rmt_port; int rmt_addr; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,unsigned long) ;
 TYPE_2__* FUNC_2 (struct request_sock*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int const,struct request_sock*,unsigned long) ;

void FUNC_5(struct sock *VAR_0, struct request_sock *VAR_1,
       unsigned long VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_0);
 struct listen_sock *VAR_4 = VAR_3->icsk_accept_queue.listen_opt;
 const u32 VAR_5 = FUNC_3(FUNC_2(VAR_1)->rmt_addr, FUNC_2(VAR_1)->rmt_port,
         VAR_4->hash_rnd, VAR_4->nr_table_entries);

 FUNC_4(&VAR_3->icsk_accept_queue, VAR_5, VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_2);
}
