
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msqid_ds {int msg_ctime; int msg_rtime; int msg_stime; int msg_lrpid; int msg_lspid; int msg_qbytes; int msg_qnum; int msg_cbytes; int msg_perm; } ;
struct l_msqid64_ds {int msg_ctime; int msg_rtime; int msg_stime; int msg_lrpid; int msg_lspid; int msg_qbytes; int msg_qnum; int msg_cbytes; int msg_perm; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct l_msqid64_ds *VAR_0, struct msqid_ds *VAR_1)
{

 FUNC_0(&VAR_0->msg_perm, &VAR_1->msg_perm);
 VAR_1->msg_cbytes = VAR_0->msg_cbytes;
 VAR_1->msg_qnum = VAR_0->msg_qnum;
 VAR_1->msg_qbytes = VAR_0->msg_qbytes;
 VAR_1->msg_lspid = VAR_0->msg_lspid;
 VAR_1->msg_lrpid = VAR_0->msg_lrpid;
 VAR_1->msg_stime = VAR_0->msg_stime;
 VAR_1->msg_rtime = VAR_0->msg_rtime;
 VAR_1->msg_ctime = VAR_0->msg_ctime;
}
