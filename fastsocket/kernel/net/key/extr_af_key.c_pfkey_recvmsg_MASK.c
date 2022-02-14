
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int * dump; } ;
struct pfkey_sock {TYPE_1__ dump; } ;
struct msghdr {int msg_flags; int msg_iov; scalar_t__ msg_namelen; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pfkey_sock*) ;
 struct pfkey_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sock*,int,int,int*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct kiocb *VAR_5,
    struct socket *VAR_6, struct msghdr *VAR_7, size_t VAR_8,
    int VAR_9)
{
 struct sock *VAR_10 = VAR_6->sk;
 struct pfkey_sock *VAR_11 = FUNC_2(VAR_10);
 struct sk_buff *VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = -VAR_0;
 if (VAR_9 & ~(VAR_3|VAR_2|VAR_4|VAR_1))
  goto out;

 VAR_7->msg_namelen = 0;
 VAR_12 = FUNC_5(VAR_10, VAR_9, VAR_9 & VAR_2, &VAR_14);
 if (VAR_12 == ((void*)0))
  goto out;

 VAR_13 = VAR_12->len;
 if (VAR_13 > VAR_8) {
  VAR_7->msg_flags |= VAR_4;
  VAR_13 = VAR_8;
 }

 FUNC_6(VAR_12);
 VAR_14 = FUNC_3(VAR_12, 0, VAR_7->msg_iov, VAR_13);
 if (VAR_14)
  goto out_free;

 FUNC_7(VAR_7, VAR_10, VAR_12);

 VAR_14 = (VAR_9 & VAR_4) ? VAR_12->len : VAR_13;

 if (VAR_11->dump.dump != ((void*)0) &&
     3 * FUNC_0(&VAR_10->sk_rmem_alloc) <= VAR_10->sk_rcvbuf)
  FUNC_1(VAR_11);

out_free:
 FUNC_4(VAR_10, VAR_12);
out:
 return VAR_14;
}
