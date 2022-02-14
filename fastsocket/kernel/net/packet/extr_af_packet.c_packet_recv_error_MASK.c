
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ee_errno; } ;
struct sock_exterr_skb {TYPE_3__ ee; } ;
struct TYPE_4__ {int lock; } ;
struct sock {TYPE_1__ sk_error_queue; int (* sk_error_report ) (struct sock*) ;int sk_err; } ;
struct sk_buff {int len; } ;
struct msghdr {int msg_flags; int msg_iov; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct msghdr*,int ,int ,int,TYPE_3__*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int) ;
 struct sk_buff* FUNC_4 (TYPE_1__*) ;
 struct sk_buff* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct msghdr*,struct sock*,struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_5, struct msghdr *VAR_6, int VAR_7)
{
 struct sock_exterr_skb *VAR_8;
 struct sk_buff *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = -VAR_0;
 VAR_9 = FUNC_4(&VAR_5->sk_error_queue);
 if (VAR_9 == ((void*)0))
  goto out;

 VAR_11 = VAR_9->len;
 if (VAR_11 > VAR_7) {
  VAR_6->msg_flags |= VAR_2;
  VAR_11 = VAR_7;
 }
 VAR_12 = FUNC_3(VAR_9, 0, VAR_6->msg_iov, VAR_11);
 if (VAR_12)
  goto out_free_skb;

 FUNC_6(VAR_6, VAR_5, VAR_9);

 VAR_8 = FUNC_0(VAR_9);
 FUNC_2(VAR_6, VAR_4, VAR_3,
   sizeof(VAR_8->ee), &VAR_8->ee);

 VAR_6->msg_flags |= VAR_1;
 VAR_12 = VAR_11;


 FUNC_7(&VAR_5->sk_error_queue.lock);
 VAR_5->sk_err = 0;
 if ((VAR_10 = FUNC_5(&VAR_5->sk_error_queue)) != ((void*)0)) {
  VAR_5->sk_err = FUNC_0(VAR_10)->ee.ee_errno;
  FUNC_8(&VAR_5->sk_error_queue.lock);
  VAR_5->sk_error_report(VAR_5);
 } else
  FUNC_8(&VAR_5->sk_error_queue.lock);

out_free_skb:
 FUNC_1(VAR_9);
out:
 return VAR_12;
}
