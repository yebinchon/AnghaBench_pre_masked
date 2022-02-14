
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_sock {int accptapprv; int cudmatchlength; int dte_facilities; int qbitincl; int facilities; int t2; int t23; int t22; int t21; } ;
struct sock {scalar_t__ sk_type; int sk_backlog_rcv; int sk_state; int sk_sndbuf; int sk_rcvbuf; int sk_protocol; int sk_priority; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct sock* FUNC_2 (int ) ;
 int FUNC_3 (struct sock*) ;
 struct x25_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_5(struct sock *VAR_2)
{
 struct sock *VAR_3 = ((void*)0);
 struct x25_sock *VAR_4, *VAR_5;

 if (VAR_2->sk_type != VAR_0)
  goto out;

 if ((VAR_3 = FUNC_2(FUNC_1(VAR_2))) == ((void*)0))
  goto out;

 VAR_4 = FUNC_4(VAR_3);

 VAR_3->sk_type = VAR_2->sk_type;
 VAR_3->sk_priority = VAR_2->sk_priority;
 VAR_3->sk_protocol = VAR_2->sk_protocol;
 VAR_3->sk_rcvbuf = VAR_2->sk_rcvbuf;
 VAR_3->sk_sndbuf = VAR_2->sk_sndbuf;
 VAR_3->sk_state = VAR_1;
 VAR_3->sk_backlog_rcv = VAR_2->sk_backlog_rcv;
 FUNC_0(VAR_3, VAR_2);

 VAR_5 = FUNC_4(VAR_2);
 VAR_4->t21 = VAR_5->t21;
 VAR_4->t22 = VAR_5->t22;
 VAR_4->t23 = VAR_5->t23;
 VAR_4->t2 = VAR_5->t2;
 VAR_4->facilities = VAR_5->facilities;
 VAR_4->qbitincl = VAR_5->qbitincl;
 VAR_4->dte_facilities = VAR_5->dte_facilities;
 VAR_4->cudmatchlength = VAR_5->cudmatchlength;
 VAR_4->accptapprv = VAR_5->accptapprv;

 FUNC_3(VAR_3);
out:
 return VAR_3;
}
