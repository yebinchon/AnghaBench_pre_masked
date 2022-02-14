
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff {int dummy; } ;
struct netlink_sock {int wait; int state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 struct netlink_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (int *,int *) ;
 long FUNC_9 (long) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*,struct sock*) ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (long) ;
 int FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int VAR_5 ;

int FUNC_16(struct sock *VAR_6, struct sk_buff *VAR_7,
        long *VAR_8, struct sock *VAR_9)
{
 struct netlink_sock *VAR_10;

 VAR_10 = FUNC_7(VAR_6);

 if (FUNC_3(&VAR_6->sk_rmem_alloc) > VAR_6->sk_rcvbuf ||
     FUNC_15(0, &VAR_10->state)) {
  FUNC_0(VAR_5, VAR_4);
  if (!*VAR_8) {
   if (!VAR_9 || FUNC_5(VAR_9))
    FUNC_6(VAR_6);
   FUNC_14(VAR_6);
   FUNC_4(VAR_7);
   return -VAR_0;
  }

  FUNC_1(VAR_2);
  FUNC_2(&VAR_10->wait, &VAR_5);

  if ((FUNC_3(&VAR_6->sk_rmem_alloc) > VAR_6->sk_rcvbuf ||
       FUNC_15(0, &VAR_10->state)) &&
      !FUNC_12(VAR_6, VAR_1))
   *VAR_8 = FUNC_9(*VAR_8);

  FUNC_1(VAR_3);
  FUNC_8(&VAR_10->wait, &VAR_5);
  FUNC_14(VAR_6);

  if (FUNC_10(VAR_4)) {
   FUNC_4(VAR_7);
   return FUNC_13(*VAR_8);
  }
  return 1;
 }
 FUNC_11(VAR_7, VAR_6);
 return 0;
}
