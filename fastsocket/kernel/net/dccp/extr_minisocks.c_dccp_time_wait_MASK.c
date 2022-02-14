
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_prot; } ;
struct ipv6_pinfo {int ipv6only; int rcv_saddr; int daddr; } ;
struct inet_timewait_sock {scalar_t__ tw_family; void* tw_timeout; int tw_ipv6only; int tw_ipv6_offset; } ;
struct inet_connection_sock {int icsk_rto; } ;
struct inet6_timewait_sock {int tw_v6_rcv_saddr; int tw_v6_daddr; } ;
struct TYPE_3__ {scalar_t__ tw_count; scalar_t__ sysctl_max_tw_buckets; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct inet_timewait_sock*,struct sock*,int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (struct sock*) ;
 int VAR_4 ;
 struct ipv6_pinfo* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ) ;
 struct inet6_timewait_sock* FUNC_5 (struct sock*) ;
 struct inet_connection_sock* FUNC_6 (struct sock*) ;
 struct inet_timewait_sock* FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct inet_timewait_sock*) ;
 int FUNC_9 (struct inet_timewait_sock*,TYPE_1__*,int,void*) ;
 int FUNC_10 (int *,int *) ;

void FUNC_11(struct sock *VAR_5, int VAR_6, int VAR_7)
{
 struct inet_timewait_sock *VAR_8 = ((void*)0);

 if (VAR_3.tw_count < VAR_3.sysctl_max_tw_buckets)
  VAR_8 = FUNC_7(VAR_5, VAR_6);

 if (VAR_8 != ((void*)0)) {
  const struct inet_connection_sock *VAR_9 = FUNC_6(VAR_5);
  const int VAR_10 = (VAR_9->icsk_rto << 2) - (VAR_9->icsk_rto >> 1);
  FUNC_1(VAR_8, VAR_5, &VAR_4);


  if (VAR_7 < VAR_10)
   VAR_7 = VAR_10;

  VAR_8->tw_timeout = VAR_0;
  if (VAR_6 == VAR_1)
   VAR_7 = VAR_0;

  FUNC_9(VAR_8, &VAR_3, VAR_7,
       VAR_0);
  FUNC_8(VAR_8);
 } else {




  FUNC_0("time wait bucket table overflow\n");
 }

 FUNC_2(VAR_5);
}
