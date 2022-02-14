
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct vnode {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct inode {scalar_t__ i_size; int i_flag; int i_shortlink; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ mnt_maxsymlinklen; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct inode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct vnode*,scalar_t__,int,struct ucred*,struct thread*) ;
 int FUNC_4 (struct vnode*,scalar_t__,int,struct ucred*,struct thread*) ;
 int FUNC_5 (struct vnode*,int) ;
 int FUNC_6 (char*) ;

int
FUNC_7(struct vnode *VAR_5, off_t VAR_6, int VAR_7, struct ucred *VAR_8,
    struct thread *VAR_9)
{
 struct inode *VAR_10;
 int VAR_11;

 FUNC_0(VAR_5, "ext2_truncate");

 if (VAR_6 < 0)
  return (VAR_0);

 VAR_10 = FUNC_1(VAR_5);
 if (VAR_5->v_type == VAR_4 &&
     VAR_10->i_size < VAR_5->v_mount->mnt_maxsymlinklen) {




  FUNC_2((char *)&VAR_10->i_shortlink, (u_int)VAR_10->i_size);
  VAR_10->i_size = 0;
  VAR_10->i_flag |= VAR_1 | VAR_3;
  return (FUNC_5(VAR_5, 1));
 }
 if (VAR_10->i_size == VAR_6) {
  VAR_10->i_flag |= VAR_1 | VAR_3;
  return (FUNC_5(VAR_5, 0));
 }

 if (VAR_10->i_flag & VAR_2)
  VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 else
  VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 return (VAR_11);
}
