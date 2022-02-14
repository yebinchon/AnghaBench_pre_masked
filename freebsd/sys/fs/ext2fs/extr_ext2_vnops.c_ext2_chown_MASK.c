
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct inode {scalar_t__ i_uid; scalar_t__ i_gid; int i_mode; int i_flag; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct vnode*,int ,struct ucred*,struct thread*) ;
 struct inode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (scalar_t__,struct ucred*) ;
 int FUNC_3 (struct ucred*,int ) ;

__attribute__((used)) static int
FUNC_4(struct vnode *VAR_7, uid_t VAR_8, gid_t VAR_9, struct ucred *VAR_10,
    struct thread *VAR_11)
{
 struct inode *VAR_12 = FUNC_1(VAR_7);
 uid_t VAR_13;
 gid_t VAR_14;
 int VAR_15 = 0;

 if (VAR_8 == (uid_t)VAR_6)
  VAR_8 = VAR_12->i_uid;
 if (VAR_9 == (gid_t)VAR_6)
  VAR_9 = VAR_12->i_gid;




 if ((VAR_15 = FUNC_0(VAR_7, VAR_5, VAR_10, VAR_11)))
  return (VAR_15);





 if (VAR_8 != VAR_12->i_uid || (VAR_9 != VAR_12->i_gid &&
     !FUNC_2(VAR_9, VAR_10))) {
  VAR_15 = FUNC_3(VAR_10, VAR_3);
  if (VAR_15)
   return (VAR_15);
 }
 VAR_14 = VAR_12->i_gid;
 VAR_13 = VAR_12->i_uid;
 VAR_12->i_gid = VAR_9;
 VAR_12->i_uid = VAR_8;
 VAR_12->i_flag |= VAR_0;
 if ((VAR_12->i_mode & (VAR_2 | VAR_1)) && (VAR_13 != VAR_8 || VAR_14 != VAR_9)) {
  if (FUNC_3(VAR_10, VAR_4) != 0)
   VAR_12->i_mode &= ~(VAR_2 | VAR_1);
 }
 return (0);
}
