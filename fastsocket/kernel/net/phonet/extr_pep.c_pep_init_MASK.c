
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct pep_sock {int pipe_handle; int ctrlreq_queue; int hlist; int ackq; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct pep_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1)
{
 struct pep_sock *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->ackq);
 FUNC_0(&VAR_2->hlist);
 FUNC_2(&VAR_2->ctrlreq_queue);
 VAR_2->pipe_handle = VAR_0;
 return 0;
}
