
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ qlen; } ;
struct sock {int sk_state; TYPE_2__ sk_write_queue; TYPE_1__* sk_prot; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_flags; int msg_iov; } ;
struct kiocb {int dummy; } ;
struct dccp_sock {size_t dccps_mss_cache; } ;
struct TYPE_3__ {size_t max_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 struct dccp_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,long*) ;
 int FUNC_7 (struct sk_buff*,size_t) ;
 int FUNC_8 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,size_t) ;
 struct sk_buff* FUNC_10 (struct sock*,int,int const,int*) ;
 long FUNC_11 (struct sock*,int const) ;
 scalar_t__ VAR_5 ;

int FUNC_12(struct kiocb *VAR_6, struct sock *VAR_7, struct msghdr *VAR_8,
   size_t VAR_9)
{
 const struct dccp_sock *VAR_10 = FUNC_0(VAR_7);
 const int VAR_11 = VAR_8->msg_flags;
 const int VAR_12 = VAR_11 & VAR_4;
 struct sk_buff *VAR_13;
 int VAR_14, VAR_15;
 long VAR_16;

 if (VAR_9 > VAR_10->dccps_mss_cache)
  return -VAR_3;

 FUNC_3(VAR_7);

 if (VAR_5 &&
     (VAR_7->sk_write_queue.qlen >= VAR_5)) {
  VAR_14 = -VAR_2;
  goto out_release;
 }

 VAR_16 = FUNC_11(VAR_7, VAR_12);






 if ((1 << VAR_7->sk_state) & ~(VAR_0 | VAR_1))
  if ((VAR_14 = FUNC_6(VAR_7, &VAR_16)) != 0)
   goto out_release;

 VAR_15 = VAR_7->sk_prot->max_header + VAR_9;
 FUNC_5(VAR_7);
 VAR_13 = FUNC_10(VAR_7, VAR_15, VAR_12, &VAR_14);
 FUNC_3(VAR_7);
 if (VAR_13 == ((void*)0))
  goto out_release;

 FUNC_9(VAR_13, VAR_7->sk_prot->max_header);
 VAR_14 = FUNC_4(FUNC_7(VAR_13, VAR_9), VAR_8->msg_iov, VAR_9);
 if (VAR_14 != 0)
  goto out_discard;

 FUNC_8(&VAR_7->sk_write_queue, VAR_13);
 FUNC_1(VAR_7,0);
out_release:
 FUNC_5(VAR_7);
 return VAR_14 ? : VAR_9;
out_discard:
 FUNC_2(VAR_13);
 goto out_release;
}
