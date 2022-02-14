
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int v_iflag; struct mount* v_mount; } ;
struct mount {int dummy; } ;
struct TYPE_3__ {struct vnode* p_textvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct mount*,int ) ;
 int FUNC_1 (int *,struct mount*,int ) ;
 int FUNC_2 (int *,struct mount*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct vnode*,int ) ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct vnode*,struct vnode*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct mount* VAR_11 ;
 struct vnode* VAR_12 ;
 int FUNC_7 (struct mount*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct mount*) ;
 int FUNC_11 (struct mount*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_14(void)
{
 struct vnode *VAR_13, *VAR_14;
 struct mount *VAR_15, *VAR_16;
 int VAR_17;

 if (VAR_6 != VAR_7)
  return (VAR_1);





 VAR_14 = VAR_6->p_textvp;
 VAR_17 = FUNC_13(VAR_14, VAR_3);
 if (VAR_17 != 0)
  return (VAR_17);
 VAR_15 = VAR_14->v_mount;
 VAR_17 = FUNC_7(VAR_15, VAR_4);
 if (VAR_17 != 0) {
  FUNC_9(VAR_15);
  FUNC_3(VAR_14, 0);
  VAR_17 = FUNC_7(VAR_15, 0);
  FUNC_13(VAR_14, VAR_3 | VAR_2);
  FUNC_10(VAR_15);
  if (VAR_17 != 0) {
   FUNC_3(VAR_14, 0);
   return (VAR_0);
  }
  if (VAR_14->v_iflag & VAR_5) {
   FUNC_3(VAR_14, 0);
   FUNC_11(VAR_15);
   return (VAR_0);
  }
 }
 FUNC_3(VAR_14, 0);
 FUNC_9(VAR_11);
 VAR_16 = VAR_11;
 VAR_11 = ((void*)0);

 FUNC_5(&VAR_10);
 FUNC_2(&VAR_9, VAR_15, VAR_8);
 FUNC_2(&VAR_9, VAR_16, VAR_8);
 FUNC_6(&VAR_10);

 VAR_13 = VAR_12;




 FUNC_12();




 FUNC_5(&VAR_10);
 FUNC_0(&VAR_9, VAR_16, VAR_8);
 FUNC_6(&VAR_10);
 VAR_11 = VAR_16;
 FUNC_10(VAR_11);




 FUNC_8();




 FUNC_4(VAR_13, VAR_12);




 FUNC_5(&VAR_10);
 FUNC_1(&VAR_9, VAR_15, VAR_8);
 FUNC_6(&VAR_10);
 FUNC_11(VAR_15);

 return (0);
}
