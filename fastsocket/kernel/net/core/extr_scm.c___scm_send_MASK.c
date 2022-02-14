
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct socket {TYPE_1__* ops; } ;
struct TYPE_8__ {int gid; int uid; int pid; } ;
struct scm_cookie {TYPE_2__* fp; struct cred* cred; TYPE_3__ creds; struct pid* pid; } ;
struct pid {int dummy; } ;
struct msghdr {int dummy; } ;
struct cred {int egid; int gid; int euid; int uid; } ;
struct cmsghdr {scalar_t__ cmsg_level; int cmsg_type; int cmsg_len; } ;
struct TYPE_7__ {int count; } ;
struct TYPE_6__ {int family; } ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 int FUNC_2 (int) ;
 struct cmsghdr* FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_4 (struct msghdr*,struct cmsghdr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ VAR_4 ;
 struct pid* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (struct pid*) ;
 struct cred* FUNC_9 () ;
 int FUNC_10 (struct cred*) ;
 int FUNC_11 (struct pid*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (struct scm_cookie*) ;
 int FUNC_14 (struct cmsghdr*,TYPE_2__**) ;

int FUNC_15(struct socket *VAR_5, struct msghdr *VAR_6, struct scm_cookie *VAR_7)
{
 struct cmsghdr *VAR_8;
 int VAR_9;

 for (VAR_8 = FUNC_1(VAR_6); VAR_8; VAR_8 = FUNC_3(VAR_6, VAR_8))
 {
  VAR_9 = -VAR_0;
  if (!FUNC_4(VAR_6, VAR_8))
   goto error;

  if (VAR_8->cmsg_level != VAR_4)
   continue;

  switch (VAR_8->cmsg_type)
  {
  case 128:
   if (!VAR_5->ops || VAR_5->ops->family != VAR_3)
    goto error;
   VAR_9=FUNC_14(VAR_8, &VAR_7->fp);
   if (VAR_9<0)
    goto error;
   break;
  case 129:
   if (VAR_8->cmsg_len != FUNC_2(sizeof(struct ucred)))
    goto error;
   FUNC_7(&VAR_7->creds, FUNC_0(VAR_8), sizeof(struct ucred));
   VAR_9 = FUNC_12(&VAR_7->creds);
   if (VAR_9)
    goto error;

   if (!VAR_7->pid || FUNC_8(VAR_7->pid) != VAR_7->creds.pid) {
    struct pid *VAR_10;
    VAR_9 = -VAR_2;
    VAR_10 = FUNC_5(VAR_7->creds.pid);
    if (!VAR_10)
     goto error;
    FUNC_11(VAR_7->pid);
    VAR_7->pid = VAR_10;
   }

   if (!VAR_7->cred ||
       (VAR_7->cred->euid != VAR_7->creds.uid) ||
       (VAR_7->cred->egid != VAR_7->creds.gid)) {
    struct cred *VAR_11;
    VAR_9 = -VAR_1;
    VAR_11 = FUNC_9();
    if (!VAR_11)
     goto error;

    VAR_11->uid = VAR_11->euid = VAR_7->creds.uid;
    VAR_11->gid = VAR_11->egid = VAR_7->creds.gid;
    if (VAR_7->cred)
     FUNC_10(VAR_7->cred);
    VAR_7->cred = VAR_11;
   }
   break;
  default:
   goto error;
  }
 }

 if (VAR_7->fp && !VAR_7->fp->count)
 {
  FUNC_6(VAR_7->fp);
  VAR_7->fp = ((void*)0);
 }
 return 0;

error:
 FUNC_13(VAR_7);
 return VAR_9;
}
