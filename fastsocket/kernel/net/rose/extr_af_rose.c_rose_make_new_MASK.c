
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_type; int sk_state; int sk_sndbuf; int sk_rcvbuf; int sk_protocol; int sk_priority; } ;
struct rose_sock {int qbitincl; int device; int defer; int idle; int hb; int t3; int t2; int t1; int idletimer; int timer; scalar_t__ fraglen; int frag_queue; int ack_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 struct rose_sock* FUNC_1 (struct sock*) ;
 struct sock* FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*,struct sock*) ;
 int FUNC_5 (int *,struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_7(struct sock *VAR_5)
{
 struct sock *VAR_6;
 struct rose_sock *VAR_7, *VAR_8;

 if (VAR_5->sk_type != VAR_2)
  return ((void*)0);

 VAR_6 = FUNC_2(FUNC_6(VAR_5), VAR_1, VAR_0, &VAR_4);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_7 = FUNC_1(VAR_6);

 FUNC_5(((void*)0), VAR_6);

 FUNC_3(&VAR_7->ack_queue);





 VAR_6->sk_type = VAR_5->sk_type;
 VAR_6->sk_priority = VAR_5->sk_priority;
 VAR_6->sk_protocol = VAR_5->sk_protocol;
 VAR_6->sk_rcvbuf = VAR_5->sk_rcvbuf;
 VAR_6->sk_sndbuf = VAR_5->sk_sndbuf;
 VAR_6->sk_state = VAR_3;
 FUNC_4(VAR_6, VAR_5);

 FUNC_0(&VAR_7->timer);
 FUNC_0(&VAR_7->idletimer);

 VAR_8 = FUNC_1(VAR_5);
 VAR_7->t1 = VAR_8->t1;
 VAR_7->t2 = VAR_8->t2;
 VAR_7->t3 = VAR_8->t3;
 VAR_7->hb = VAR_8->hb;
 VAR_7->idle = VAR_8->idle;
 VAR_7->defer = VAR_8->defer;
 VAR_7->device = VAR_8->device;
 VAR_7->qbitincl = VAR_8->qbitincl;

 return VAR_6;
}
