
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vnode*,int,char const*,int *,struct thread*) ;
 int FUNC_2 (struct vnode*,int,char const*,int *,int *,struct thread*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct vnode*,int) ;
 int FUNC_6 (struct vnode*,struct mount**,int ) ;

int
FUNC_7(struct vnode *VAR_5, int VAR_6, int VAR_7,
    const char *VAR_8, struct thread *VAR_9)
{
 struct mount *VAR_10;
 int VAR_11;

 if ((VAR_6 & VAR_1) == 0) {
  if ((VAR_11 = FUNC_6(VAR_5, &VAR_10, VAR_4)) != 0)
   return (VAR_11);
  FUNC_5(VAR_5, VAR_2 | VAR_3);
 }

 FUNC_0(VAR_5, "IO_NODELOCKED with no vp lock held");


 VAR_11 = FUNC_1(VAR_5, VAR_7, VAR_8, ((void*)0), VAR_9);
 if (VAR_11 == VAR_0)
  VAR_11 = FUNC_2(VAR_5, VAR_7, VAR_8, ((void*)0),
      ((void*)0), VAR_9);

 if ((VAR_6 & VAR_1) == 0) {
  FUNC_4(VAR_10);
  FUNC_3(VAR_5, 0);
 }

 return (VAR_11);
}
