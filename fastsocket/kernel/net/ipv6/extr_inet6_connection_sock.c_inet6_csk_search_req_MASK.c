
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct request_sock {int * sk; TYPE_2__* rsk_ops; struct request_sock* dl_next; } ;
struct listen_sock {int nr_table_entries; int hash_rnd; struct request_sock** syn_table; } ;
struct TYPE_4__ {struct listen_sock* listen_opt; } ;
struct inet_connection_sock {TYPE_1__ icsk_accept_queue; } ;
struct inet6_request_sock {int const iif; int loc_addr; int rmt_addr; } ;
struct in6_addr {int dummy; } ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {scalar_t__ const rmt_port; } ;
struct TYPE_5__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct inet6_request_sock* FUNC_1 (struct request_sock*) ;
 size_t FUNC_2 (struct in6_addr const*,scalar_t__ const,int ,int ) ;
 struct inet_connection_sock* FUNC_3 (struct sock const*) ;
 TYPE_3__* FUNC_4 (struct request_sock*) ;
 scalar_t__ FUNC_5 (int *,struct in6_addr const*) ;

struct request_sock *FUNC_6(const struct sock *VAR_1,
       struct request_sock ***VAR_2,
       const __be16 VAR_3,
       const struct in6_addr *VAR_4,
       const struct in6_addr *VAR_5,
       const int VAR_6)
{
 const struct inet_connection_sock *VAR_7 = FUNC_3(VAR_1);
 struct listen_sock *VAR_8 = VAR_7->icsk_accept_queue.listen_opt;
 struct request_sock *VAR_9, **VAR_10;

 for (VAR_10 = &VAR_8->syn_table[FUNC_2(VAR_4, VAR_3,
           VAR_8->hash_rnd,
           VAR_8->nr_table_entries)];
      (VAR_9 = *VAR_10) != ((void*)0);
      VAR_10 = &VAR_9->dl_next) {
  const struct inet6_request_sock *VAR_11 = FUNC_1(VAR_9);

  if (FUNC_4(VAR_9)->rmt_port == VAR_3 &&
      VAR_9->rsk_ops->family == VAR_0 &&
      FUNC_5(&VAR_11->rmt_addr, VAR_4) &&
      FUNC_5(&VAR_11->loc_addr, VAR_5) &&
      (!VAR_11->iif || VAR_11->iif == VAR_6)) {
   FUNC_0(VAR_9->sk != ((void*)0));
   *VAR_2 = VAR_10;
   return VAR_9;
  }
 }

 return ((void*)0);
}
