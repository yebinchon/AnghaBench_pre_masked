
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; int * ops; } ;
struct sock {int sk_protocol; } ;
struct rose_sock {int state; void* idle; void* hb; void* t3; void* t2; void* t1; int idletimer; int timer; scalar_t__ fraglen; int frag_queue; int ack_queue; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct net VAR_7 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 struct rose_sock* FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (struct net*,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct socket*,struct sock*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_6(struct net *VAR_15, struct socket *VAR_16, int VAR_17,
         int VAR_18)
{
 struct sock *VAR_19;
 struct rose_sock *VAR_20;

 if (VAR_15 != &VAR_7)
  return -VAR_0;

 if (VAR_16->type != VAR_6 || VAR_17 != 0)
  return -VAR_2;

 VAR_19 = FUNC_3(VAR_15, VAR_4, VAR_3, &VAR_8);
 if (VAR_19 == ((void*)0))
  return -VAR_1;

 VAR_20 = FUNC_2(VAR_19);

 FUNC_5(VAR_16, VAR_19);

 FUNC_4(&VAR_20->ack_queue);





 VAR_16->ops = &VAR_9;
 VAR_19->sk_protocol = VAR_17;

 FUNC_0(&VAR_20->timer);
 FUNC_0(&VAR_20->idletimer);

 VAR_20->t1 = FUNC_1(VAR_11);
 VAR_20->t2 = FUNC_1(VAR_14);
 VAR_20->t3 = FUNC_1(VAR_12);
 VAR_20->hb = FUNC_1(VAR_10);
 VAR_20->idle = FUNC_1(VAR_13);

 VAR_20->state = VAR_5;

 return 0;
}
