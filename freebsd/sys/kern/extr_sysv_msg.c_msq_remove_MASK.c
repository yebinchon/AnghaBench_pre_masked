
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_qnum; int msg_cbytes; scalar_t__ msg_qbytes; struct msg* __msg_first; } ;
struct msqid_kernel {TYPE_1__ u; int * cred; } ;
struct msg {struct msg* msg_next; scalar_t__ msg_ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct msqid_kernel*) ;
 int FUNC_2 (struct msg*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct msqid_kernel*) ;

__attribute__((used)) static void
FUNC_6(struct msqid_kernel *VAR_3)
{
 struct msg *VAR_4;

 FUNC_4(VAR_3->cred, VAR_2, 1);
 FUNC_4(VAR_3->cred, VAR_0, VAR_3->u.msg_qnum);
 FUNC_4(VAR_3->cred, VAR_1, VAR_3->u.msg_cbytes);
 FUNC_0(VAR_3->cred);
 VAR_3->cred = ((void*)0);


 VAR_4 = VAR_3->u.__msg_first;
 while (VAR_4 != ((void*)0)) {
  struct msg *VAR_5;


  VAR_3->u.msg_cbytes -= VAR_4->msg_ts;
  VAR_3->u.msg_qnum--;
  VAR_5 = VAR_4;
  VAR_4 = VAR_4->msg_next;
  FUNC_2(VAR_5);
 }

 if (VAR_3->u.msg_cbytes != 0)
  FUNC_3("msg_cbytes is screwed up");
 if (VAR_3->u.msg_qnum != 0)
  FUNC_3("msg_qnum is screwed up");

 VAR_3->u.msg_qbytes = 0;





 FUNC_5(VAR_3);
}
