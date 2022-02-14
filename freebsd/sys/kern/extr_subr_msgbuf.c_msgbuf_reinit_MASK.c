
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct msgbuf {scalar_t__ msg_magic; int msg_size; scalar_t__ msg_cksum; int msg_lastpri; int msg_lock; int msg_flags; void* msg_ptr; void* msg_rseq; void* msg_wseq; int msg_seqmod; } ;


 int VAR_0 ;
 void* FUNC_0 (struct msgbuf*,void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (struct msgbuf*) ;
 int FUNC_4 (struct msgbuf*) ;
 int FUNC_5 (struct msgbuf*,void*,int) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (char*,...) ;

void
FUNC_8(struct msgbuf *VAR_4, void *VAR_5, int VAR_6)
{
 u_int VAR_7;

 if (VAR_4->msg_magic != VAR_1 || VAR_4->msg_size != VAR_6) {
  FUNC_5(VAR_4, VAR_5, VAR_6);
  return;
 }
 VAR_4->msg_seqmod = FUNC_1(VAR_6);
 VAR_4->msg_wseq = FUNC_0(VAR_4, VAR_4->msg_wseq);
 VAR_4->msg_rseq = FUNC_0(VAR_4, VAR_4->msg_rseq);
        VAR_4->msg_ptr = VAR_5;
 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 != VAR_4->msg_cksum) {
  if (VAR_3) {
   FUNC_7("msgbuf cksum mismatch (read %x, calc %x)\n",
       VAR_4->msg_cksum, VAR_7);
   FUNC_7("Old msgbuf not recovered\n");
  }
  FUNC_4(VAR_4);
 }

 VAR_4->msg_lastpri = -1;

 VAR_4->msg_flags |= VAR_0;
 FUNC_2(&VAR_4->msg_lock, sizeof(VAR_4->msg_lock));
 FUNC_6(&VAR_4->msg_lock, "msgbuf", ((void*)0), VAR_2);
}
