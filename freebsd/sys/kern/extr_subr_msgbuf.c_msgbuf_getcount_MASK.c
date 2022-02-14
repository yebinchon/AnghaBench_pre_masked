
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct msgbuf {scalar_t__ msg_size; int msg_rseq; int msg_wseq; } ;


 scalar_t__ FUNC_0 (struct msgbuf*,int ,int ) ;

int
FUNC_1(struct msgbuf *VAR_0)
{
 u_int VAR_1;

 VAR_1 = FUNC_0(VAR_0, VAR_0->msg_wseq, VAR_0->msg_rseq);
 if (VAR_1 > VAR_0->msg_size)
  VAR_1 = VAR_0->msg_size;
 return (VAR_1);
}
