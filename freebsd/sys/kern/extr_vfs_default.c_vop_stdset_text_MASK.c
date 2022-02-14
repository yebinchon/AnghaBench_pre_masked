
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_set_text_args {struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_writecount; int v_iflag; struct mount* v_mount; } ;
struct mount {int mnt_kern_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*) ;
 int VAR_2 ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;

int
FUNC_3(struct vop_set_text_args *VAR_3)
{
 struct vnode *VAR_4;
 struct mount *VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->a_vp;
 FUNC_0(VAR_4);
 if (VAR_4->v_writecount > 0) {
  VAR_6 = VAR_0;
 } else {




  VAR_5 = VAR_4->v_mount;
  if (VAR_5 != ((void*)0) && (VAR_5->mnt_kern_flag & VAR_1) != 0 &&
      VAR_4->v_writecount == 0) {
   VAR_4->v_iflag |= VAR_2;
   FUNC_2(VAR_4);
  }

  VAR_4->v_writecount--;
  VAR_6 = 0;
 }
 FUNC_1(VAR_4);
 return (VAR_6);
}
