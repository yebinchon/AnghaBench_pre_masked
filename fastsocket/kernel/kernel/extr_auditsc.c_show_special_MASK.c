
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u32 ;
struct mq_attr {int mq_curmsgs; int mq_msgsize; int mq_maxmsg; int mq_flags; } ;
struct TYPE_13__ {int fd; int flags; } ;
struct TYPE_22__ {int effective; int permitted; int inheritable; } ;
struct TYPE_12__ {TYPE_9__ cap; int pid; } ;
struct TYPE_21__ {int mqdes; struct mq_attr mqstat; } ;
struct TYPE_20__ {int mqdes; int sigev_signo; } ;
struct TYPE_18__ {int tv_nsec; int tv_sec; } ;
struct TYPE_19__ {TYPE_5__ abs_timeout; int msg_prio; int msg_len; int mqdes; } ;
struct TYPE_16__ {int mq_curmsgs; int mq_msgsize; int mq_maxmsg; int mq_flags; } ;
struct TYPE_17__ {TYPE_3__ attr; int mode; int oflag; } ;
struct TYPE_15__ {int perm_mode; int perm_gid; int perm_uid; int qbytes; int has_perm; int mode; int gid; int uid; int osid; } ;
struct TYPE_14__ {int nargs; int * args; } ;
struct audit_context {int type; TYPE_11__ mmap; TYPE_10__ capset; TYPE_8__ mq_getsetattr; TYPE_7__ mq_notify; TYPE_6__ mq_sendrecv; TYPE_4__ mq_open; TYPE_2__ ipc; TYPE_1__ socketcall; } ;
struct audit_buffer {int dummy; } ;




 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (struct audit_buffer*,char*,int *) ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,...) ;
 struct audit_buffer* FUNC_3 (struct audit_context*,int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char**,int *) ;

__attribute__((used)) static void FUNC_6(struct audit_context *VAR_2, int *VAR_3)
{
 struct audit_buffer *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2, VAR_1, VAR_2->type);
 if (!VAR_4)
  return;

 switch (VAR_2->type) {
 case 128: {
  int VAR_6 = VAR_2->socketcall.nargs;
  FUNC_2(VAR_4, "nargs=%d", VAR_6);
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_2(VAR_4, " a%d=%lx", VAR_5,
    VAR_2->socketcall.args[VAR_5]);
  break; }
 case 134: {
  u32 VAR_7 = VAR_2->ipc.osid;

  FUNC_2(VAR_4, "ouid=%u ogid=%u mode=%#o",
    VAR_2->ipc.uid, VAR_2->ipc.gid, VAR_2->ipc.mode);
  if (VAR_7) {
   char *VAR_8 = ((void*)0);
   u32 VAR_9;
   if (FUNC_5(VAR_7, &VAR_8, &VAR_9)) {
    FUNC_2(VAR_4, " osid=%u", VAR_7);
    *VAR_3 = 1;
   } else {
    FUNC_2(VAR_4, " obj=%s", VAR_8);
    FUNC_4(VAR_8, VAR_9);
   }
  }
  if (VAR_2->ipc.has_perm) {
   FUNC_1(VAR_4);
   VAR_4 = FUNC_3(VAR_2, VAR_1,
          VAR_0);
   FUNC_2(VAR_4,
    "qbytes=%lx ouid=%u ogid=%u mode=%#o",
    VAR_2->ipc.qbytes,
    VAR_2->ipc.perm_uid,
    VAR_2->ipc.perm_gid,
    VAR_2->ipc.perm_mode);
   if (!VAR_4)
    return;
  }
  break; }
 case 130: {
  FUNC_2(VAR_4,
   "oflag=0x%x mode=%#o mq_flags=0x%lx mq_maxmsg=%ld "
   "mq_msgsize=%ld mq_curmsgs=%ld",
   VAR_2->mq_open.oflag, VAR_2->mq_open.mode,
   VAR_2->mq_open.attr.mq_flags,
   VAR_2->mq_open.attr.mq_maxmsg,
   VAR_2->mq_open.attr.mq_msgsize,
   VAR_2->mq_open.attr.mq_curmsgs);
  break; }
 case 129: {
  FUNC_2(VAR_4,
   "mqdes=%d msg_len=%zd msg_prio=%u "
   "abs_timeout_sec=%ld abs_timeout_nsec=%ld",
   VAR_2->mq_sendrecv.mqdes,
   VAR_2->mq_sendrecv.msg_len,
   VAR_2->mq_sendrecv.msg_prio,
   VAR_2->mq_sendrecv.abs_timeout.tv_sec,
   VAR_2->mq_sendrecv.abs_timeout.tv_nsec);
  break; }
 case 131: {
  FUNC_2(VAR_4, "mqdes=%d sigev_signo=%d",
    VAR_2->mq_notify.mqdes,
    VAR_2->mq_notify.sigev_signo);
  break; }
 case 132: {
  struct mq_attr *VAR_10 = &VAR_2->mq_getsetattr.mqstat;
  FUNC_2(VAR_4,
   "mqdes=%d mq_flags=0x%lx mq_maxmsg=%ld mq_msgsize=%ld "
   "mq_curmsgs=%ld ",
   VAR_2->mq_getsetattr.mqdes,
   VAR_10->mq_flags, VAR_10->mq_maxmsg,
   VAR_10->mq_msgsize, VAR_10->mq_curmsgs);
  break; }
 case 135: {
  FUNC_2(VAR_4, "pid=%d", VAR_2->capset.pid);
  FUNC_0(VAR_4, "cap_pi", &VAR_2->capset.cap.inheritable);
  FUNC_0(VAR_4, "cap_pp", &VAR_2->capset.cap.permitted);
  FUNC_0(VAR_4, "cap_pe", &VAR_2->capset.cap.effective);
  break; }
 case 133: {
  FUNC_2(VAR_4, "fd=%d flags=0x%x", VAR_2->mmap.fd,
     VAR_2->mmap.flags);
  break; }
 }
 FUNC_1(VAR_4);
}
