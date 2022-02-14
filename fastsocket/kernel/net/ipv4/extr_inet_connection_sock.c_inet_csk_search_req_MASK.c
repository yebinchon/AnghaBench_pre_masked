
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct request_sock {int sk; TYPE_2__* rsk_ops; struct request_sock* dl_next; } ;
struct listen_sock {int nr_table_entries; int hash_rnd; struct request_sock** syn_table; } ;
struct inet_request_sock {scalar_t__ const rmt_port; scalar_t__ const rmt_addr; scalar_t__ const loc_addr; } ;
struct TYPE_3__ {struct listen_sock* listen_opt; } ;
struct inet_connection_sock {TYPE_1__ icsk_accept_queue; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;
struct TYPE_4__ {int family; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct inet_connection_sock* FUNC_2 (struct sock const*) ;
 struct inet_request_sock* FUNC_3 (struct request_sock*) ;
 size_t FUNC_4 (scalar_t__ const,scalar_t__ const,int ,int ) ;

struct request_sock *FUNC_5(const struct sock *VAR_0,
      struct request_sock ***VAR_1,
      const __be16 VAR_2, const __be32 VAR_3,
      const __be32 VAR_4)
{
 const struct inet_connection_sock *VAR_5 = FUNC_2(VAR_0);
 struct listen_sock *VAR_6 = VAR_5->icsk_accept_queue.listen_opt;
 struct request_sock *VAR_7, **VAR_8;

 for (VAR_8 = &VAR_6->syn_table[FUNC_4(VAR_3, VAR_2, VAR_6->hash_rnd,
          VAR_6->nr_table_entries)];
      (VAR_7 = *VAR_8) != ((void*)0);
      VAR_8 = &VAR_7->dl_next) {
  const struct inet_request_sock *VAR_9 = FUNC_3(VAR_7);

  if (VAR_9->rmt_port == VAR_2 &&
      VAR_9->rmt_addr == VAR_3 &&
      VAR_9->loc_addr == VAR_4 &&
      FUNC_0(VAR_7->rsk_ops->family)) {
   FUNC_1(VAR_7->sk);
   *VAR_1 = VAR_8;
   break;
  }
 }

 return VAR_7;
}
