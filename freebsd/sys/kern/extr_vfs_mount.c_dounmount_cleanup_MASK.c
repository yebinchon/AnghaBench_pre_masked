
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int mnt_kern_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct mount*) ;

__attribute__((used)) static void
FUNC_8(struct mount *VAR_2, struct vnode *VAR_3, int VAR_4)
{

 FUNC_3(FUNC_1(VAR_2), VAR_0);
 VAR_2->mnt_kern_flag &= ~VAR_4;
 if ((VAR_2->mnt_kern_flag & VAR_1) != 0) {
  VAR_2->mnt_kern_flag &= ~VAR_1;
  FUNC_7(VAR_2);
 }
 FUNC_5(VAR_2);
 FUNC_0(VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_3, 0);
  FUNC_4(VAR_3);
 }
 FUNC_6(VAR_2);
}
