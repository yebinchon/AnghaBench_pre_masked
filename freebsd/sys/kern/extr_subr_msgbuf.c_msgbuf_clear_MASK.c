
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgbuf {scalar_t__ msg_cksum; scalar_t__ msg_rseq; scalar_t__ msg_wseq; int msg_size; int msg_ptr; } ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(struct msgbuf *VAR_0)
{

 FUNC_0(VAR_0->msg_ptr, VAR_0->msg_size);
 VAR_0->msg_wseq = 0;
 VAR_0->msg_rseq = 0;
 VAR_0->msg_cksum = 0;
}
