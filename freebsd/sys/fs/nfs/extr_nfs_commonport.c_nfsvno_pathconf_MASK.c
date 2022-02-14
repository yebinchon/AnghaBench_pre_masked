
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int) ;
 long VAR_3 ;
 int FUNC_1 (struct vnode*,int,long*) ;




 int FUNC_2 (char*,int) ;

int
FUNC_3(struct vnode *VAR_4, int VAR_5, long *VAR_6,
    struct ucred *VAR_7, struct thread *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_9 == VAR_1 || VAR_9 == VAR_0) {






  switch (VAR_5) {
  case 130:
   *VAR_6 = VAR_3;
   break;
  case 129:
   *VAR_6 = VAR_2;
   break;
  case 131:
   *VAR_6 = 1;
   break;
  case 128:
   *VAR_6 = 1;
   break;
  default:




   *VAR_6 = 0;
   FUNC_2("nfsrvd pathconf flag=%d not supp\n", VAR_5);
  }
  VAR_9 = 0;
 }
 FUNC_0(VAR_9);
 return (VAR_9);
}
