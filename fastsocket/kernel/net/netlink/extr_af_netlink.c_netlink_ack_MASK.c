
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int (* sk_error_report ) (struct sock*) ;int sk_err; } ;
struct sk_buff {TYPE_1__* sk; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_seq; } ;
struct nlmsgerr {int error; int msg; } ;
struct TYPE_5__ {int pid; } ;
struct TYPE_4__ {int sk_protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*,int ,int ,int ,size_t,int ) ;
 int FUNC_2 (int *,struct nlmsghdr*,int) ;
 struct sock* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,struct sk_buff*,int ,int ) ;
 struct nlmsgerr* FUNC_5 (struct nlmsghdr*) ;
 scalar_t__ FUNC_6 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_7 (size_t,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;

void FUNC_11(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5, int VAR_6)
{
 struct sk_buff *VAR_7;
 struct nlmsghdr *VAR_8;
 struct nlmsgerr *VAR_9;
 size_t VAR_10 = sizeof(*VAR_9);


 if (VAR_6)
  VAR_10 += FUNC_6(VAR_5);

 VAR_7 = FUNC_7(VAR_10, VAR_1);
 if (!VAR_7) {
  struct sock *VAR_11;

  VAR_11 = FUNC_3(FUNC_8(VAR_4->sk),
        VAR_4->sk->sk_protocol,
        FUNC_0(VAR_4).pid);
  if (VAR_11) {
   VAR_11->sk_err = VAR_0;
   VAR_11->sk_error_report(VAR_11);
   FUNC_9(VAR_11);
  }
  return;
 }

 VAR_8 = FUNC_1(VAR_7, FUNC_0(VAR_4).pid, VAR_5->nlmsg_seq,
     VAR_3, VAR_10, 0);
 VAR_9 = FUNC_5(VAR_8);
 VAR_9->error = VAR_6;
 FUNC_2(&VAR_9->msg, VAR_5, VAR_6 ? VAR_5->nlmsg_len : sizeof(*VAR_5));
 FUNC_4(VAR_4->sk, VAR_7, FUNC_0(VAR_4).pid, VAR_2);
}
