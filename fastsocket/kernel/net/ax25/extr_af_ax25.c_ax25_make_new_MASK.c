
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_type; int sk_destruct; TYPE_1__* sk_protinfo; int sk_state; int sk_sndbuf; int sk_rcvbuf; int sk_protocol; int sk_priority; int sk_prot; } ;
struct ax25_dev {int dummy; } ;
typedef int ax25_digi ;
struct TYPE_5__ {struct sock* sk; int * digipeat; int source_addr; struct ax25_dev* ax25_dev; int window; int paclen; int idle; int n2; int t3; int t2; int t1; int rtt; int iamdigi; int pidincl; int backoff; int modulus; } ;
typedef TYPE_1__ ax25_cb ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int * FUNC_3 (int *,int,int ) ;
 struct sock* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sock*) ;
 int FUNC_7 (int *,struct sock*) ;
 int FUNC_8 (struct sock*) ;

struct sock *FUNC_9(struct sock *VAR_4, struct ax25_dev *VAR_5)
{
 struct sock *VAR_6;
 ax25_cb *VAR_7, *VAR_8;

 VAR_6 = FUNC_4(FUNC_8(VAR_4), VAR_1, VAR_0, VAR_4->sk_prot);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if ((VAR_7 = FUNC_1()) == ((void*)0)) {
  FUNC_5(VAR_6);
  return ((void*)0);
 }

 switch (VAR_4->sk_type) {
 case 129:
  break;
 case 128:
  break;
 default:
  FUNC_5(VAR_6);
  FUNC_0(VAR_7);
  return ((void*)0);
 }

 FUNC_7(((void*)0), VAR_6);

 VAR_6->sk_type = VAR_4->sk_type;
 VAR_6->sk_priority = VAR_4->sk_priority;
 VAR_6->sk_protocol = VAR_4->sk_protocol;
 VAR_6->sk_rcvbuf = VAR_4->sk_rcvbuf;
 VAR_6->sk_sndbuf = VAR_4->sk_sndbuf;
 VAR_6->sk_state = VAR_2;
 FUNC_6(VAR_6, VAR_4);

 VAR_8 = FUNC_2(VAR_4);

 VAR_7->modulus = VAR_8->modulus;
 VAR_7->backoff = VAR_8->backoff;
 VAR_7->pidincl = VAR_8->pidincl;
 VAR_7->iamdigi = VAR_8->iamdigi;
 VAR_7->rtt = VAR_8->rtt;
 VAR_7->t1 = VAR_8->t1;
 VAR_7->t2 = VAR_8->t2;
 VAR_7->t3 = VAR_8->t3;
 VAR_7->n2 = VAR_8->n2;
 VAR_7->idle = VAR_8->idle;
 VAR_7->paclen = VAR_8->paclen;
 VAR_7->window = VAR_8->window;

 VAR_7->ax25_dev = VAR_5;
 VAR_7->source_addr = VAR_8->source_addr;

 if (VAR_8->digipeat != ((void*)0)) {
  VAR_7->digipeat = FUNC_3(VAR_8->digipeat, sizeof(ax25_digi),
      VAR_0);
  if (VAR_7->digipeat == ((void*)0)) {
   FUNC_5(VAR_6);
   FUNC_0(VAR_7);
   return ((void*)0);
  }
 }

 VAR_6->sk_protinfo = VAR_7;
 VAR_6->sk_destruct = VAR_3;
 VAR_7->sk = VAR_6;

 return VAR_6;
}
