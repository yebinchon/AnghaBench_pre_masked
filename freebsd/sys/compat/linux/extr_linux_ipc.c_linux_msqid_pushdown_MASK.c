
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l_msqid_ds {scalar_t__ msg_stime; scalar_t__ msg_rtime; scalar_t__ msg_ctime; scalar_t__ msg_cbytes; scalar_t__ msg_lcbytes; scalar_t__ msg_qnum; scalar_t__ msg_qbytes; scalar_t__ msg_lqbytes; int msg_lrpid; int msg_lspid; int msg_perm; } ;
struct l_msqid64_ds {scalar_t__ msg_stime; scalar_t__ msg_rtime; scalar_t__ msg_ctime; scalar_t__ msg_cbytes; scalar_t__ msg_lcbytes; scalar_t__ msg_qnum; scalar_t__ msg_qbytes; scalar_t__ msg_lqbytes; int msg_lrpid; int msg_lspid; int msg_perm; } ;
typedef int linux_msqid ;
typedef scalar_t__ l_int ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct l_msqid_ds*,int) ;
 int FUNC_2 (struct l_msqid_ds*,int ,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(l_int VAR_4, struct l_msqid64_ds *VAR_5, caddr_t VAR_6)
{
 struct l_msqid_ds VAR_7;
 int VAR_8;

 if (VAR_4 == VAR_1 || FUNC_0(VAR_2))
  return (FUNC_2(VAR_5, VAR_6, sizeof(*VAR_5)));
 else {
  FUNC_1(&VAR_7, sizeof(VAR_7));

  VAR_8 = FUNC_3(&VAR_5->msg_perm,
      &VAR_7.msg_perm);
  if (VAR_8 != 0)
   return (VAR_8);

  VAR_7.msg_stime = VAR_5->msg_stime;
  VAR_7.msg_rtime = VAR_5->msg_rtime;
  VAR_7.msg_ctime = VAR_5->msg_ctime;

  if (VAR_5->msg_cbytes > VAR_3)
   VAR_7.msg_cbytes = VAR_3;
  else
   VAR_7.msg_cbytes = VAR_5->msg_cbytes;
  VAR_7.msg_lcbytes = VAR_5->msg_cbytes;
  if (VAR_5->msg_qnum > VAR_3)
   VAR_7.msg_qnum = VAR_3;
  else
   VAR_7.msg_qnum = VAR_5->msg_qnum;
  if (VAR_5->msg_qbytes > VAR_3)
   VAR_7.msg_qbytes = VAR_3;
  else
   VAR_7.msg_qbytes = VAR_5->msg_qbytes;
  VAR_7.msg_lqbytes = VAR_5->msg_qbytes;
  VAR_7.msg_lspid = VAR_5->msg_lspid;
  VAR_7.msg_lrpid = VAR_5->msg_lrpid;


  if (VAR_7.msg_stime != VAR_5->msg_stime ||
      VAR_7.msg_rtime != VAR_5->msg_rtime ||
      VAR_7.msg_ctime != VAR_5->msg_ctime)
   return (VAR_0);

  return (FUNC_2(&VAR_7, VAR_6, sizeof(VAR_7)));
 }
}
