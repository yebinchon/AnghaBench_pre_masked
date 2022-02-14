
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnode {TYPE_1__* v_mount; } ;
struct TYPE_6__ {scalar_t__ tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct vattr {TYPE_2__ va_birthtime; TYPE_4__ va_mtime; TYPE_3__ va_atime; } ;
struct ucred {int dummy; } ;
struct tmpfs_node {int tn_flags; TYPE_2__ tn_birthtime; int tn_status; } ;
struct thread {int dummy; } ;
struct TYPE_5__ {int mnt_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct tmpfs_node* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (struct vnode*,struct vattr*,struct ucred*,struct thread*) ;

int
FUNC_4(struct vnode *VAR_8, struct vattr *VAR_9,
    struct ucred *VAR_10, struct thread *VAR_11)
{
 int VAR_12;
 struct tmpfs_node *VAR_13;

 FUNC_0(VAR_8, "chtimes");

 VAR_13 = FUNC_1(VAR_8);


 if (VAR_8->v_mount->mnt_flag & VAR_4)
  return VAR_2;


 if (VAR_13->tn_flags & (VAR_3 | VAR_0))
  return VAR_1;

 VAR_12 = FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_12 != 0)
  return (VAR_12);

 if (VAR_9->va_atime.tv_sec != VAR_7)
  VAR_13->tn_status |= VAR_5;

 if (VAR_9->va_mtime.tv_sec != VAR_7)
  VAR_13->tn_status |= VAR_6;

 if (VAR_9->va_birthtime.tv_sec != VAR_7)
  VAR_13->tn_status |= VAR_6;

 FUNC_2(VAR_8, &VAR_9->va_atime, &VAR_9->va_mtime);

 if (VAR_9->va_birthtime.tv_sec != VAR_7)
  VAR_13->tn_birthtime = VAR_9->va_birthtime;
 FUNC_0(VAR_8, "chtimes2");

 return (0);
}
