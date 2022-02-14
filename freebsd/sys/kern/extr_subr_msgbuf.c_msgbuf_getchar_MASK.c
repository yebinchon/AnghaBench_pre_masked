
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;
struct msgbuf {scalar_t__ msg_wseq; scalar_t__ msg_size; int msg_lock; void* msg_rseq; scalar_t__* msg_ptr; } ;


 void* FUNC_0 (struct msgbuf*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct msgbuf*,scalar_t__,void*) ;
 size_t FUNC_2 (struct msgbuf*,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct msgbuf *VAR_0)
{
 u_int VAR_1, VAR_2;
 int VAR_3;

 FUNC_3(&VAR_0->msg_lock);

 VAR_2 = VAR_0->msg_wseq;
 VAR_1 = FUNC_1(VAR_0, VAR_2, VAR_0->msg_rseq);
 if (VAR_1 == 0) {
  FUNC_4(&VAR_0->msg_lock);
  return (-1);
 }
 if (VAR_1 > VAR_0->msg_size)
  VAR_0->msg_rseq = FUNC_0(VAR_0, VAR_2 - VAR_0->msg_size);
 VAR_3 = (u_char)VAR_0->msg_ptr[FUNC_2(VAR_0, VAR_0->msg_rseq)];
 VAR_0->msg_rseq = FUNC_0(VAR_0, VAR_0->msg_rseq + 1);

 FUNC_4(&VAR_0->msg_lock);

 return (VAR_3);
}
