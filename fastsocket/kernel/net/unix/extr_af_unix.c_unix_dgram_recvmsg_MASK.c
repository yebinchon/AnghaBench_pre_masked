
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp_scm ;
struct unix_sock {int readlock; int peer_wait; } ;
struct socket {struct sock* sk; } ;
struct sock_iocb {struct scm_cookie* scm; } ;
struct sock {scalar_t__ sk_type; int sk_shutdown; } ;
struct sk_buff {size_t len; int sk; } ;
struct scm_cookie {int fp; } ;
struct msghdr {int msg_iov; int msg_flags; scalar_t__ msg_name; scalar_t__ msg_namelen; } ;
struct kiocb {int dummy; } ;
struct TYPE_2__ {scalar_t__ fp; int cred; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 struct sock_iocb* FUNC_1 (struct kiocb*) ;
 int FUNC_2 (struct scm_cookie*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct socket*,struct msghdr*,struct scm_cookie*,int) ;
 int FUNC_7 (struct scm_cookie*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ,size_t) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct sock*,int,int,int*) ;
 int FUNC_11 (struct msghdr*,int ) ;
 int FUNC_12 (struct scm_cookie*,struct sk_buff*) ;
 int FUNC_13 (struct scm_cookie*,struct sk_buff*) ;
 struct unix_sock* FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct kiocb *VAR_8, struct socket *VAR_9,
         struct msghdr *VAR_10, size_t VAR_11,
         int VAR_12)
{
 struct sock_iocb *VAR_13 = FUNC_1(VAR_8);
 struct scm_cookie VAR_14;
 struct sock *VAR_15 = VAR_9->sk;
 struct unix_sock *VAR_16 = FUNC_14(VAR_15);
 int VAR_17 = VAR_12 & VAR_2;
 struct sk_buff *VAR_18;
 int VAR_19;

 VAR_19 = -VAR_1;
 if (VAR_12&VAR_3)
  goto out;

 VAR_10->msg_namelen = 0;

 FUNC_3(&VAR_16->readlock);

 VAR_18 = FUNC_10(VAR_15, VAR_12, VAR_17, &VAR_19);
 if (!VAR_18) {
  FUNC_15(VAR_15);

  if (VAR_15->sk_type == VAR_7 && VAR_19 == -VAR_0 &&
      (VAR_15->sk_shutdown & VAR_6))
   VAR_19 = 0;
  FUNC_16(VAR_15);
  goto out_unlock;
 }

 FUNC_17(&VAR_16->peer_wait);

 if (VAR_10->msg_name)
  FUNC_11(VAR_10, VAR_18->sk);

 if (VAR_11 > VAR_18->len)
  VAR_11 = VAR_18->len;
 else if (VAR_11 < VAR_18->len)
  VAR_10->msg_flags |= VAR_5;

 VAR_19 = FUNC_8(VAR_18, 0, VAR_10->msg_iov, VAR_11);
 if (VAR_19)
  goto out_free;

 if (!VAR_13->scm) {
  VAR_13->scm = &VAR_14;
  FUNC_2(&VAR_14, 0, sizeof(VAR_14));
 }
 FUNC_7(VAR_13->scm, FUNC_0(VAR_18).pid, FUNC_0(VAR_18).cred);
 FUNC_13(VAR_13->scm, VAR_18);

 if (!(VAR_12 & VAR_4)) {
  if (FUNC_0(VAR_18).fp)
   FUNC_12(VAR_13->scm, VAR_18);
 } else {
  if (FUNC_0(VAR_18).fp)
   VAR_13->scm->fp = FUNC_5(FUNC_0(VAR_18).fp);
 }
 VAR_19 = VAR_11;

 FUNC_6(VAR_9, VAR_10, VAR_13->scm, VAR_12);

out_free:
 FUNC_9(VAR_15, VAR_18);
out_unlock:
 FUNC_4(&VAR_16->readlock);
out:
 return VAR_19;
}
