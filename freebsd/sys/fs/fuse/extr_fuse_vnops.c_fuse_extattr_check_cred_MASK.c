
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_data {int dataflags; } ;
typedef int accmode_t ;


 int VAR_0 ;


 int VAR_1 ;
 struct ucred* VAR_2 ;
 int VAR_3 ;
 struct fuse_data* FUNC_0 (struct mount*) ;
 int FUNC_1 (struct vnode*,int ,struct thread*,struct ucred*) ;
 int FUNC_2 (struct ucred*,int ) ;
 struct mount* FUNC_3 (struct vnode*) ;

__attribute__((used)) static int
FUNC_4(struct vnode *VAR_4, int VAR_5, struct ucred *VAR_6,
 struct thread *VAR_7, accmode_t VAR_8)
{
 struct mount *VAR_9 = FUNC_3(VAR_4);
 struct fuse_data *VAR_10 = FUNC_0(VAR_9);




 if (VAR_6 == VAR_2)
  return (0);





 switch (VAR_5) {
 case 129:
  if (VAR_10->dataflags & VAR_1) {
   return (FUNC_2(VAR_6, VAR_3));
  }

 case 128:
  return (FUNC_1(VAR_4, VAR_8, VAR_7, VAR_6));
 default:
  return (VAR_0);
 }
}
