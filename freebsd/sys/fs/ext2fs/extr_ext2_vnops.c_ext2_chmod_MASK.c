
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct inode {int i_mode; int i_flag; int i_gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct vnode*,int ,struct ucred*,struct thread*) ;
 struct inode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (int ,struct ucred*) ;
 int FUNC_3 (struct ucred*,int ) ;

__attribute__((used)) static int
FUNC_4(struct vnode *VAR_9, int VAR_10, struct ucred *VAR_11, struct thread *VAR_12)
{
 struct inode *VAR_13 = FUNC_1(VAR_9);
 int VAR_14;





 if ((VAR_14 = FUNC_0(VAR_9, VAR_7, VAR_11, VAR_12)))
  return (VAR_14);





 if (VAR_9->v_type != VAR_8 && (VAR_10 & VAR_6)) {
  VAR_14 = FUNC_3(VAR_11, VAR_5);
  if (VAR_14)
   return (VAR_1);
 }
 if (!FUNC_2(VAR_13->i_gid, VAR_11) && (VAR_10 & VAR_3)) {
  VAR_14 = FUNC_3(VAR_11, VAR_4);
  if (VAR_14)
   return (VAR_14);
 }
 VAR_13->i_mode &= ~VAR_0;
 VAR_13->i_mode |= (VAR_10 & VAR_0);
 VAR_13->i_flag |= VAR_2;
 return (0);
}
