
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int wait; struct sock* sk; } ;
struct sock {int sk_state; int sk_receive_queue; } ;
struct pep_sock {int tx_credits; int ctrlreq_queue; int ackq; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;

 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pep_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct file*,int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static unsigned int FUNC_5(struct file *VAR_10, struct socket *VAR_11,
     poll_table *VAR_12)
{
 struct sock *VAR_13 = VAR_11->sk;
 struct pep_sock *VAR_14 = FUNC_2(VAR_13);
 unsigned int VAR_15 = 0;

 FUNC_3(VAR_10, &VAR_11->wait, VAR_12);

 switch (VAR_13->sk_state) {
 case 128:
  return FUNC_1(&VAR_14->ackq) ? 0 : VAR_2;
 case 129:
  return VAR_0;
 }

 if (!FUNC_4(&VAR_13->sk_receive_queue))
  VAR_15 |= VAR_2 | VAR_5;
 if (!FUNC_4(&VAR_14->ctrlreq_queue))
  VAR_15 |= VAR_4;
 if (!VAR_15 && VAR_13->sk_state == VAR_8)
  return VAR_1;

 if (VAR_13->sk_state == VAR_9 && FUNC_0(&VAR_14->tx_credits))
  VAR_15 |= VAR_3 | VAR_7 | VAR_6;

 return VAR_15;
}
