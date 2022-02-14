
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_sndbuf; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int dummy; } ;
struct msghdr {int msg_flags; int msg_iov; } ;
struct kiocb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct sadb_msg*,int,struct sock*) ;
 struct sadb_msg* FUNC_6 (struct sk_buff*,int*) ;
 int FUNC_7 (struct sock*,struct sk_buff*,struct sadb_msg*) ;
 int FUNC_8 (struct sk_buff*,size_t) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct kiocb *VAR_7,
    struct socket *VAR_8, struct msghdr *VAR_9, size_t VAR_10)
{
 struct sock *VAR_11 = VAR_8->sk;
 struct sk_buff *VAR_12 = ((void*)0);
 struct sadb_msg *VAR_13 = ((void*)0);
 int VAR_14;

 VAR_14 = -VAR_3;
 if (VAR_9->msg_flags & VAR_5)
  goto out;

 VAR_14 = -VAR_1;
 if ((unsigned)VAR_10 > VAR_11->sk_sndbuf - 32)
  goto out;

 VAR_14 = -VAR_2;
 VAR_12 = FUNC_0(VAR_10, VAR_4);
 if (VAR_12 == ((void*)0))
  goto out;

 VAR_14 = -VAR_0;
 if (FUNC_2(FUNC_8(VAR_12,VAR_10), VAR_9->msg_iov, VAR_10))
  goto out;

 VAR_13 = FUNC_6(VAR_12, &VAR_14);
 if (!VAR_13)
  goto out;

 FUNC_3(&VAR_6);
 VAR_14 = FUNC_7(VAR_11, VAR_12, VAR_13);
 FUNC_4(&VAR_6);

out:
 if (VAR_14 && VAR_13 && FUNC_5(VAR_13, VAR_14, VAR_11) == 0)
  VAR_14 = 0;
 FUNC_1(VAR_12);

 return VAR_14 ? : VAR_10;
}
