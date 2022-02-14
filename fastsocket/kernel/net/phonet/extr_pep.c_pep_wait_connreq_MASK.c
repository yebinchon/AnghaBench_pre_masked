
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct sock {scalar_t__ sk_state; TYPE_1__* sk_socket; } ;
struct pep_sock {int ackq; } ;
struct TYPE_2__ {int wait; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct task_struct* VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 struct pep_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (struct sock*) ;
 long FUNC_7 (long) ;
 scalar_t__ FUNC_8 (struct task_struct*) ;
 int FUNC_9 (long) ;
 long FUNC_10 (struct sock*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_6, int VAR_7)
{
 struct task_struct *VAR_8 = VAR_4;
 struct pep_sock *VAR_9 = FUNC_4(VAR_6);
 long VAR_10 = FUNC_10(VAR_6, VAR_7);

 for (;;) {
  FUNC_0(VAR_5);

  if (VAR_6->sk_state != VAR_3)
   return -VAR_0;
  if (!FUNC_2(&VAR_9->ackq))
   break;
  if (!VAR_10)
   return -VAR_1;
  if (FUNC_8(VAR_8))
   return FUNC_9(VAR_10);

  FUNC_5(&VAR_6->sk_socket->wait, &VAR_5,
      VAR_2);
  FUNC_6(VAR_6);
  VAR_10 = FUNC_7(VAR_10);
  FUNC_3(VAR_6);
  FUNC_1(&VAR_6->sk_socket->wait, &VAR_5);
 }

 return 0;
}
