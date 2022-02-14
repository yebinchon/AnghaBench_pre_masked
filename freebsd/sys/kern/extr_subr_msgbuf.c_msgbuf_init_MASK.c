
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgbuf {int msg_size; int msg_lastpri; int msg_lock; scalar_t__ msg_flags; int msg_magic; int msg_seqmod; void* msg_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct msgbuf*) ;
 int FUNC_3 (int *,char*,int *,int ) ;

void
FUNC_4(struct msgbuf *VAR_2, void *VAR_3, int VAR_4)
{

 VAR_2->msg_ptr = VAR_3;
 VAR_2->msg_size = VAR_4;
 VAR_2->msg_seqmod = FUNC_0(VAR_4);
 FUNC_2(VAR_2);
 VAR_2->msg_magic = VAR_0;
 VAR_2->msg_lastpri = -1;
 VAR_2->msg_flags = 0;
 FUNC_1(&VAR_2->msg_lock, sizeof(VAR_2->msg_lock));
 FUNC_3(&VAR_2->msg_lock, "msgbuf", ((void*)0), VAR_1);
}
