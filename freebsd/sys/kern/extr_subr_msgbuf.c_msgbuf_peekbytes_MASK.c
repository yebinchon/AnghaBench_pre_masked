
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct msgbuf {scalar_t__ msg_wseq; scalar_t__ msg_size; int msg_lock; int * msg_ptr; } ;


 scalar_t__ FUNC_0 (struct msgbuf*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct msgbuf*,scalar_t__,scalar_t__) ;
 size_t FUNC_2 (struct msgbuf*,scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct msgbuf *VAR_0, char *VAR_1, int VAR_2, u_int *VAR_3)
{
 u_int VAR_4, VAR_5, VAR_6;

 FUNC_5(&VAR_0->msg_lock);

 if (VAR_1 == ((void*)0)) {

  *VAR_3 = FUNC_0(VAR_0, VAR_0->msg_wseq - VAR_0->msg_size);
  FUNC_6(&VAR_0->msg_lock);
  return (0);
 }

 VAR_6 = VAR_0->msg_wseq;
 VAR_4 = FUNC_1(VAR_0, VAR_6, *VAR_3);
 if (VAR_4 == 0) {
  FUNC_6(&VAR_0->msg_lock);
  return (0);
 }
 if (VAR_4 > VAR_0->msg_size) {
  *VAR_3 = FUNC_0(VAR_0, VAR_6 - VAR_0->msg_size);
  VAR_4 = VAR_0->msg_size;
 }
 VAR_5 = FUNC_2(VAR_0, *VAR_3);
 VAR_4 = FUNC_4(VAR_4, VAR_0->msg_size - VAR_5);
 VAR_4 = FUNC_4(VAR_4, (u_int)VAR_2);
 FUNC_3(&VAR_0->msg_ptr[FUNC_2(VAR_0, *VAR_3)], VAR_1, VAR_4);
 *VAR_3 = FUNC_0(VAR_0, *VAR_3 + VAR_4);

 FUNC_6(&VAR_0->msg_lock);

 return (VAR_4);
}
