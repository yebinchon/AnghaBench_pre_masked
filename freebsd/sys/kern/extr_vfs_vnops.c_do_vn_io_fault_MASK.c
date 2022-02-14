
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; struct mount* v_mount; } ;
struct uio {scalar_t__ uio_segflg; } ;
struct mount {int mnt_kern_flag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_0(struct vnode *VAR_4, struct uio *VAR_5)
{
 struct mount *VAR_6;

 return (VAR_5->uio_segflg == VAR_1 && VAR_4->v_type == VAR_2 &&
     (VAR_6 = VAR_4->v_mount) != ((void*)0) &&
     (VAR_6->mnt_kern_flag & VAR_0) != 0 && VAR_3);
}
