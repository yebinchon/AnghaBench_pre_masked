
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgbuf {int msg_lock; int msg_wseq; } ;


 int FUNC_0 (struct msgbuf*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct msgbuf *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->msg_lock);

 FUNC_0(VAR_0, &VAR_0->msg_wseq, VAR_1);

 FUNC_2(&VAR_0->msg_lock);
}
