
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vnode*,int,char const*,int ,struct thread*) ;
 int FUNC_1 (struct vnode*,int,char const*,int *,int ,struct thread*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,struct vnode*,int,char const*) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct vnode*,int) ;
 int FUNC_6 (struct vnode*,struct mount**,int) ;

__attribute__((used)) static int
FUNC_7(struct vnode *VAR_5, int VAR_6, const char *VAR_7,
    struct thread *VAR_8)
{
 struct mount *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_6(VAR_5, &VAR_9, VAR_4 | VAR_3);
 if (VAR_10)
  return (VAR_10);
 FUNC_5(VAR_5, VAR_1 | VAR_2);
 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8->td_ucred,
     VAR_8);
 if (VAR_10 == VAR_0)
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7, ((void*)0),
      VAR_8->td_ucred, VAR_8);



 FUNC_2(VAR_5, 0);
 FUNC_4(VAR_9);
 return (VAR_10);
}
