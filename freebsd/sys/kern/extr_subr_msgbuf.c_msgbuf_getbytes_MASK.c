
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct msgbuf {scalar_t__ msg_wseq; scalar_t__ msg_rseq; scalar_t__ msg_size; int msg_lock; int * msg_ptr; } ;


 void* FUNC_0 (struct msgbuf*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct msgbuf*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct msgbuf*,scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct msgbuf *VAR_0, char *VAR_1, int VAR_2)
{
 u_int VAR_3, VAR_4, VAR_5;

 FUNC_5(&VAR_0->msg_lock);

 VAR_5 = VAR_0->msg_wseq;
 VAR_3 = FUNC_1(VAR_0, VAR_5, VAR_0->msg_rseq);
 if (VAR_3 == 0) {
  FUNC_6(&VAR_0->msg_lock);
  return (0);
 }
 if (VAR_3 > VAR_0->msg_size) {
  VAR_0->msg_rseq = FUNC_0(VAR_0, VAR_5 - VAR_0->msg_size);
  VAR_3 = VAR_0->msg_size;
 }
 VAR_4 = FUNC_2(VAR_0, VAR_0->msg_rseq);
 VAR_3 = FUNC_4(VAR_3, VAR_0->msg_size - VAR_4);
 VAR_3 = FUNC_4(VAR_3, (u_int)VAR_2);

 FUNC_3(&VAR_0->msg_ptr[VAR_4], VAR_1, VAR_3);
 VAR_0->msg_rseq = FUNC_0(VAR_0, VAR_0->msg_rseq + VAR_3);

 FUNC_6(&VAR_0->msg_lock);

 return (VAR_3);
}
