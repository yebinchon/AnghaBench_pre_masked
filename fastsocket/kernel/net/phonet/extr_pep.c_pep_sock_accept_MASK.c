
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct pep_sock {int hlist; struct sock* listener; int ackq; } ;


 int VAR_0 ;
 struct sock* FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 struct pep_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int *) ;
 int FUNC_9 (struct sock*) ;
 struct sk_buff* FUNC_10 (int *) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_13(struct sock *VAR_1, int VAR_2, int *VAR_3)
{
 struct pep_sock *VAR_4 = FUNC_4(VAR_1);
 struct sock *VAR_5 = ((void*)0);
 struct sk_buff *VAR_6;
 int VAR_7;

 FUNC_2(VAR_1);
 VAR_7 = FUNC_5(VAR_1, VAR_2 & VAR_0);
 if (VAR_7)
  goto out;

 VAR_5 = FUNC_0(&VAR_4->ackq);

 VAR_6 = FUNC_10(&VAR_5->sk_receive_queue);
 VAR_7 = FUNC_3(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_11(&VAR_5->sk_receive_queue, VAR_6);
  VAR_5 = ((void*)0);
  goto out;
 }

 FUNC_12(VAR_1);
 FUNC_4(VAR_5)->listener = VAR_1;

 FUNC_12(VAR_5);
 FUNC_9(VAR_5);
 FUNC_7(VAR_1);
 FUNC_8(VAR_5, &VAR_4->hlist);
 FUNC_1(VAR_5);

out:
 FUNC_6(VAR_1);
 *VAR_3 = VAR_7;
 return VAR_5;
}
