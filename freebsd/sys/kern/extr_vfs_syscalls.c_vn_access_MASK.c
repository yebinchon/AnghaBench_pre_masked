
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
typedef int accmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*,int,struct ucred*,struct thread*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ucred*,struct vnode*,int) ;
 int FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct vnode *VAR_6, int VAR_7, struct ucred *VAR_8,
     struct thread *VAR_9)
{
 accmode_t VAR_10;
 int VAR_11;


 if (VAR_7 == 0)
  return (0);

 VAR_10 = 0;
 if (VAR_7 & VAR_0)
  VAR_10 |= VAR_2;
 if (VAR_7 & VAR_4)
  VAR_10 |= VAR_3;
 if (VAR_7 & VAR_5)
  VAR_10 |= VAR_1;





 if ((VAR_10 & VAR_3) == 0 || (VAR_11 = FUNC_2(VAR_6)) == 0)
  VAR_11 = FUNC_0(VAR_6, VAR_10, VAR_8, VAR_9);
 return (VAR_11);
}
