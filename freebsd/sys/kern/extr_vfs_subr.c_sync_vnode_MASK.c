
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct synclist {int dummy; } ;
struct mount {int dummy; } ;
struct bufobj {int bo_flag; } ;


 int FUNC_0 (struct bufobj*) ;
 int VAR_0 ;
 int FUNC_1 (struct bufobj*) ;
 struct bufobj* FUNC_2 (struct synclist*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*,int ,struct thread*) ;
 scalar_t__ FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*,int ) ;
 int VAR_4 ;
 struct vnode* FUNC_8 (struct bufobj*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct mount*) ;
 int FUNC_14 (struct vnode*,int) ;
 scalar_t__ FUNC_15 (struct vnode*,struct mount**,int ) ;
 int FUNC_16 (struct bufobj*,int ) ;

__attribute__((used)) static int
FUNC_17(struct synclist *VAR_7, struct bufobj **VAR_8, struct thread *VAR_9)
{
 struct vnode *VAR_10;
 struct mount *VAR_11;

 *VAR_8 = FUNC_2(VAR_7);
 if (*VAR_8 == ((void*)0))
  return (0);
 VAR_10 = FUNC_8(*VAR_8);
 if (FUNC_6(VAR_10) != 0 || FUNC_3(VAR_10) == 0)
  return (1);






 FUNC_12(VAR_10);
 FUNC_10(&VAR_5);
 FUNC_4(VAR_10);
 if (FUNC_15(VAR_10, &VAR_11, VAR_4) != 0) {
  FUNC_11(VAR_10);
  FUNC_9(&VAR_5);
  return (*VAR_8 == FUNC_2(VAR_7));
 }
 FUNC_14(VAR_10, VAR_1 | VAR_2);
 (void) FUNC_5(VAR_10, VAR_3, VAR_9);
 FUNC_7(VAR_10, 0);
 FUNC_13(VAR_11);
 FUNC_0(*VAR_8);
 if (((*VAR_8)->bo_flag & VAR_0) != 0) {






  FUNC_16(*VAR_8, VAR_6);
 }
 FUNC_1(*VAR_8);
 FUNC_11(VAR_10);
 FUNC_9(&VAR_5);
 return (0);
}
